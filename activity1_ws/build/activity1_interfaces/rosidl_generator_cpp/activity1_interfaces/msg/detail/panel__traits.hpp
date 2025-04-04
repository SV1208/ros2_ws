// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from activity1_interfaces:msg/Panel.idl
// generated code does not contain a copyright notice

#ifndef ACTIVITY1_INTERFACES__MSG__DETAIL__PANEL__TRAITS_HPP_
#define ACTIVITY1_INTERFACES__MSG__DETAIL__PANEL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "activity1_interfaces/msg/detail/panel__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace activity1_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Panel & msg,
  std::ostream & out)
{
  out << "{";
  // member: led1
  {
    out << "led1: ";
    rosidl_generator_traits::value_to_yaml(msg.led1, out);
    out << ", ";
  }

  // member: led2
  {
    out << "led2: ";
    rosidl_generator_traits::value_to_yaml(msg.led2, out);
    out << ", ";
  }

  // member: led3
  {
    out << "led3: ";
    rosidl_generator_traits::value_to_yaml(msg.led3, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Panel & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: led1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "led1: ";
    rosidl_generator_traits::value_to_yaml(msg.led1, out);
    out << "\n";
  }

  // member: led2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "led2: ";
    rosidl_generator_traits::value_to_yaml(msg.led2, out);
    out << "\n";
  }

  // member: led3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "led3: ";
    rosidl_generator_traits::value_to_yaml(msg.led3, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Panel & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace activity1_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use activity1_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const activity1_interfaces::msg::Panel & msg,
  std::ostream & out, size_t indentation = 0)
{
  activity1_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use activity1_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const activity1_interfaces::msg::Panel & msg)
{
  return activity1_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<activity1_interfaces::msg::Panel>()
{
  return "activity1_interfaces::msg::Panel";
}

template<>
inline const char * name<activity1_interfaces::msg::Panel>()
{
  return "activity1_interfaces/msg/Panel";
}

template<>
struct has_fixed_size<activity1_interfaces::msg::Panel>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<activity1_interfaces::msg::Panel>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<activity1_interfaces::msg::Panel>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ACTIVITY1_INTERFACES__MSG__DETAIL__PANEL__TRAITS_HPP_
