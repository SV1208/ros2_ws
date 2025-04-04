// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from activity1_interfaces:msg/Panel.idl
// generated code does not contain a copyright notice
#include "activity1_interfaces/msg/detail/panel__rosidl_typesupport_fastrtps_cpp.hpp"
#include "activity1_interfaces/msg/detail/panel__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace activity1_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_activity1_interfaces
cdr_serialize(
  const activity1_interfaces::msg::Panel & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: led1
  cdr << ros_message.led1;
  // Member: led2
  cdr << ros_message.led2;
  // Member: led3
  cdr << ros_message.led3;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_activity1_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  activity1_interfaces::msg::Panel & ros_message)
{
  // Member: led1
  cdr >> ros_message.led1;

  // Member: led2
  cdr >> ros_message.led2;

  // Member: led3
  cdr >> ros_message.led3;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_activity1_interfaces
get_serialized_size(
  const activity1_interfaces::msg::Panel & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: led1
  {
    size_t item_size = sizeof(ros_message.led1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: led2
  {
    size_t item_size = sizeof(ros_message.led2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: led3
  {
    size_t item_size = sizeof(ros_message.led3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_activity1_interfaces
max_serialized_size_Panel(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: led1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: led2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: led3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = activity1_interfaces::msg::Panel;
    is_plain =
      (
      offsetof(DataType, led3) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Panel__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const activity1_interfaces::msg::Panel *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Panel__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<activity1_interfaces::msg::Panel *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Panel__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const activity1_interfaces::msg::Panel *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Panel__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Panel(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Panel__callbacks = {
  "activity1_interfaces::msg",
  "Panel",
  _Panel__cdr_serialize,
  _Panel__cdr_deserialize,
  _Panel__get_serialized_size,
  _Panel__max_serialized_size
};

static rosidl_message_type_support_t _Panel__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Panel__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace activity1_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_activity1_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<activity1_interfaces::msg::Panel>()
{
  return &activity1_interfaces::msg::typesupport_fastrtps_cpp::_Panel__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, activity1_interfaces, msg, Panel)() {
  return &activity1_interfaces::msg::typesupport_fastrtps_cpp::_Panel__handle;
}

#ifdef __cplusplus
}
#endif
