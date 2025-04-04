#!/usr/bin/env python3
import rclpy
from rclpy.lifecycle.node import LifecycleState, TransitionCallbackReturn
from rclpy.node import Node
from rclpy.lifecycle import LifecycleNode
from example_interfaces.msg import Int64

class NumberPublisherNode(LifecycleNode):
    def __init__(self):
        super().__init__("number_publisher")
        self.get_logger().info("In constructor")
        self.number_ = 1
        self.publish_frequency_ = 1.0
        self.number_publisher_ = None
        self.number_timer_ = None
        # self.number_publisher_ = self.create_publisher(Int64, "number", 10)
        # self.number_timer_ = self.create_timer(
        #     1.0 / self.publish_frequency_, self.publish_number)
        # self.get_logger().info("Number publisher has been started.")

    # Create ROS2 communications, connect to HW (hardware)
    def on_configure(self, previous_state: LifecycleState):
        self.get_logger().info("In on_configure")
        self.number_publisher_ = self.create_lifecycle_publisher(Int64, "number", 10)
        self.number_timer_ = self.create_timer(
            1.0 / self.publish_frequency_, self.publish_number)
        self.number_timer_.cancel()
        
        return TransitionCallbackReturn.SUCCESS

    
    # Activate/Enable HW
    def on_activate(self, previous_state: LifecycleState):
        self.get_logger().info("In on_activate")
        self.number_timer_.reset()
        return super().on_activate(previous_state)
    
    # Deactivate/Disable HW
    def on_deactivate(self, previous_state: LifecycleState):
        self.get_logger().info("In on_deactivate")
        self.number_timer_.cancel()
        return super().on_deactivate(previous_state)

    # Destroy ROS2 communications, disconnect from HW
    def  on_cleanup(self, previous_state: LifecycleState):
        self.get_logger().info("In on_cleanup")
        self.destroy_lifecycle_publisher(self.number_publisher_)
        self.destroy_timer(self.number_timer_)
        return TransitionCallbackReturn.SUCCESS
    
    
    # Cleanup everything
    def on_shutdown(self, previous_state: LifecycleState):
        self.get_logger().info("In on_shutdown")
        self.destroy_lifecycle_publisher(self.number_publisher_)
        self.destroy_timer(self.number_timer_)
        return TransitionCallbackReturn.SUCCESS

    # Process Error and deactivate + cleanup
    def on_error(self, previous_state: LifecycleState):
        self.get_logger().info("In on_error")
        self.destroy_lifecycle_publisher(self.number_publisher_)
        self.destroy_timer(self.number_timer_)
        
        # do some check, if ok then return success
        return TransitionCallbackReturn.SUCCESS

    def publish_number(self):
        msg = Int64()
        msg.data = self.number_
        self.number_publisher_.publish(msg)
        self.number_ += 1

def main(args=None):
    rclpy.init(args=args)
    node = NumberPublisherNode()
    rclpy.spin(node)
    rclpy.shutdown()
