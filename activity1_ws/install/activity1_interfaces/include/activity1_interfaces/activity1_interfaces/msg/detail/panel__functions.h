// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from activity1_interfaces:msg/Panel.idl
// generated code does not contain a copyright notice

#ifndef ACTIVITY1_INTERFACES__MSG__DETAIL__PANEL__FUNCTIONS_H_
#define ACTIVITY1_INTERFACES__MSG__DETAIL__PANEL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "activity1_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "activity1_interfaces/msg/detail/panel__struct.h"

/// Initialize msg/Panel message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * activity1_interfaces__msg__Panel
 * )) before or use
 * activity1_interfaces__msg__Panel__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_activity1_interfaces
bool
activity1_interfaces__msg__Panel__init(activity1_interfaces__msg__Panel * msg);

/// Finalize msg/Panel message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_activity1_interfaces
void
activity1_interfaces__msg__Panel__fini(activity1_interfaces__msg__Panel * msg);

/// Create msg/Panel message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * activity1_interfaces__msg__Panel__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_activity1_interfaces
activity1_interfaces__msg__Panel *
activity1_interfaces__msg__Panel__create();

/// Destroy msg/Panel message.
/**
 * It calls
 * activity1_interfaces__msg__Panel__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_activity1_interfaces
void
activity1_interfaces__msg__Panel__destroy(activity1_interfaces__msg__Panel * msg);

/// Check for msg/Panel message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_activity1_interfaces
bool
activity1_interfaces__msg__Panel__are_equal(const activity1_interfaces__msg__Panel * lhs, const activity1_interfaces__msg__Panel * rhs);

/// Copy a msg/Panel message.
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
ROSIDL_GENERATOR_C_PUBLIC_activity1_interfaces
bool
activity1_interfaces__msg__Panel__copy(
  const activity1_interfaces__msg__Panel * input,
  activity1_interfaces__msg__Panel * output);

/// Initialize array of msg/Panel messages.
/**
 * It allocates the memory for the number of elements and calls
 * activity1_interfaces__msg__Panel__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_activity1_interfaces
bool
activity1_interfaces__msg__Panel__Sequence__init(activity1_interfaces__msg__Panel__Sequence * array, size_t size);

/// Finalize array of msg/Panel messages.
/**
 * It calls
 * activity1_interfaces__msg__Panel__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_activity1_interfaces
void
activity1_interfaces__msg__Panel__Sequence__fini(activity1_interfaces__msg__Panel__Sequence * array);

/// Create array of msg/Panel messages.
/**
 * It allocates the memory for the array and calls
 * activity1_interfaces__msg__Panel__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_activity1_interfaces
activity1_interfaces__msg__Panel__Sequence *
activity1_interfaces__msg__Panel__Sequence__create(size_t size);

/// Destroy array of msg/Panel messages.
/**
 * It calls
 * activity1_interfaces__msg__Panel__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_activity1_interfaces
void
activity1_interfaces__msg__Panel__Sequence__destroy(activity1_interfaces__msg__Panel__Sequence * array);

/// Check for msg/Panel message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_activity1_interfaces
bool
activity1_interfaces__msg__Panel__Sequence__are_equal(const activity1_interfaces__msg__Panel__Sequence * lhs, const activity1_interfaces__msg__Panel__Sequence * rhs);

/// Copy an array of msg/Panel messages.
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
ROSIDL_GENERATOR_C_PUBLIC_activity1_interfaces
bool
activity1_interfaces__msg__Panel__Sequence__copy(
  const activity1_interfaces__msg__Panel__Sequence * input,
  activity1_interfaces__msg__Panel__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ACTIVITY1_INTERFACES__MSG__DETAIL__PANEL__FUNCTIONS_H_
