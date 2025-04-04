// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_interfaces:msg/ProjectInfo.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES__MSG__DETAIL__PROJECT_INFO__BUILDER_HPP_
#define MY_INTERFACES__MSG__DETAIL__PROJECT_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_interfaces/msg/detail/project_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_interfaces
{

namespace msg
{

namespace builder
{

class Init_ProjectInfo_completed
{
public:
  explicit Init_ProjectInfo_completed(::my_interfaces::msg::ProjectInfo & msg)
  : msg_(msg)
  {}
  ::my_interfaces::msg::ProjectInfo completed(::my_interfaces::msg::ProjectInfo::_completed_type arg)
  {
    msg_.completed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::msg::ProjectInfo msg_;
};

class Init_ProjectInfo_description
{
public:
  explicit Init_ProjectInfo_description(::my_interfaces::msg::ProjectInfo & msg)
  : msg_(msg)
  {}
  Init_ProjectInfo_completed description(::my_interfaces::msg::ProjectInfo::_description_type arg)
  {
    msg_.description = std::move(arg);
    return Init_ProjectInfo_completed(msg_);
  }

private:
  ::my_interfaces::msg::ProjectInfo msg_;
};

class Init_ProjectInfo_name
{
public:
  explicit Init_ProjectInfo_name(::my_interfaces::msg::ProjectInfo & msg)
  : msg_(msg)
  {}
  Init_ProjectInfo_description name(::my_interfaces::msg::ProjectInfo::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_ProjectInfo_description(msg_);
  }

private:
  ::my_interfaces::msg::ProjectInfo msg_;
};

class Init_ProjectInfo_id
{
public:
  Init_ProjectInfo_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ProjectInfo_name id(::my_interfaces::msg::ProjectInfo::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_ProjectInfo_name(msg_);
  }

private:
  ::my_interfaces::msg::ProjectInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::msg::ProjectInfo>()
{
  return my_interfaces::msg::builder::Init_ProjectInfo_id();
}

}  // namespace my_interfaces

#endif  // MY_INTERFACES__MSG__DETAIL__PROJECT_INFO__BUILDER_HPP_
