// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from snake_game_interfaces:msg/Turtle.idl
// generated code does not contain a copyright notice

#ifndef SNAKE_GAME_INTERFACES__MSG__DETAIL__TURTLE__BUILDER_HPP_
#define SNAKE_GAME_INTERFACES__MSG__DETAIL__TURTLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "snake_game_interfaces/msg/detail/turtle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace snake_game_interfaces
{

namespace msg
{

namespace builder
{

class Init_Turtle_state
{
public:
  explicit Init_Turtle_state(::snake_game_interfaces::msg::Turtle & msg)
  : msg_(msg)
  {}
  ::snake_game_interfaces::msg::Turtle state(::snake_game_interfaces::msg::Turtle::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::snake_game_interfaces::msg::Turtle msg_;
};

class Init_Turtle_theta
{
public:
  explicit Init_Turtle_theta(::snake_game_interfaces::msg::Turtle & msg)
  : msg_(msg)
  {}
  Init_Turtle_state theta(::snake_game_interfaces::msg::Turtle::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return Init_Turtle_state(msg_);
  }

private:
  ::snake_game_interfaces::msg::Turtle msg_;
};

class Init_Turtle_y
{
public:
  explicit Init_Turtle_y(::snake_game_interfaces::msg::Turtle & msg)
  : msg_(msg)
  {}
  Init_Turtle_theta y(::snake_game_interfaces::msg::Turtle::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Turtle_theta(msg_);
  }

private:
  ::snake_game_interfaces::msg::Turtle msg_;
};

class Init_Turtle_x
{
public:
  explicit Init_Turtle_x(::snake_game_interfaces::msg::Turtle & msg)
  : msg_(msg)
  {}
  Init_Turtle_y x(::snake_game_interfaces::msg::Turtle::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Turtle_y(msg_);
  }

private:
  ::snake_game_interfaces::msg::Turtle msg_;
};

class Init_Turtle_name
{
public:
  Init_Turtle_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Turtle_x name(::snake_game_interfaces::msg::Turtle::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Turtle_x(msg_);
  }

private:
  ::snake_game_interfaces::msg::Turtle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::snake_game_interfaces::msg::Turtle>()
{
  return snake_game_interfaces::msg::builder::Init_Turtle_name();
}

}  // namespace snake_game_interfaces

#endif  // SNAKE_GAME_INTERFACES__MSG__DETAIL__TURTLE__BUILDER_HPP_
