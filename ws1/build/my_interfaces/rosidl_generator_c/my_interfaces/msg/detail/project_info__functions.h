// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from my_interfaces:msg/ProjectInfo.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES__MSG__DETAIL__PROJECT_INFO__FUNCTIONS_H_
#define MY_INTERFACES__MSG__DETAIL__PROJECT_INFO__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "my_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "my_interfaces/msg/detail/project_info__struct.h"

/// Initialize msg/ProjectInfo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * my_interfaces__msg__ProjectInfo
 * )) before or use
 * my_interfaces__msg__ProjectInfo__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces
bool
my_interfaces__msg__ProjectInfo__init(my_interfaces__msg__ProjectInfo * msg);

/// Finalize msg/ProjectInfo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces
void
my_interfaces__msg__ProjectInfo__fini(my_interfaces__msg__ProjectInfo * msg);

/// Create msg/ProjectInfo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * my_interfaces__msg__ProjectInfo__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces
my_interfaces__msg__ProjectInfo *
my_interfaces__msg__ProjectInfo__create();

/// Destroy msg/ProjectInfo message.
/**
 * It calls
 * my_interfaces__msg__ProjectInfo__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces
void
my_interfaces__msg__ProjectInfo__destroy(my_interfaces__msg__ProjectInfo * msg);

/// Check for msg/ProjectInfo message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces
bool
my_interfaces__msg__ProjectInfo__are_equal(const my_interfaces__msg__ProjectInfo * lhs, const my_interfaces__msg__ProjectInfo * rhs);

/// Copy a msg/ProjectInfo message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces
bool
my_interfaces__msg__ProjectInfo__copy(
  const my_interfaces__msg__ProjectInfo * input,
  my_interfaces__msg__ProjectInfo * output);

/// Initialize array of msg/ProjectInfo messages.
/**
 * It allocates the memory for the number of elements and calls
 * my_interfaces__msg__ProjectInfo__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces
bool
my_interfaces__msg__ProjectInfo__Sequence__init(my_interfaces__msg__ProjectInfo__Sequence * array, size_t size);

/// Finalize array of msg/ProjectInfo messages.
/**
 * It calls
 * my_interfaces__msg__ProjectInfo__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces
void
my_interfaces__msg__ProjectInfo__Sequence__fini(my_interfaces__msg__ProjectInfo__Sequence * array);

/// Create array of msg/ProjectInfo messages.
/**
 * It allocates the memory for the array and calls
 * my_interfaces__msg__ProjectInfo__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces
my_interfaces__msg__ProjectInfo__Sequence *
my_interfaces__msg__ProjectInfo__Sequence__create(size_t size);

/// Destroy array of msg/ProjectInfo messages.
/**
 * It calls
 * my_interfaces__msg__ProjectInfo__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces
void
my_interfaces__msg__ProjectInfo__Sequence__destroy(my_interfaces__msg__ProjectInfo__Sequence * array);

/// Check for msg/ProjectInfo message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces
bool
my_interfaces__msg__ProjectInfo__Sequence__are_equal(const my_interfaces__msg__ProjectInfo__Sequence * lhs, const my_interfaces__msg__ProjectInfo__Sequence * rhs);

/// Copy an array of msg/ProjectInfo messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces
bool
my_interfaces__msg__ProjectInfo__Sequence__copy(
  const my_interfaces__msg__ProjectInfo__Sequence * input,
  my_interfaces__msg__ProjectInfo__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MY_INTERFACES__MSG__DETAIL__PROJECT_INFO__FUNCTIONS_H_
