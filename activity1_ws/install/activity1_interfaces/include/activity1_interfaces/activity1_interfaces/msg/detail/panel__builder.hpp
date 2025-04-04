// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from activity1_interfaces:msg/Panel.idl
// generated code does not contain a copyright notice

#ifndef ACTIVITY1_INTERFACES__MSG__DETAIL__PANEL__BUILDER_HPP_
#define ACTIVITY1_INTERFACES__MSG__DETAIL__PANEL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "activity1_interfaces/msg/detail/panel__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace activity1_interfaces
{

namespace msg
{

namespace builder
{

class Init_Panel_led3
{
public:
  explicit Init_Panel_led3(::activity1_interfaces::msg::Panel & msg)
  : msg_(msg)
  {}
  ::activity1_interfaces::msg::Panel led3(::activity1_interfaces::msg::Panel::_led3_type arg)
  {
    msg_.led3 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::activity1_interfaces::msg::Panel msg_;
};

class Init_Panel_led2
{
public:
  explicit Init_Panel_led2(::activity1_interfaces::msg::Panel & msg)
  : msg_(msg)
  {}
  Init_Panel_led3 led2(::activity1_interfaces::msg::Panel::_led2_type arg)
  {
    msg_.led2 = std::move(arg);
    return Init_Panel_led3(msg_);
  }

private:
  ::activity1_interfaces::msg::Panel msg_;
};

class Init_Panel_led1
{
public:
  Init_Panel_led1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Panel_led2 led1(::activity1_interfaces::msg::Panel::_led1_type arg)
  {
    msg_.led1 = std::move(arg);
    return Init_Panel_led2(msg_);
  }

private:
  ::activity1_interfaces::msg::Panel msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::activity1_interfaces::msg::Panel>()
{
  return activity1_interfaces::msg::builder::Init_Panel_led1();
}

}  // namespace activity1_interfaces

#endif  // ACTIVITY1_INTERFACES__MSG__DETAIL__PANEL__BUILDER_HPP_
