// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from activity1_interfaces:msg/Panel.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "activity1_interfaces/msg/detail/panel__rosidl_typesupport_introspection_c.h"
#include "activity1_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "activity1_interfaces/msg/detail/panel__functions.h"
#include "activity1_interfaces/msg/detail/panel__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void activity1_interfaces__msg__Panel__rosidl_typesupport_introspection_c__Panel_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  activity1_interfaces__msg__Panel__init(message_memory);
}

void activity1_interfaces__msg__Panel__rosidl_typesupport_introspection_c__Panel_fini_function(void * message_memory)
{
  activity1_interfaces__msg__Panel__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember activity1_interfaces__msg__Panel__rosidl_typesupport_introspection_c__Panel_message_member_array[3] = {
  {
    "led1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(activity1_interfaces__msg__Panel, led1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "led2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(activity1_interfaces__msg__Panel, led2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "led3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(activity1_interfaces__msg__Panel, led3),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers activity1_interfaces__msg__Panel__rosidl_typesupport_introspection_c__Panel_message_members = {
  "activity1_interfaces__msg",  // message namespace
  "Panel",  // message name
  3,  // number of fields
  sizeof(activity1_interfaces__msg__Panel),
  activity1_interfaces__msg__Panel__rosidl_typesupport_introspection_c__Panel_message_member_array,  // message members
  activity1_interfaces__msg__Panel__rosidl_typesupport_introspection_c__Panel_init_function,  // function to initialize message memory (memory has to be allocated)
  activity1_interfaces__msg__Panel__rosidl_typesupport_introspection_c__Panel_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t activity1_interfaces__msg__Panel__rosidl_typesupport_introspection_c__Panel_message_type_support_handle = {
  0,
  &activity1_interfaces__msg__Panel__rosidl_typesupport_introspection_c__Panel_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_activity1_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, activity1_interfaces, msg, Panel)() {
  if (!activity1_interfaces__msg__Panel__rosidl_typesupport_introspection_c__Panel_message_type_support_handle.typesupport_identifier) {
    activity1_interfaces__msg__Panel__rosidl_typesupport_introspection_c__Panel_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &activity1_interfaces__msg__Panel__rosidl_typesupport_introspection_c__Panel_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
