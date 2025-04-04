// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from activity1_interfaces:srv/SetLED.idl
// generated code does not contain a copyright notice
#include "activity1_interfaces/srv/detail/set_led__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
activity1_interfaces__srv__SetLED_Request__init(activity1_interfaces__srv__SetLED_Request * msg)
{
  if (!msg) {
    return false;
  }
  // led_number
  // state
  return true;
}

void
activity1_interfaces__srv__SetLED_Request__fini(activity1_interfaces__srv__SetLED_Request * msg)
{
  if (!msg) {
    return;
  }
  // led_number
  // state
}

bool
activity1_interfaces__srv__SetLED_Request__are_equal(const activity1_interfaces__srv__SetLED_Request * lhs, const activity1_interfaces__srv__SetLED_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // led_number
  if (lhs->led_number != rhs->led_number) {
    return false;
  }
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  return true;
}

bool
activity1_interfaces__srv__SetLED_Request__copy(
  const activity1_interfaces__srv__SetLED_Request * input,
  activity1_interfaces__srv__SetLED_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // led_number
  output->led_number = input->led_number;
  // state
  output->state = input->state;
  return true;
}

activity1_interfaces__srv__SetLED_Request *
activity1_interfaces__srv__SetLED_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  activity1_interfaces__srv__SetLED_Request * msg = (activity1_interfaces__srv__SetLED_Request *)allocator.allocate(sizeof(activity1_interfaces__srv__SetLED_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(activity1_interfaces__srv__SetLED_Request));
  bool success = activity1_interfaces__srv__SetLED_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
activity1_interfaces__srv__SetLED_Request__destroy(activity1_interfaces__srv__SetLED_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    activity1_interfaces__srv__SetLED_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
activity1_interfaces__srv__SetLED_Request__Sequence__init(activity1_interfaces__srv__SetLED_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  activity1_interfaces__srv__SetLED_Request * data = NULL;

  if (size) {
    data = (activity1_interfaces__srv__SetLED_Request *)allocator.zero_allocate(size, sizeof(activity1_interfaces__srv__SetLED_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = activity1_interfaces__srv__SetLED_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        activity1_interfaces__srv__SetLED_Request__fini(&data[i - 1]);
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
activity1_interfaces__srv__SetLED_Request__Sequence__fini(activity1_interfaces__srv__SetLED_Request__Sequence * array)
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
      activity1_interfaces__srv__SetLED_Request__fini(&array->data[i]);
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

activity1_interfaces__srv__SetLED_Request__Sequence *
activity1_interfaces__srv__SetLED_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  activity1_interfaces__srv__SetLED_Request__Sequence * array = (activity1_interfaces__srv__SetLED_Request__Sequence *)allocator.allocate(sizeof(activity1_interfaces__srv__SetLED_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = activity1_interfaces__srv__SetLED_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
activity1_interfaces__srv__SetLED_Request__Sequence__destroy(activity1_interfaces__srv__SetLED_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    activity1_interfaces__srv__SetLED_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
activity1_interfaces__srv__SetLED_Request__Sequence__are_equal(const activity1_interfaces__srv__SetLED_Request__Sequence * lhs, const activity1_interfaces__srv__SetLED_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!activity1_interfaces__srv__SetLED_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
activity1_interfaces__srv__SetLED_Request__Sequence__copy(
  const activity1_interfaces__srv__SetLED_Request__Sequence * input,
  activity1_interfaces__srv__SetLED_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(activity1_interfaces__srv__SetLED_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    activity1_interfaces__srv__SetLED_Request * data =
      (activity1_interfaces__srv__SetLED_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!activity1_interfaces__srv__SetLED_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          activity1_interfaces__srv__SetLED_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!activity1_interfaces__srv__SetLED_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
activity1_interfaces__srv__SetLED_Response__init(activity1_interfaces__srv__SetLED_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
activity1_interfaces__srv__SetLED_Response__fini(activity1_interfaces__srv__SetLED_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
activity1_interfaces__srv__SetLED_Response__are_equal(const activity1_interfaces__srv__SetLED_Response * lhs, const activity1_interfaces__srv__SetLED_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
activity1_interfaces__srv__SetLED_Response__copy(
  const activity1_interfaces__srv__SetLED_Response * input,
  activity1_interfaces__srv__SetLED_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

activity1_interfaces__srv__SetLED_Response *
activity1_interfaces__srv__SetLED_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  activity1_interfaces__srv__SetLED_Response * msg = (activity1_interfaces__srv__SetLED_Response *)allocator.allocate(sizeof(activity1_interfaces__srv__SetLED_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(activity1_interfaces__srv__SetLED_Response));
  bool success = activity1_interfaces__srv__SetLED_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
activity1_interfaces__srv__SetLED_Response__destroy(activity1_interfaces__srv__SetLED_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    activity1_interfaces__srv__SetLED_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
activity1_interfaces__srv__SetLED_Response__Sequence__init(activity1_interfaces__srv__SetLED_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  activity1_interfaces__srv__SetLED_Response * data = NULL;

  if (size) {
    data = (activity1_interfaces__srv__SetLED_Response *)allocator.zero_allocate(size, sizeof(activity1_interfaces__srv__SetLED_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = activity1_interfaces__srv__SetLED_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        activity1_interfaces__srv__SetLED_Response__fini(&data[i - 1]);
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
activity1_interfaces__srv__SetLED_Response__Sequence__fini(activity1_interfaces__srv__SetLED_Response__Sequence * array)
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
      activity1_interfaces__srv__SetLED_Response__fini(&array->data[i]);
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

activity1_interfaces__srv__SetLED_Response__Sequence *
activity1_interfaces__srv__SetLED_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  activity1_interfaces__srv__SetLED_Response__Sequence * array = (activity1_interfaces__srv__SetLED_Response__Sequence *)allocator.allocate(sizeof(activity1_interfaces__srv__SetLED_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = activity1_interfaces__srv__SetLED_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
activity1_interfaces__srv__SetLED_Response__Sequence__destroy(activity1_interfaces__srv__SetLED_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    activity1_interfaces__srv__SetLED_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
activity1_interfaces__srv__SetLED_Response__Sequence__are_equal(const activity1_interfaces__srv__SetLED_Response__Sequence * lhs, const activity1_interfaces__srv__SetLED_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!activity1_interfaces__srv__SetLED_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
activity1_interfaces__srv__SetLED_Response__Sequence__copy(
  const activity1_interfaces__srv__SetLED_Response__Sequence * input,
  activity1_interfaces__srv__SetLED_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(activity1_interfaces__srv__SetLED_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    activity1_interfaces__srv__SetLED_Response * data =
      (activity1_interfaces__srv__SetLED_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!activity1_interfaces__srv__SetLED_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          activity1_interfaces__srv__SetLED_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!activity1_interfaces__srv__SetLED_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
