// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from snake_game_interfaces:msg/TurtleArray.idl
// generated code does not contain a copyright notice

#ifndef SNAKE_GAME_INTERFACES__MSG__DETAIL__TURTLE_ARRAY__BUILDER_HPP_
#define SNAKE_GAME_INTERFACES__MSG__DETAIL__TURTLE_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "snake_game_interfaces/msg/detail/turtle_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace snake_game_interfaces
{

namespace msg
{

namespace builder
{

class Init_TurtleArray_turtles
{
public:
  Init_TurtleArray_turtles()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::snake_game_interfaces::msg::TurtleArray turtles(::snake_game_interfaces::msg::TurtleArray::_turtles_type arg)
  {
    msg_.turtles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::snake_game_interfaces::msg::TurtleArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::snake_game_interfaces::msg::TurtleArray>()
{
  return snake_game_interfaces::msg::builder::Init_TurtleArray_turtles();
}

}  // namespace snake_game_interfaces

#endif  // SNAKE_GAME_INTERFACES__MSG__DETAIL__TURTLE_ARRAY__BUILDER_HPP_
