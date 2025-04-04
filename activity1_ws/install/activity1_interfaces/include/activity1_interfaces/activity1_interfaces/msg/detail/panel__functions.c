// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from activity1_interfaces:msg/Panel.idl
// generated code does not contain a copyright notice
#include "activity1_interfaces/msg/detail/panel__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
activity1_interfaces__msg__Panel__init(activity1_interfaces__msg__Panel * msg)
{
  if (!msg) {
    return false;
  }
  // led1
  // led2
  // led3
  return true;
}

void
activity1_interfaces__msg__Panel__fini(activity1_interfaces__msg__Panel * msg)
{
  if (!msg) {
    return;
  }
  // led1
  // led2
  // led3
}

bool
activity1_interfaces__msg__Panel__are_equal(const activity1_interfaces__msg__Panel * lhs, const activity1_interfaces__msg__Panel * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // led1
  if (lhs->led1 != rhs->led1) {
    return false;
  }
  // led2
  if (lhs->led2 != rhs->led2) {
    return false;
  }
  // led3
  if (lhs->led3 != rhs->led3) {
    return false;
  }
  return true;
}

bool
activity1_interfaces__msg__Panel__copy(
  const activity1_interfaces__msg__Panel * input,
  activity1_interfaces__msg__Panel * output)
{
  if (!input || !output) {
    return false;
  }
  // led1
  output->led1 = input->led1;
  // led2
  output->led2 = input->led2;
  // led3
  output->led3 = input->led3;
  return true;
}

activity1_interfaces__msg__Panel *
activity1_interfaces__msg__Panel__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  activity1_interfaces__msg__Panel * msg = (activity1_interfaces__msg__Panel *)allocator.allocate(sizeof(activity1_interfaces__msg__Panel), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(activity1_interfaces__msg__Panel));
  bool success = activity1_interfaces__msg__Panel__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
activity1_interfaces__msg__Panel__destroy(activity1_interfaces__msg__Panel * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    activity1_interfaces__msg__Panel__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
activity1_interfaces__msg__Panel__Sequence__init(activity1_interfaces__msg__Panel__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  activity1_interfaces__msg__Panel * data = NULL;

  if (size) {
    data = (activity1_interfaces__msg__Panel *)allocator.zero_allocate(size, sizeof(activity1_interfaces__msg__Panel), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = activity1_interfaces__msg__Panel__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        activity1_interfaces__msg__Panel__fini(&data[i - 1]);
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
activity1_interfaces__msg__Panel__Sequence__fini(activity1_interfaces__msg__Panel__Sequence * array)
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
      activity1_interfaces__msg__Panel__fini(&array->data[i]);
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

activity1_interfaces__msg__Panel__Sequence *
activity1_interfaces__msg__Panel__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  activity1_interfaces__msg__Panel__Sequence * array = (activity1_interfaces__msg__Panel__Sequence *)allocator.allocate(sizeof(activity1_interfaces__msg__Panel__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = activity1_interfaces__msg__Panel__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
activity1_interfaces__msg__Panel__Sequence__destroy(activity1_interfaces__msg__Panel__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    activity1_interfaces__msg__Panel__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
activity1_interfaces__msg__Panel__Sequence__are_equal(const activity1_interfaces__msg__Panel__Sequence * lhs, const activity1_interfaces__msg__Panel__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!activity1_interfaces__msg__Panel__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
activity1_interfaces__msg__Panel__Sequence__copy(
  const activity1_interfaces__msg__Panel__Sequence * input,
  activity1_interfaces__msg__Panel__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(activity1_interfaces__msg__Panel);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    activity1_interfaces__msg__Panel * data =
      (activity1_interfaces__msg__Panel *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!activity1_interfaces__msg__Panel__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          activity1_interfaces__msg__Panel__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!activity1_interfaces__msg__Panel__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
