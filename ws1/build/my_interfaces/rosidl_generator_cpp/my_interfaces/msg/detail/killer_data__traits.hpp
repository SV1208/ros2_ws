// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_interfaces:msg/KillerData.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES__MSG__DETAIL__KILLER_DATA__TRAITS_HPP_
#define MY_INTERFACES__MSG__DETAIL__KILLER_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_interfaces/msg/detail/killer_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const KillerData & msg,
  std::ostream & out)
{
  out << "{";
  // member: killername
  {
    out << "killername: ";
    rosidl_generator_traits::value_to_yaml(msg.killername, out);
    out << ", ";
  }

  // member: numberofpeoplekilled
  {
    out << "numberofpeoplekilled: ";
    rosidl_generator_traits::value_to_yaml(msg.numberofpeoplekilled, out);
    out << ", ";
  }

  // member: keykilledpeople
  {
    if (msg.keykilledpeople.size() == 0) {
      out << "keykilledpeople: []";
    } else {
      out << "keykilledpeople: [";
      size_t pending_items = msg.keykilledpeople.size();
      for (auto item : msg.keykilledpeople) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const KillerData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: killername
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "killername: ";
    rosidl_generator_traits::value_to_yaml(msg.killername, out);
    out << "\n";
  }

  // member: numberofpeoplekilled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "numberofpeoplekilled: ";
    rosidl_generator_traits::value_to_yaml(msg.numberofpeoplekilled, out);
    out << "\n";
  }

  // member: keykilledpeople
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.keykilledpeople.size() == 0) {
      out << "keykilledpeople: []\n";
    } else {
      out << "keykilledpeople:\n";
      for (auto item : msg.keykilledpeople) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const KillerData & msg, bool use_flow_style = false)
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

}  // namespace my_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_interfaces::msg::KillerData & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const my_interfaces::msg::KillerData & msg)
{
  return my_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<my_interfaces::msg::KillerData>()
{
  return "my_interfaces::msg::KillerData";
}

template<>
inline const char * name<my_interfaces::msg::KillerData>()
{
  return "my_interfaces/msg/KillerData";
}

template<>
struct has_fixed_size<my_interfaces::msg::KillerData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_interfaces::msg::KillerData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_interfaces::msg::KillerData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_INTERFACES__MSG__DETAIL__KILLER_DATA__TRAITS_HPP_
