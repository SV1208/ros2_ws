import rclpy
from rclpy.node import Node
from example_interfaces.msg import Int64
from std_srvs.srv import SetBool

class NumberCounterNode(Node):

    def __init__(self):
        super().__init__('number_counter')
        self.count = 0
        self.get_logger().info("number_counter has been started")
        self.subsriber_ = self.create_subscription(Int64, 'number', self.callback_number, 10)
        self.publisher_ = self.create_publisher(Int64, 'number_count', 10)
        self.server_ = self.create_service(SetBool,'reset_number_count',self.callback_reset_number_count)
    
    def callback_number(self, msg):
        data = msg.data
        self.get_logger().info(str(data))
        self.count+=data

        msg2 = Int64()
        msg2.data = self.count
        self.publisher_.publish(msg2)
    
    def callback_reset_number_count(self,request, response):
        if request.data == True:
            self.count = 0
            self.get_logger().info("Number Count has been resetted to 0.")
        return response

def main(args=None):
    rclpy.init(args=args)

    node = NumberCounterNode()

    rclpy.spin(node)
    rclpy.shutdown()

if __name__=="__main__":
    main()