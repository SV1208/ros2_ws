#include "rclcpp/rclcpp.hpp"
#include "activity1_interfaces/srv/set_led.hpp"
#include "activity1_interfaces/msg/panel.hpp"


/*
int[3] battery_panel_state = [1,0,1];
this->declare_parameter("battery_panel_state", battery_panel_state);
battery_panel_state = this->get_parameter("battery_panel_state").as_int_array();

*/

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::shutdown();
}
