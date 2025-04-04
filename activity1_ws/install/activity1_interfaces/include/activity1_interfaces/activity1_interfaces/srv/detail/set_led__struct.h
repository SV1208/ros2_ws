// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from activity1_interfaces:srv/SetLED.idl
// generated code does not contain a copyright notice

#ifndef ACTIVITY1_INTERFACES__SRV__DETAIL__SET_LED__STRUCT_H_
#define ACTIVITY1_INTERFACES__SRV__DETAIL__SET_LED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetLED in the package activity1_interfaces.
typedef struct activity1_interfaces__srv__SetLED_Request
{
  /// 1 2 or 3
  int32_t led_number;
  /// true for on, false for off
  bool state;
} activity1_interfaces__srv__SetLED_Request;

// Struct for a sequence of activity1_interfaces__srv__SetLED_Request.
typedef struct activity1_interfaces__srv__SetLED_Request__Sequence
{
  activity1_interfaces__srv__SetLED_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} activity1_interfaces__srv__SetLED_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetLED in the package activity1_interfaces.
typedef struct activity1_interfaces__srv__SetLED_Response
{
  /// true or false
  bool success;
} activity1_interfaces__srv__SetLED_Response;

// Struct for a sequence of activity1_interfaces__srv__SetLED_Response.
typedef struct activity1_interfaces__srv__SetLED_Response__Sequence
{
  activity1_interfaces__srv__SetLED_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} activity1_interfaces__srv__SetLED_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ACTIVITY1_INTERFACES__SRV__DETAIL__SET_LED__STRUCT_H_
