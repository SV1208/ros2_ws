#include "rclcpp/rclcpp.hpp"
#include "activity1_interfaces/srv/set_led.hpp"
#include "activity1_interfaces/msg/panel.hpp"



int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::shutdown();
}