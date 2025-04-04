// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_interfaces:srv/Kill.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES__SRV__DETAIL__KILL__BUILDER_HPP_
#define MY_INTERFACES__SRV__DETAIL__KILL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_interfaces/srv/detail/kill__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_interfaces
{

namespace srv
{

namespace builder
{

class Init_Kill_Request_amount
{
public:
  explicit Init_Kill_Request_amount(::my_interfaces::srv::Kill_Request & msg)
  : msg_(msg)
  {}
  ::my_interfaces::srv::Kill_Request amount(::my_interfaces::srv::Kill_Request::_amount_type arg)
  {
    msg_.amount = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::srv::Kill_Request msg_;
};

class Init_Kill_Request_name
{
public:
  Init_Kill_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Kill_Request_amount name(::my_interfaces::srv::Kill_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Kill_Request_amount(msg_);
  }

private:
  ::my_interfaces::srv::Kill_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::srv::Kill_Request>()
{
  return my_interfaces::srv::builder::Init_Kill_Request_name();
}

}  // namespace my_interfaces


namespace my_interfaces
{

namespace srv
{

namespace builder
{

class Init_Kill_Response_killed
{
public:
  Init_Kill_Response_killed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_interfaces::srv::Kill_Response killed(::my_interfaces::srv::Kill_Response::_killed_type arg)
  {
    msg_.killed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::srv::Kill_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::srv::Kill_Response>()
{
  return my_interfaces::srv::builder::Init_Kill_Response_killed();
}

}  // namespace my_interfaces

#endif  // MY_INTERFACES__SRV__DETAIL__KILL__BUILDER_HPP_
