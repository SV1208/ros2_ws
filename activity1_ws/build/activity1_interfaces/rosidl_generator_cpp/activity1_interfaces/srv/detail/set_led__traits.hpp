// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from activity1_interfaces:srv/SetLED.idl
// generated code does not contain a copyright notice

#ifndef ACTIVITY1_INTERFACES__SRV__DETAIL__SET_LED__TRAITS_HPP_
#define ACTIVITY1_INTERFACES__SRV__DETAIL__SET_LED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "activity1_interfaces/srv/detail/set_led__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace activity1_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetLED_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: led_number
  {
    out << "led_number: ";
    rosidl_generator_traits::value_to_yaml(msg.led_number, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetLED_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: led_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "led_number: ";
    rosidl_generator_traits::value_to_yaml(msg.led_number, out);
    out << "\n";
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetLED_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace activity1_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use activity1_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const activity1_interfaces::srv::SetLED_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  activity1_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use activity1_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const activity1_interfaces::srv::SetLED_Request & msg)
{
  return activity1_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<activity1_interfaces::srv::SetLED_Request>()
{
  return "activity1_interfaces::srv::SetLED_Request";
}

template<>
inline const char * name<activity1_interfaces::srv::SetLED_Request>()
{
  return "activity1_interfaces/srv/SetLED_Request";
}

template<>
struct has_fixed_size<activity1_interfaces::srv::SetLED_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<activity1_interfaces::srv::SetLED_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<activity1_interfaces::srv::SetLED_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace activity1_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetLED_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetLED_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetLED_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace activity1_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use activity1_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const activity1_interfaces::srv::SetLED_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  activity1_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use activity1_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const activity1_interfaces::srv::SetLED_Response & msg)
{
  return activity1_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<activity1_interfaces::srv::SetLED_Response>()
{
  return "activity1_interfaces::srv::SetLED_Response";
}

template<>
inline const char * name<activity1_interfaces::srv::SetLED_Response>()
{
  return "activity1_interfaces/srv/SetLED_Response";
}

template<>
struct has_fixed_size<activity1_interfaces::srv::SetLED_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<activity1_interfaces::srv::SetLED_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<activity1_interfaces::srv::SetLED_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<activity1_interfaces::srv::SetLED>()
{
  return "activity1_interfaces::srv::SetLED";
}

template<>
inline const char * name<activity1_interfaces::srv::SetLED>()
{
  return "activity1_interfaces/srv/SetLED";
}

template<>
struct has_fixed_size<activity1_interfaces::srv::SetLED>
  : std::integral_constant<
    bool,
    has_fixed_size<activity1_interfaces::srv::SetLED_Request>::value &&
    has_fixed_size<activity1_interfaces::srv::SetLED_Response>::value
  >
{
};

template<>
struct has_bounded_size<activity1_interfaces::srv::SetLED>
  : std::integral_constant<
    bool,
    has_bounded_size<activity1_interfaces::srv::SetLED_Request>::value &&
    has_bounded_size<activity1_interfaces::srv::SetLED_Response>::value
  >
{
};

template<>
struct is_service<activity1_interfaces::srv::SetLED>
  : std::true_type
{
};

template<>
struct is_service_request<activity1_interfaces::srv::SetLED_Request>
  : std::true_type
{
};

template<>
struct is_service_response<activity1_interfaces::srv::SetLED_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ACTIVITY1_INTERFACES__SRV__DETAIL__SET_LED__TRAITS_HPP_
