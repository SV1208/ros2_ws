// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from activity1_interfaces:msg/Panel.idl
// generated code does not contain a copyright notice

#ifndef ACTIVITY1_INTERFACES__MSG__DETAIL__PANEL__STRUCT_H_
#define ACTIVITY1_INTERFACES__MSG__DETAIL__PANEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Panel in the package activity1_interfaces.
/**
  * 1-> On 0-> Off 
 */
typedef struct activity1_interfaces__msg__Panel
{
  int32_t led1;
  int32_t led2;
  int32_t led3;
} activity1_interfaces__msg__Panel;

// Struct for a sequence of activity1_interfaces__msg__Panel.
typedef struct activity1_interfaces__msg__Panel__Sequence
{
  activity1_interfaces__msg__Panel * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} activity1_interfaces__msg__Panel__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ACTIVITY1_INTERFACES__MSG__DETAIL__PANEL__STRUCT_H_
