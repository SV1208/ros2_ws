// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_interfaces:msg/ProjectInfo.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES__MSG__DETAIL__PROJECT_INFO__STRUCT_H_
#define MY_INTERFACES__MSG__DETAIL__PROJECT_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'description'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ProjectInfo in the package my_interfaces.
typedef struct my_interfaces__msg__ProjectInfo
{
  int64_t id;
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String description;
  bool completed;
} my_interfaces__msg__ProjectInfo;

// Struct for a sequence of my_interfaces__msg__ProjectInfo.
typedef struct my_interfaces__msg__ProjectInfo__Sequence
{
  my_interfaces__msg__ProjectInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_interfaces__msg__ProjectInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_INTERFACES__MSG__DETAIL__PROJECT_INFO__STRUCT_H_
