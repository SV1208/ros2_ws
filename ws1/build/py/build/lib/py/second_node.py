#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from my_interfaces.msg import Login

class MyNode(Node):
	def __init__(self):
		super().__init__("my_node")
		self.pub_ = self.create_publisher(Login, "login", 10)
		self.create_timer(0.5, self.send_login_info)
	
	def send_login_info(self):
		info = Login()
		info.username = "Shivanshu"
		info.password = 124234
		self.pub_.publish(info)


def main(args=None):
	rclpy.init(args=args)
	node = MyNode()
	rclpy.spin(node) 
	rclpy.shutdown()
	
if __name__=="__main__":
	main()
