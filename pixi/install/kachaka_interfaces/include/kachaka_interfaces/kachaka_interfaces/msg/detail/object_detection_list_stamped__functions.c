// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from kachaka_interfaces:msg/ObjectDetectionListStamped.idl
// generated code does not contain a copyright notice
#include "kachaka_interfaces/msg/detail/object_detection_list_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `detection`
#include "kachaka_interfaces/msg/detail/object_detection__functions.h"

bool
kachaka_interfaces__msg__ObjectDetectionListStamped__init(kachaka_interfaces__msg__ObjectDetectionListStamped * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    kachaka_interfaces__msg__ObjectDetectionListStamped__fini(msg);
    return false;
  }
  // detection
  if (!kachaka_interfaces__msg__ObjectDetection__Sequence__init(&msg->detection, 0)) {
    kachaka_interfaces__msg__ObjectDetectionListStamped__fini(msg);
    return false;
  }
  return true;
}

void
kachaka_interfaces__msg__ObjectDetectionListStamped__fini(kachaka_interfaces__msg__ObjectDetectionListStamped * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // detection
  kachaka_interfaces__msg__ObjectDetection__Sequence__fini(&msg->detection);
}

bool
kachaka_interfaces__msg__ObjectDetectionListStamped__are_equal(const kachaka_interfaces__msg__ObjectDetectionListStamped * lhs, const kachaka_interfaces__msg__ObjectDetectionListStamped * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // detection
  if (!kachaka_interfaces__msg__ObjectDetection__Sequence__are_equal(
      &(lhs->detection), &(rhs->detection)))
  {
    return false;
  }
  return true;
}

bool
kachaka_interfaces__msg__ObjectDetectionListStamped__copy(
  const kachaka_interfaces__msg__ObjectDetectionListStamped * input,
  kachaka_interfaces__msg__ObjectDetectionListStamped * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // detection
  if (!kachaka_interfaces__msg__ObjectDetection__Sequence__copy(
      &(input->detection), &(output->detection)))
  {
    return false;
  }
  return true;
}

kachaka_interfaces__msg__ObjectDetectionListStamped *
kachaka_interfaces__msg__ObjectDetectionListStamped__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kachaka_interfaces__msg__ObjectDetectionListStamped * msg = (kachaka_interfaces__msg__ObjectDetectionListStamped *)allocator.allocate(sizeof(kachaka_interfaces__msg__ObjectDetectionListStamped), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kachaka_interfaces__msg__ObjectDetectionListStamped));
  bool success = kachaka_interfaces__msg__ObjectDetectionListStamped__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kachaka_interfaces__msg__ObjectDetectionListStamped__destroy(kachaka_interfaces__msg__ObjectDetectionListStamped * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kachaka_interfaces__msg__ObjectDetectionListStamped__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kachaka_interfaces__msg__ObjectDetectionListStamped__Sequence__init(kachaka_interfaces__msg__ObjectDetectionListStamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kachaka_interfaces__msg__ObjectDetectionListStamped * data = NULL;

  if (size) {
    data = (kachaka_interfaces__msg__ObjectDetectionListStamped *)allocator.zero_allocate(size, sizeof(kachaka_interfaces__msg__ObjectDetectionListStamped), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kachaka_interfaces__msg__ObjectDetectionListStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kachaka_interfaces__msg__ObjectDetectionListStamped__fini(&data[i - 1]);
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
kachaka_interfaces__msg__ObjectDetectionListStamped__Sequence__fini(kachaka_interfaces__msg__ObjectDetectionListStamped__Sequence * array)
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
      kachaka_interfaces__msg__ObjectDetectionListStamped__fini(&array->data[i]);
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

kachaka_interfaces__msg__ObjectDetectionListStamped__Sequence *
kachaka_interfaces__msg__ObjectDetectionListStamped__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kachaka_interfaces__msg__ObjectDetectionListStamped__Sequence * array = (kachaka_interfaces__msg__ObjectDetectionListStamped__Sequence *)allocator.allocate(sizeof(kachaka_interfaces__msg__ObjectDetectionListStamped__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kachaka_interfaces__msg__ObjectDetectionListStamped__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kachaka_interfaces__msg__ObjectDetectionListStamped__Sequence__destroy(kachaka_interfaces__msg__ObjectDetectionListStamped__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kachaka_interfaces__msg__ObjectDetectionListStamped__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kachaka_interfaces__msg__ObjectDetectionListStamped__Sequence__are_equal(const kachaka_interfaces__msg__ObjectDetectionListStamped__Sequence * lhs, const kachaka_interfaces__msg__ObjectDetectionListStamped__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kachaka_interfaces__msg__ObjectDetectionListStamped__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kachaka_interfaces__msg__ObjectDetectionListStamped__Sequence__copy(
  const kachaka_interfaces__msg__ObjectDetectionListStamped__Sequence * input,
  kachaka_interfaces__msg__ObjectDetectionListStamped__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kachaka_interfaces__msg__ObjectDetectionListStamped);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kachaka_interfaces__msg__ObjectDetectionListStamped * data =
      (kachaka_interfaces__msg__ObjectDetectionListStamped *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kachaka_interfaces__msg__ObjectDetectionListStamped__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kachaka_interfaces__msg__ObjectDetectionListStamped__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kachaka_interfaces__msg__ObjectDetectionListStamped__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
