// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from kachaka_interfaces:msg/LocationList.idl
// generated code does not contain a copyright notice
#include "kachaka_interfaces/msg/detail/location_list__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `locations`
#include "kachaka_interfaces/msg/detail/location__functions.h"
// Member `default_location_id`
#include "rosidl_runtime_c/string_functions.h"

bool
kachaka_interfaces__msg__LocationList__init(kachaka_interfaces__msg__LocationList * msg)
{
  if (!msg) {
    return false;
  }
  // locations
  if (!kachaka_interfaces__msg__Location__Sequence__init(&msg->locations, 0)) {
    kachaka_interfaces__msg__LocationList__fini(msg);
    return false;
  }
  // default_location_id
  if (!rosidl_runtime_c__String__init(&msg->default_location_id)) {
    kachaka_interfaces__msg__LocationList__fini(msg);
    return false;
  }
  return true;
}

void
kachaka_interfaces__msg__LocationList__fini(kachaka_interfaces__msg__LocationList * msg)
{
  if (!msg) {
    return;
  }
  // locations
  kachaka_interfaces__msg__Location__Sequence__fini(&msg->locations);
  // default_location_id
  rosidl_runtime_c__String__fini(&msg->default_location_id);
}

bool
kachaka_interfaces__msg__LocationList__are_equal(const kachaka_interfaces__msg__LocationList * lhs, const kachaka_interfaces__msg__LocationList * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // locations
  if (!kachaka_interfaces__msg__Location__Sequence__are_equal(
      &(lhs->locations), &(rhs->locations)))
  {
    return false;
  }
  // default_location_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->default_location_id), &(rhs->default_location_id)))
  {
    return false;
  }
  return true;
}

bool
kachaka_interfaces__msg__LocationList__copy(
  const kachaka_interfaces__msg__LocationList * input,
  kachaka_interfaces__msg__LocationList * output)
{
  if (!input || !output) {
    return false;
  }
  // locations
  if (!kachaka_interfaces__msg__Location__Sequence__copy(
      &(input->locations), &(output->locations)))
  {
    return false;
  }
  // default_location_id
  if (!rosidl_runtime_c__String__copy(
      &(input->default_location_id), &(output->default_location_id)))
  {
    return false;
  }
  return true;
}

kachaka_interfaces__msg__LocationList *
kachaka_interfaces__msg__LocationList__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kachaka_interfaces__msg__LocationList * msg = (kachaka_interfaces__msg__LocationList *)allocator.allocate(sizeof(kachaka_interfaces__msg__LocationList), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kachaka_interfaces__msg__LocationList));
  bool success = kachaka_interfaces__msg__LocationList__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kachaka_interfaces__msg__LocationList__destroy(kachaka_interfaces__msg__LocationList * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kachaka_interfaces__msg__LocationList__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kachaka_interfaces__msg__LocationList__Sequence__init(kachaka_interfaces__msg__LocationList__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kachaka_interfaces__msg__LocationList * data = NULL;

  if (size) {
    data = (kachaka_interfaces__msg__LocationList *)allocator.zero_allocate(size, sizeof(kachaka_interfaces__msg__LocationList), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kachaka_interfaces__msg__LocationList__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kachaka_interfaces__msg__LocationList__fini(&data[i - 1]);
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
kachaka_interfaces__msg__LocationList__Sequence__fini(kachaka_interfaces__msg__LocationList__Sequence * array)
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
      kachaka_interfaces__msg__LocationList__fini(&array->data[i]);
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

kachaka_interfaces__msg__LocationList__Sequence *
kachaka_interfaces__msg__LocationList__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kachaka_interfaces__msg__LocationList__Sequence * array = (kachaka_interfaces__msg__LocationList__Sequence *)allocator.allocate(sizeof(kachaka_interfaces__msg__LocationList__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kachaka_interfaces__msg__LocationList__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kachaka_interfaces__msg__LocationList__Sequence__destroy(kachaka_interfaces__msg__LocationList__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kachaka_interfaces__msg__LocationList__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kachaka_interfaces__msg__LocationList__Sequence__are_equal(const kachaka_interfaces__msg__LocationList__Sequence * lhs, const kachaka_interfaces__msg__LocationList__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kachaka_interfaces__msg__LocationList__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kachaka_interfaces__msg__LocationList__Sequence__copy(
  const kachaka_interfaces__msg__LocationList__Sequence * input,
  kachaka_interfaces__msg__LocationList__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kachaka_interfaces__msg__LocationList);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kachaka_interfaces__msg__LocationList * data =
      (kachaka_interfaces__msg__LocationList *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kachaka_interfaces__msg__LocationList__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kachaka_interfaces__msg__LocationList__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kachaka_interfaces__msg__LocationList__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
