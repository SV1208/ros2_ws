// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_interfaces:msg/Login.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES__MSG__DETAIL__LOGIN__BUILDER_HPP_
#define MY_INTERFACES__MSG__DETAIL__LOGIN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_interfaces/msg/detail/login__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_interfaces
{

namespace msg
{

namespace builder
{

class Init_Login_password
{
public:
  explicit Init_Login_password(::my_interfaces::msg::Login & msg)
  : msg_(msg)
  {}
  ::my_interfaces::msg::Login password(::my_interfaces::msg::Login::_password_type arg)
  {
    msg_.password = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::msg::Login msg_;
};

class Init_Login_username
{
public:
  Init_Login_username()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Login_password username(::my_interfaces::msg::Login::_username_type arg)
  {
    msg_.username = std::move(arg);
    return Init_Login_password(msg_);
  }

private:
  ::my_interfaces::msg::Login msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::msg::Login>()
{
  return my_interfaces::msg::builder::Init_Login_username();
}

}  // namespace my_interfaces

#endif  // MY_INTERFACES__MSG__DETAIL__LOGIN__BUILDER_HPP_
