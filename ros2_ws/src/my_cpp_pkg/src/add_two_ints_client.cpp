#include "rclcpp/rclcpp.hpp"
#include "example_interfaces/srv/add_two_ints.hpp"

class AddTwoIntsClientNode: public rclcpp::Node 
{
public:
    AddTwoIntsClientNode() : Node("add_two_ints_client")
    {
        //thread1_ = std::thread(std::bind(&AddTwoIntsClientNode::callAddTwoIntsService, this, 4, 5));
        threads_.push_back(std::thread(std::bind(&AddTwoIntsClientNode::callAddTwoIntsService, this, 4, 5)));
        threads_.push_back(std::thread(std::bind(&AddTwoIntsClientNode::callAddTwoIntsService, this, 5, 6)));
        threads_.push_back(std::thread(std::bind(&AddTwoIntsClientNode::callAddTwoIntsService, this, 2, 5)));
    }

    void callAddTwoIntsService(int a, int b)
    {
        auto client = this->create_client<example_interfaces::srv::AddTwoInts>("add_two_ints");
        while (!client->wait_for_service(std::chrono::seconds(1)))
        {
            RCLCPP_WARN(this->get_logger(),"Waiting for the server to be up...");
        }

        auto request = std::make_shared<example_interfaces::srv::AddTwoInts::Request>();
        request->a = a;
        request->b = b;

        auto future = client->async_send_request(request);
        try 
        {
            auto response = future.get();
            RCLCPP_INFO(this->get_logger(), "%d + %d = %ld", a, b, response->sum);
        }
        catch (const std::exception &e)
        {
            RCLCPP_ERROR(this->get_logger(), "Service call failed");
        }
    }

private:
    //Single Thread following
    //std::thread thread1_;

    //Multiple threads in a vector could be used for making multiple request, with multiple threads
    std::vector<std::thread> threads_;

    /* We can not use spin_until_future_complete inside the node as it is already spinning outside, using rclcpp::spin(Node)
    auto response = future.get() will block the spinning of the node till the response has arrived,
    so we need to do this block of code in another thread, so that current thread keep running 
    Therefore we used thread
    */
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<AddTwoIntsClientNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
}