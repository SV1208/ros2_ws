// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from snake_game_interfaces:msg/TurtleArray.idl
// generated code does not contain a copyright notice
#include "snake_game_interfaces/msg/detail/turtle_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `turtles`
#include "snake_game_interfaces/msg/detail/turtle__functions.h"

bool
snake_game_interfaces__msg__TurtleArray__init(snake_game_interfaces__msg__TurtleArray * msg)
{
  if (!msg) {
    return false;
  }
  // turtles
  if (!snake_game_interfaces__msg__Turtle__Sequence__init(&msg->turtles, 0)) {
    snake_game_interfaces__msg__TurtleArray__fini(msg);
    return false;
  }
  return true;
}

void
snake_game_interfaces__msg__TurtleArray__fini(snake_game_interfaces__msg__TurtleArray * msg)
{
  if (!msg) {
    return;
  }
  // turtles
  snake_game_interfaces__msg__Turtle__Sequence__fini(&msg->turtles);
}

bool
snake_game_interfaces__msg__TurtleArray__are_equal(const snake_game_interfaces__msg__TurtleArray * lhs, const snake_game_interfaces__msg__TurtleArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // turtles
  if (!snake_game_interfaces__msg__Turtle__Sequence__are_equal(
      &(lhs->turtles), &(rhs->turtles)))
  {
    return false;
  }
  return true;
}

bool
snake_game_interfaces__msg__TurtleArray__copy(
  const snake_game_interfaces__msg__TurtleArray * input,
  snake_game_interfaces__msg__TurtleArray * output)
{
  if (!input || !output) {
    return false;
  }
  // turtles
  if (!snake_game_interfaces__msg__Turtle__Sequence__copy(
      &(input->turtles), &(output->turtles)))
  {
    return false;
  }
  return true;
}

snake_game_interfaces__msg__TurtleArray *
snake_game_interfaces__msg__TurtleArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  snake_game_interfaces__msg__TurtleArray * msg = (snake_game_interfaces__msg__TurtleArray *)allocator.allocate(sizeof(snake_game_interfaces__msg__TurtleArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(snake_game_interfaces__msg__TurtleArray));
  bool success = snake_game_interfaces__msg__TurtleArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
snake_game_interfaces__msg__TurtleArray__destroy(snake_game_interfaces__msg__TurtleArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    snake_game_interfaces__msg__TurtleArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
snake_game_interfaces__msg__TurtleArray__Sequence__init(snake_game_interfaces__msg__TurtleArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  snake_game_interfaces__msg__TurtleArray * data = NULL;

  if (size) {
    data = (snake_game_interfaces__msg__TurtleArray *)allocator.zero_allocate(size, sizeof(snake_game_interfaces__msg__TurtleArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = snake_game_interfaces__msg__TurtleArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        snake_game_interfaces__msg__TurtleArray__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
snake_game_interfaces__msg__TurtleArray__Sequence__fini(snake_game_interfaces__msg__TurtleArray__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      snake_game_interfaces__msg__TurtleArray__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

snake_game_interfaces__msg__TurtleArray__Sequence *
snake_game_interfaces__msg__TurtleArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  snake_game_interfaces__msg__TurtleArray__Sequence * array = (snake_game_interfaces__msg__TurtleArray__Sequence *)allocator.allocate(sizeof(snake_game_interfaces__msg__TurtleArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = snake_game_interfaces__msg__TurtleArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
snake_game_interfaces__msg__TurtleArray__Sequence__destroy(snake_game_interfaces__msg__TurtleArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    snake_game_interfaces__msg__TurtleArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
snake_game_interfaces__msg__TurtleArray__Sequence__are_equal(const snake_game_interfaces__msg__TurtleArray__Sequence * lhs, const snake_game_interfaces__msg__TurtleArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!snake_game_interfaces__msg__TurtleArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
snake_game_interfaces__msg__TurtleArray__Sequence__copy(
  const snake_game_interfaces__msg__TurtleArray__Sequence * input,
  snake_game_interfaces__msg__TurtleArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(snake_game_interfaces__msg__TurtleArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    snake_game_interfaces__msg__TurtleArray * data =
      (snake_game_interfaces__msg__TurtleArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!snake_game_interfaces__msg__TurtleArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          snake_game_interfaces__msg__TurtleArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!snake_game_interfaces__msg__TurtleArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
