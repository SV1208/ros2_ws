#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

class MyNode(Node):
	def __init__(self):
		super().__init__("my_node2")


def main(args=None):
	rclpy.init(args=args)
	node = MyNode()
	rclpy.spin(node) 
	rclpy.shutdown()
	
if __name__=="__main__":
	main()


	# node.send_goal(8, 1.0)

# from my_interfaces.action import CountUntil
# from rclpy.action import ActionClient

	# 	self.client = ActionClient(self, CountUntil, 'count_until')

	# def send_goal(self, target_number, period):
	# 	# wait for ther server
	# 	self.client.wait_for_server()

	# 	# create a goal
	# 	goal = CountUntil.Goal()
	# 	goal.target_number =target_number
	# 	goal.period = period

	# 	# send the goal
	# 	self.get_logger().info("Sending the goal")
	# 	self.client.send_goal_async(goal, feedback_callback=self.feedback_callback)
	
	# def feedback_callback(self, msg):
	# 	reached_number = msg.feedback.current_number
	# 	self.get_logger().info("Got feedback: "+str(reached_number))



	# 	self.pub_ = self.create_publisher(Login, "login", 10)
	# 	self.create_timer(0.5, self.send_login_info)
	
	# def send_login_info(self):
	# 	info = Login()
	# 	info.username = "Shivanshu"
	# 	info.password = 124234
	# 	self.pub_.publish(info)
