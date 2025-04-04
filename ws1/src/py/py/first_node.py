#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

class MyNode(Node):
	def __init__(self):
		super().__init__("my_node")


def main(args=None):
	rclpy.init(args=args)
	node = MyNode()
	rclpy.spin(node) 
	rclpy.shutdown()
	
if __name__=="__main__":
	main()


# import time
# from rclpy.action import ActionServer
# from rclpy.action.server import ServerGoalHandle
# from my_interfaces.action import CountUntil


	# 	self.server_ = ActionServer(self, CountUntil, "count_until", execute_callback=self.execute_callback)
	# 	self.get_logger().info("Common baby, action server has been started")
	
	# def execute_callback(self, goal_handle: ServerGoalHandle):
	# 	#get the goal
	# 	target_number = goal_handle.request.target_number
	# 	period = goal_handle.request.period

	# 	# execute goal
	# 	self.get_logger().info("executing the goal")
	# 	feedback = CountUntil.Feedback()
	# 	count = 0
	# 	for i in range(target_number):
	# 		count+=1
	# 		self.get_logger().info(str(count))
	# 		feedback.current_number = count
	# 		goal_handle.publish_feedback(feedback)
	# 		time.sleep(period)

	# 	# once done, set the final state
	# 	goal_handle.succeed()

	# 	# and send the result
	# 	result = CountUntil.Result()
	# 	result.reached_number = count
	# 	return result


	# 	self.pub_ = self.create_publisher(String, "msg", 10)
	# 	self.create_timer(0.5, self.send_msg)
	# 	self.count = 0

	# def send_msg(self):
	# 	msg = String()
	# 	msg.data = "Count is "+str(self.count)
	# 	self.pub_.publish(msg)

	# 	self.count+=1

	# 	self.declare_parameter("saheb", "RoboMaven")
	# 	self.pub_ = self.create_publisher(String,"saheb", 10)
	# 	self.create_timer(0.5, self.saheb)
	
	# def saheb(self):
	# 	msg = String()
	# 	saheb = self.get_parameter("saheb")
	# 	msg.data = "Hamare Saheb hain Mr. "+str(saheb.value)
	# 	self.pub_.publish(msg)

	# 	self.server_ = self.create_service(Kill, "kill", self.kill_deal)
	# 	self.ask_to_kill("Overthinking version 2.0", 1000)
	
	# def ask_to_kill(self, name, amount):
	# 	client = self.create_client(Kill, "kill")
	# 	while not client.wait_for_service():
	# 		self.get_logger().warn("Service aadmi abhi so raha hai")
		
	# 	request = Kill.Request()
	# 	request.name = name
	# 	request.amount = amount

	# 	client.call_async(request)

	
	# def kill_deal(self, request, response):
	# 	name = request.name
	# 	amount = request.amount

	# 	if amount >= 4:
	# 		response.killed = True
	# 		self.get_logger().info(name+" mara gaya. Mere ko paisa do warna tum. bhi...")
	# 	else:
	# 		response.killed = False
	# 		self.get_logger().info("Itte rupalli mein nahi hoga kaam re baba.")

	# 	return response

# from my_interfaces.msg import Login
	# 	self.pub_ = self.create_publisher(Login, "login", 10)
	# 	self.create_timer(0.5, self.send_login_info)
		
	# 	self.sub_  = self.create_subscription(Login, "login", self.check_login, 10)
	
	# def send_login_info(self):
	# 	info = Login()
	# 	info.username = "Shivanshu"
	# 	info.password = 124234
	# 	self.pub_.publish(info)
	
	# def check_login(self, info):
	# 	username = info.username
	# 	password = info.password
	# 	if username =="Shivanshu":
	# 		if password == 124234:
	# 			self.get_logger().info("You have logged in to the Hell successfully.")
	# 		else:
	# 			self.get_logger().info("You do not deserve hell, login terminated")

# from my_interfaces.msg import ProjectInfo
# from my_interfaces.msg import KillerData

	# 	self.pub_ = self.create_publisher(KillerData, 'kill_info', 10)
	# 	self.timer_ = self.create_timer(0.5, self.send_info)
	
	# def send_info(self):
	# 	info = KillerData()
	# 	info.killername = "Shivanshu"
	# 	info.numberofpeoplekilled = 10
	# 	info.keykilledpeople = ['procrastination', 'overthinking', 'time wasting', 'loose self-control','indiscipline']
	# 	self.pub_.publish(info)


	# 	self.pub_ = self.create_publisher(ProjectInfo, 'project', 10)
	# 	self.timer_ = self.create_timer(0.5, self.send_msg)

	# def send_msg(self):
	# 	msg = ProjectInfo()
	# 	msg.id = 1
	# 	msg.name = "HellFinder"
	# 	msg.description = "This Project Is to find the way to hell."
	# 	msg.completed = False
	# 	self.pub_.publish(msg)

	
# from example_interfaces.srv import AddTwoInts
	# 	self.get_logger().info("Ask me to add, please")
	# 	self.server_ = self.create_service(AddTwoInts, "adding_service", self.add_it_and_give_response)
	# 	self.ask_to_add(4,5)
		
	# def ask_to_add(self, a, b):
	# 	client = self.create_client(AddTwoInts, "adding_service")
	# 	while not client.wait_for_service():
	# 		self.get_logger().warn("Hey, the service doer is dead, make him alive")

	# 	request = AddTwoInts.Request()
	# 	request.a = a
	# 	request.b = b

	# 	future = client.call_async(request)
	# 	future.add_done_callback(self.what_happened_after_asking)
	
	# def what_happened_after_asking(self, future):
	# 	try:
	# 		response = future.result()
	# 		self.get_logger().info("Hey, job done babe, the sum is "+str(response.sum))
	# 	except:
	# 		self.get_logger().error("No problem, try your best next time, failure is a part of life")
	
	# def add_it_and_give_response(self, request, response):
	# 	response.sum = request.a + request.b
	# 	self.get_logger().info("Hey buddy, done job: "+str(request.a)+' + '+str(request.b)+" = "+str(response.sum))
	# 	return response
	

	# 	self.counter = 0
	# 	self.get_logger().info("Hello ROS2")
	
	# 	self.publisher_ = self.create_publisher(String, "my_topic", 10)
	# 	self.create_timer(1, self.publish_message)

	# 	self.subscriber_ = self.create_subscription(String, "my_topic", self.read_message, 10)
	
	# def read_message(self, msg):
	# 	self.get_logger().info('Got message: '+ str(msg.data))
	
	# def publish_message(self):
	# 	msg = String()
	# 	self.get_logger().info("publishing messsage ...")
	# 	msg.data = "Current count is "+str(self.counter)
	# 	self.publisher_.publish(msg)
	# 	self.counter+=1

