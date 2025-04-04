#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from example_interfaces.msg import Int64
import random 

class NumberPublisherNode(Node):
    def __init__(self):
        super().__init__("number_publisher") # this is the node name shown on rqt_graph
        self.declare_parameter('low', 0)
        self.declare_parameter('high', 9)
        self.declare_parameter('freq', 1.0) # Publisher frequency

        self.low = self.get_parameter('low').value
        self.high = self.get_parameter('high').value
        self.freq = self.get_parameter('freq').value

        self.publisher_ =  self.create_publisher(Int64, "number", 10) # 'number' topic, keep a queue of 10 for delayed messages
        self.timer_ = self.create_timer(1.0/self.freq, self.publish_number) # here 0.5 means, publish after every 0.5 seconds
        self.get_logger().info("number_publisher has started")
        
    def publish_number(self):
        msg = Int64()
        msg.data = random.randint(self.low,self.high)
        self.publisher_.publish(msg)

def main(args=None):
    rclpy.init(args=args)

    node = NumberPublisherNode()
    
    rclpy.spin(node)
    rclpy.shutdown()


if __name__=="__main__":
    main()
