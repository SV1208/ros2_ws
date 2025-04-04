import rclpy
from rclpy.node import Node
from activity1_interfaces.srv import SetLED
from activity1_interfaces.msg import Panel

class LEDPanelNode(Node):
    def __init__(self):
        super().__init__("led_panel")
        self.declare_parameter("battery_panel_state",[0,1,0])
        self.led_panel_state = self.get_parameter("battery_panel_state").value

        server_  = self.create_service(SetLED, "set_led", self.callback_set_led)
        self.publisher_ = self.create_publisher(Panel, 'led_panel_status', 10)
        self.timer_ = self.create_timer(0.5, self.publish_panel)

        self.get_logger().info("led panel has been started")
        

    def callback_set_led(self, request, response):
        led = request.led_number
        state = int(request.state)
        try:
            self.led_panel_state[led]=state

            self.get_logger().info(str(self.led_panel_state[0])+" "+str(self.led_panel_state[1])+" "+str(self.led_panel_state[2]))
            response.success = True
        except:
            response.success = False
            
        return response
    
    def publish_panel(self):
        msg = Panel()
        msg.led1 = self.led_panel_state[0]
        msg.led2 = self.led_panel_state[1]
        msg.led3 = self.led_panel_state[2]
        self.publisher_.publish(msg)


def main(args=None):
    rclpy.init(args=args)
    node = LEDPanelNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__=="__main__":
    main()
    