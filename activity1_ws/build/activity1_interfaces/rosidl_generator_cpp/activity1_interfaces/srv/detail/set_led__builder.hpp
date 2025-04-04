// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from activity1_interfaces:srv/SetLED.idl
// generated code does not contain a copyright notice

#ifndef ACTIVITY1_INTERFACES__SRV__DETAIL__SET_LED__BUILDER_HPP_
#define ACTIVITY1_INTERFACES__SRV__DETAIL__SET_LED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "activity1_interfaces/srv/detail/set_led__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace activity1_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetLED_Request_state
{
public:
  explicit Init_SetLED_Request_state(::activity1_interfaces::srv::SetLED_Request & msg)
  : msg_(msg)
  {}
  ::activity1_interfaces::srv::SetLED_Request state(::activity1_interfaces::srv::SetLED_Request::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::activity1_interfaces::srv::SetLED_Request msg_;
};

class Init_SetLED_Request_led_number
{
public:
  Init_SetLED_Request_led_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetLED_Request_state led_number(::activity1_interfaces::srv::SetLED_Request::_led_number_type arg)
  {
    msg_.led_number = std::move(arg);
    return Init_SetLED_Request_state(msg_);
  }

private:
  ::activity1_interfaces::srv::SetLED_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::activity1_interfaces::srv::SetLED_Request>()
{
  return activity1_interfaces::srv::builder::Init_SetLED_Request_led_number();
}

}  // namespace activity1_interfaces


namespace activity1_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetLED_Response_success
{
public:
  Init_SetLED_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::activity1_interfaces::srv::SetLED_Response success(::activity1_interfaces::srv::SetLED_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::activity1_interfaces::srv::SetLED_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::activity1_interfaces::srv::SetLED_Response>()
{
  return activity1_interfaces::srv::builder::Init_SetLED_Response_success();
}

}  // namespace activity1_interfaces

#endif  // ACTIVITY1_INTERFACES__SRV__DETAIL__SET_LED__BUILDER_HPP_
