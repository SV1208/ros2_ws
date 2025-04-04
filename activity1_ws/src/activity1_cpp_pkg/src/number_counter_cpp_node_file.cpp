#include "rclcpp/rclcpp.hpp"
#include "example_interfaces/msg/int64.hpp"
#include "std_srvs/srv/set_bool.hpp"

using std::placeholders::_1;

class NumberCounterNode : public rclcpp::Node
{
public:
    NumberCounterNode() : Node("number_counter")
    {

        RCLCPP_INFO(this->get_logger(), "number_counter node has been started");

        subscriber_ = this->create_subscription<example_interfaces::msg::Int64>("number", 10,
                                                                                std::bind(&NumberCounterNode::callbackNumber, this, std::placeholders::_1));

        publisher_ = this->create_publisher<example_interfaces::msg::Int64>("number_count", 10);

        server_ = this->create_service<std_srvs::srv::SetBool>(
            "reset_number_count",
            std::bind(&NumberCounterNode::callbackResetNumberCount, this, _1));
    }

private:
    long int count = 0;

    void callbackNumber(const example_interfaces::msg::Int64::SharedPtr msg)
    {
        RCLCPP_INFO(this->get_logger(), "%ld", msg->data);
        count += msg->data;

        msg2.data = count;
        publisher_->publish(msg2);
    }

    // const std_srvs::srv::SetBool::Response::SharedPtr response

    void callbackResetNumberCount(const std_srvs::srv::SetBool::Request::SharedPtr request)
    {

        if (request->data)
        {
            count = (long int) 0;
            RCLCPP_INFO(this->get_logger(), "Number Count has been resetted.");
        }
    }

    rclcpp::Subscription<example_interfaces::msg::Int64>::SharedPtr subscriber_;
    rclcpp::Publisher<example_interfaces::msg::Int64>::SharedPtr publisher_;
    example_interfaces::msg::Int64 msg2;
    rclcpp::Service<std_srvs::srv::SetBool>::SharedPtr server_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<NumberCounterNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
}