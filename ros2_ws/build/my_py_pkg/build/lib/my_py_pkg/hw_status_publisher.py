#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from my_robot_interfaces.msg import HardwareStatus

class HardwareStatusPublisherNode(Node): # MODIFY NAME
    
    def __init__(self):
        super().__init__("hw_status_publisher") # MODIFY NAME
        self.publisher_ = self.create_publisher(HardwareStatus, 'hw_status',10)
        timer_ = self.create_timer(1.0, self.publishHardwareStatus)
        self.get_logger().info("Hardware Status Publisher has been started...")

    def publishHardwareStatus(self):
        msg = HardwareStatus()
        msg.temperature = 56
        msg.are_motors_ready = True
        msg.debug_message = "Motors can operate till 450 rpm"
        self.publisher_.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = HardwareStatusPublisherNode() # MODIFY NAME
    rclpy.spin(node)
    rclpy.shutdown()

if __name__=="__main__":
    main()