// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_interfaces:msg/KillerData.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES__MSG__DETAIL__KILLER_DATA__BUILDER_HPP_
#define MY_INTERFACES__MSG__DETAIL__KILLER_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_interfaces/msg/detail/killer_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_interfaces
{

namespace msg
{

namespace builder
{

class Init_KillerData_keykilledpeople
{
public:
  explicit Init_KillerData_keykilledpeople(::my_interfaces::msg::KillerData & msg)
  : msg_(msg)
  {}
  ::my_interfaces::msg::KillerData keykilledpeople(::my_interfaces::msg::KillerData::_keykilledpeople_type arg)
  {
    msg_.keykilledpeople = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::msg::KillerData msg_;
};

class Init_KillerData_numberofpeoplekilled
{
public:
  explicit Init_KillerData_numberofpeoplekilled(::my_interfaces::msg::KillerData & msg)
  : msg_(msg)
  {}
  Init_KillerData_keykilledpeople numberofpeoplekilled(::my_interfaces::msg::KillerData::_numberofpeoplekilled_type arg)
  {
    msg_.numberofpeoplekilled = std::move(arg);
    return Init_KillerData_keykilledpeople(msg_);
  }

private:
  ::my_interfaces::msg::KillerData msg_;
};

class Init_KillerData_killername
{
public:
  Init_KillerData_killername()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KillerData_numberofpeoplekilled killername(::my_interfaces::msg::KillerData::_killername_type arg)
  {
    msg_.killername = std::move(arg);
    return Init_KillerData_numberofpeoplekilled(msg_);
  }

private:
  ::my_interfaces::msg::KillerData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::msg::KillerData>()
{
  return my_interfaces::msg::builder::Init_KillerData_killername();
}

}  // namespace my_interfaces

#endif  // MY_INTERFACES__MSG__DETAIL__KILLER_DATA__BUILDER_HPP_
