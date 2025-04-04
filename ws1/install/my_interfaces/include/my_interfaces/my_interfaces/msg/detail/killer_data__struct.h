// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_interfaces:msg/KillerData.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES__MSG__DETAIL__KILLER_DATA__STRUCT_H_
#define MY_INTERFACES__MSG__DETAIL__KILLER_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'killername'
// Member 'keykilledpeople'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/KillerData in the package my_interfaces.
typedef struct my_interfaces__msg__KillerData
{
  rosidl_runtime_c__String killername;
  int64_t numberofpeoplekilled;
  rosidl_runtime_c__String__Sequence keykilledpeople;
} my_interfaces__msg__KillerData;

// Struct for a sequence of my_interfaces__msg__KillerData.
typedef struct my_interfaces__msg__KillerData__Sequence
{
  my_interfaces__msg__KillerData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_interfaces__msg__KillerData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_INTERFACES__MSG__DETAIL__KILLER_DATA__STRUCT_H_
