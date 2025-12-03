// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from kachaka_interfaces:msg/Shelf.idl
// generated code does not contain a copyright notice
#include "kachaka_interfaces/msg/detail/shelf__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `id`
// Member `name`
// Member `home_location_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose2_d__functions.h"
// Member `size`
#include "kachaka_interfaces/msg/detail/shelf_size__functions.h"

bool
kachaka_interfaces__msg__Shelf__init(kachaka_interfaces__msg__Shelf * msg)
{
  if (!msg) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    kachaka_interfaces__msg__Shelf__fini(msg);
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    kachaka_interfaces__msg__Shelf__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose2D__init(&msg->pose)) {
    kachaka_interfaces__msg__Shelf__fini(msg);
    return false;
  }
  // size
  if (!kachaka_interfaces__msg__ShelfSize__init(&msg->size)) {
    kachaka_interfaces__msg__Shelf__fini(msg);
    return false;
  }
  // home_location_id
  if (!rosidl_runtime_c__String__init(&msg->home_location_id)) {
    kachaka_interfaces__msg__Shelf__fini(msg);
    return false;
  }
  // speed_mode
  return true;
}

void
kachaka_interfaces__msg__Shelf__fini(kachaka_interfaces__msg__Shelf * msg)
{
  if (!msg) {
    return;
  }
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // pose
  geometry_msgs__msg__Pose2D__fini(&msg->pose);
  // size
  kachaka_interfaces__msg__ShelfSize__fini(&msg->size);
  // home_location_id
  rosidl_runtime_c__String__fini(&msg->home_location_id);
  // speed_mode
}

bool
kachaka_interfaces__msg__Shelf__are_equal(const kachaka_interfaces__msg__Shelf * lhs, const kachaka_interfaces__msg__Shelf * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose2D__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // size
  if (!kachaka_interfaces__msg__ShelfSize__are_equal(
      &(lhs->size), &(rhs->size)))
  {
    return false;
  }
  // home_location_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->home_location_id), &(rhs->home_location_id)))
  {
    return false;
  }
  // speed_mode
  if (lhs->speed_mode != rhs->speed_mode) {
    return false;
  }
  return true;
}

bool
kachaka_interfaces__msg__Shelf__copy(
  const kachaka_interfaces__msg__Shelf * input,
  kachaka_interfaces__msg__Shelf * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose2D__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // size
  if (!kachaka_interfaces__msg__ShelfSize__copy(
      &(input->size), &(output->size)))
  {
    return false;
  }
  // home_location_id
  if (!rosidl_runtime_c__String__copy(
      &(input->home_location_id), &(output->home_location_id)))
  {
    return false;
  }
  // speed_mode
  output->speed_mode = input->speed_mode;
  return true;
}

kachaka_interfaces__msg__Shelf *
kachaka_interfaces__msg__Shelf__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kachaka_interfaces__msg__Shelf * msg = (kachaka_interfaces__msg__Shelf *)allocator.allocate(sizeof(kachaka_interfaces__msg__Shelf), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kachaka_interfaces__msg__Shelf));
  bool success = kachaka_interfaces__msg__Shelf__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kachaka_interfaces__msg__Shelf__destroy(kachaka_interfaces__msg__Shelf * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kachaka_interfaces__msg__Shelf__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kachaka_interfaces__msg__Shelf__Sequence__init(kachaka_interfaces__msg__Shelf__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kachaka_interfaces__msg__Shelf * data = NULL;

  if (size) {
    data = (kachaka_interfaces__msg__Shelf *)allocator.zero_allocate(size, sizeof(kachaka_interfaces__msg__Shelf), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kachaka_interfaces__msg__Shelf__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kachaka_interfaces__msg__Shelf__fini(&data[i - 1]);
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
kachaka_interfaces__msg__Shelf__Sequence__fini(kachaka_interfaces__msg__Shelf__Sequence * array)
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
      kachaka_interfaces__msg__Shelf__fini(&array->data[i]);
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

kachaka_interfaces__msg__Shelf__Sequence *
kachaka_interfaces__msg__Shelf__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kachaka_interfaces__msg__Shelf__Sequence * array = (kachaka_interfaces__msg__Shelf__Sequence *)allocator.allocate(sizeof(kachaka_interfaces__msg__Shelf__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kachaka_interfaces__msg__Shelf__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kachaka_interfaces__msg__Shelf__Sequence__destroy(kachaka_interfaces__msg__Shelf__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kachaka_interfaces__msg__Shelf__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kachaka_interfaces__msg__Shelf__Sequence__are_equal(const kachaka_interfaces__msg__Shelf__Sequence * lhs, const kachaka_interfaces__msg__Shelf__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kachaka_interfaces__msg__Shelf__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kachaka_interfaces__msg__Shelf__Sequence__copy(
  const kachaka_interfaces__msg__Shelf__Sequence * input,
  kachaka_interfaces__msg__Shelf__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kachaka_interfaces__msg__Shelf);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kachaka_interfaces__msg__Shelf * data =
      (kachaka_interfaces__msg__Shelf *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kachaka_interfaces__msg__Shelf__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kachaka_interfaces__msg__Shelf__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kachaka_interfaces__msg__Shelf__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
