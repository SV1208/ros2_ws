#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from rclpy.action.server import ServerGoalHandle, GoalResponse, CancelResponse
from my_robot_interfaces.action import MoveRobot
import time
from rclpy.executors import MultiThreadedExecutor
from rclpy.callback_groups import ReentrantCallbackGroup
import threading

class MoveRobotServerNode(Node):
    def __init__(self):
        super().__init__("move_robot_server") 
        self.goal_handle_ : ServerGoalHandle = None
        self.goal_lock_ = threading.Lock()
        self.robot_position_ = 50
        self.move_robot_server_ = ActionServer(self, MoveRobot, "move_robot",
            goal_callback=self.goal_callback,
            cancel_callback=self.cancel_callback,
            execute_callback=self.execute_callback,
            callback_group=ReentrantCallbackGroup())
        
        self.get_logger().info("Action server has been started...")
        self.get_logger().info("Robot Position: "+ str(self.robot_position_))
    
    def goal_callback(self, goal_request: MoveRobot.Goal):
        self.get_logger().info("Received a new goal")
        if goal_request.position not in range(0, 100) or goal_request.velocity<=0:
            self.get_logger().warn("Invalid position/velocity, reject goal")
            return GoalResponse.REJECT
        # New goal is valid, abort previous goal, accept new goal
        if self.goal_handle_ is not None and self.goal_handle_.is_active:
            self.goal_handle_.abort()


        self.get_logger().info("Accept goal")
        return GoalResponse.ACCEPT
    
    def cancel_callback(self, goal_handle: ServerGoalHandle):
        self.get_logger().info("Received a cancel request")
        return CancelResponse.ACCEPT

    def execute_callback(self, goal_handle: ServerGoalHandle):
        with self.goal_lock_:
            self.goal_handle_ = goal_handle

        goal_position = goal_handle.request.position
        velocity = goal_handle.request.velocity
        self.get_logger().info("Execute goal")

        result = MoveRobot.Result()
        feedback = MoveRobot.Feedback()

        while rclpy.ok():
            if not goal_handle.is_active:
                result.position = self.robot_position_
                result.message = "Preempted by another goal"
                return result
            
            if goal_handle.is_cancel_requested:
                result.position = self.robot_position_
                if goal_position == self.robot_position_:
                    result.message = "Success after cancel request"
                    goal_handle.succeed()
                else:
                    result.message = "Canceled"
                    goal_handle.canceled()
                return result
            
            diff = goal_position - self.robot_position_
            
            if diff == 0:
                result.position = self.robot_position_
                result.message = "Success"
                goal_handle.succeed()
                return result
            
            elif diff > 0:
                if diff >= velocity:
                    self.robot_position_ += velocity
                else:
                    self.robot_position_ += diff
            else:
                if abs(diff) >= velocity:
                    self.robot_position_ -= velocity
                else:
                    self.robot_position_ -= abs(diff)

            self.get_logger().info("Robot Position: "+ str(self.robot_position_))
            feedback.current_position = self.robot_position_
            goal_handle.publish_feedback(feedback)
            time.sleep(1.0)




def main(args=None):
    rclpy.init(args=args)
    node = MoveRobotServerNode() 
    rclpy.spin(node, MultiThreadedExecutor())
    rclpy.shutdown()

if __name__=="__main__":
    main()