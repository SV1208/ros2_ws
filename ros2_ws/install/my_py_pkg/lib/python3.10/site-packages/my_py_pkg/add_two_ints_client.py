import rclpy
from rclpy.node import Node
# functools is a python functionality so, need not to add in package.xml
from functools import partial
from example_interfaces.srv import AddTwoInts

class AddTwoIntsClientNode(Node):
    def __init__(self):
        super().__init__("add_two_ints_client")
        self.call_add_two_ints(4,5)
        self.call_add_two_ints(5,6)
        self.call_add_two_ints(2,3)
    
    
    def call_add_two_ints(self, a, b):
        client = self.create_client(AddTwoInts, 'add_two_ints')
        while not client.wait_for_service(1):
            self.get_logger().warn("waiting for service...")
        
        request = AddTwoInts.Request()
        request.a = a
        request.b = b

        future = client.call_async(request)
        #we can't do following as node already spinning
        #rclpy.spin_until_future_complete(node, future)
        
        #when future response is ready then call the callback function
        future.add_done_callback(partial(self.callback_call_add_two_ints,a=a,b=b))
        # in above 'partial' is used to provide additional arguments to callback_call_add_two_ints as add_done_callback will only
        # provide future 

    def callback_call_add_two_ints(self, future, a, b):
        try:
            response = future.result()
            self.get_logger().info(str(a)+" + "+str(b)+" = "+str(response.sum))
        except Exception as e:
            self.get_logger().error("service failed: %r"%(e,))

def main(args=None):
    rclpy.init(args=args)
    node = AddTwoIntsClientNode()
    rclpy.spin(node)
    rclpy.shutdown()