import rclpy
from rclpy.node import Node
# functools is a python functionality so, need not to add in package.xml
from functools import partial
from activity1_interfaces.srv import SetLED
import time

class BatteryNode(Node):
    def __init__(self):
        super().__init__("battery")
        self.get_logger().info("battery node is running")
        time.sleep(4)
        self.call_set_led(0,True)
        time.sleep(6)
        self.call_set_led(0,False)
        time.sleep(2)
        led_number=led_number,state=state
        self.call_set_led(2,True)
    
    
    def call_set_led(self, led_number, state):
        client = self.create_client(SetLED, 'set_led')
        while not client.wait_for_service(1):
            self.get_logger().warn("waiting for service...")
        
        request = SetLED.Request()
        request.led_number = led_number
        request.state = state

        future = client.call_async(request)
        #we can't do following as node already spinning
        #rclpy.spin_until_future_complete(node, future)
        
        #when future response is ready then call the callback function
        future.add_done_callback(partial(self.callback_call_set_led,led_number=led_number,state=state))
        # in above 'partial' is used to provide additional arguments to callback_call_add_two_ints as add_done_callback will only
        # provide future 

    def callback_call_set_led(self, future,led_number, state):
        try:
            response = future.result()
            if response.success:
                self.get_logger().info("Success")

        except Exception as e:
            self.get_logger().error("service failed: %r"%(e,))

def main(args=None):
    rclpy.init(args=args)
    node = BatteryNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__=="__main__":
    main()
