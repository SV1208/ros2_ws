// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from snake_game_interfaces:msg/TurtleArray.idl
// generated code does not contain a copyright notice

#ifndef SNAKE_GAME_INTERFACES__MSG__DETAIL__TURTLE_ARRAY__STRUCT_H_
#define SNAKE_GAME_INTERFACES__MSG__DETAIL__TURTLE_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'turtles'
#include "snake_game_interfaces/msg/detail/turtle__struct.h"

/// Struct defined in msg/TurtleArray in the package snake_game_interfaces.
typedef struct snake_game_interfaces__msg__TurtleArray
{
  snake_game_interfaces__msg__Turtle__Sequence turtles;
} snake_game_interfaces__msg__TurtleArray;

// Struct for a sequence of snake_game_interfaces__msg__TurtleArray.
typedef struct snake_game_interfaces__msg__TurtleArray__Sequence
{
  snake_game_interfaces__msg__TurtleArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} snake_game_interfaces__msg__TurtleArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SNAKE_GAME_INTERFACES__MSG__DETAIL__TURTLE_ARRAY__STRUCT_H_
