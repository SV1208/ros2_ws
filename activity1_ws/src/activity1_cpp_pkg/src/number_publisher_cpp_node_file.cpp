#include "rclcpp/rclcpp.hpp"
#include "example_interfaces/msg/int64.hpp"

class NumberPublisherNode : public rclcpp::Node
{
public:
    //constructor
    NumberPublisherNode() : Node("number_publisher")
    {
        //RCLCPP_INFO(this->get_logger(),"Hello CPP Node");
        //publisher created inside constructor
        this->declare_parameter("low", 0);
        this->declare_parameter("high", 9);
        this->declare_parameter("freq",1.0);

        low = this->get_parameter("low").as_int();
        high = this->get_parameter("high").as_int();
        double freq = this->get_parameter("freq").as_double();

        publisher_ = this->create_publisher<example_interfaces::msg::Int64>("number",10);
        timer_ = this->create_wall_timer(std::chrono::milliseconds((int)(1000.0/freq)), std::bind(&NumberPublisherNode::publishNumber, this));
        
        RCLCPP_INFO(this->get_logger(), "number_publisher node has started");
    }       
private:
    void publishNumber()
    {

        auto msg = example_interfaces::msg::Int64();
        
        msg.data =  (std::rand() % (high - low + 1)) + low;
        
        publisher_->publish(msg);
    }
    int high, low;
    rclcpp::Publisher<example_interfaces::msg::Int64>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char **argv){

    rclcpp::init(argc, argv);
    //auto node = std::make_shared<rclcpp::Node>("number_publisher_node");
    //RCLCPP_INFO(node->get_logger(), "Hello CPP Node");
    auto node = std::make_shared<NumberPublisherNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();

}