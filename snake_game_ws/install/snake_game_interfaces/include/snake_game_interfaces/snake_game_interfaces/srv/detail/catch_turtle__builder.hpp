// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from snake_game_interfaces:srv/CatchTurtle.idl
// generated code does not contain a copyright notice

#ifndef SNAKE_GAME_INTERFACES__SRV__DETAIL__CATCH_TURTLE__BUILDER_HPP_
#define SNAKE_GAME_INTERFACES__SRV__DETAIL__CATCH_TURTLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "snake_game_interfaces/srv/detail/catch_turtle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace snake_game_interfaces
{

namespace srv
{

namespace builder
{

class Init_CatchTurtle_Request_name
{
public:
  Init_CatchTurtle_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::snake_game_interfaces::srv::CatchTurtle_Request name(::snake_game_interfaces::srv::CatchTurtle_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::snake_game_interfaces::srv::CatchTurtle_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::snake_game_interfaces::srv::CatchTurtle_Request>()
{
  return snake_game_interfaces::srv::builder::Init_CatchTurtle_Request_name();
}

}  // namespace snake_game_interfaces


namespace snake_game_interfaces
{

namespace srv
{

namespace builder
{

class Init_CatchTurtle_Response_success
{
public:
  Init_CatchTurtle_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::snake_game_interfaces::srv::CatchTurtle_Response success(::snake_game_interfaces::srv::CatchTurtle_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::snake_game_interfaces::srv::CatchTurtle_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::snake_game_interfaces::srv::CatchTurtle_Response>()
{
  return snake_game_interfaces::srv::builder::Init_CatchTurtle_Response_success();
}

}  // namespace snake_game_interfaces

#endif  // SNAKE_GAME_INTERFACES__SRV__DETAIL__CATCH_TURTLE__BUILDER_HPP_
