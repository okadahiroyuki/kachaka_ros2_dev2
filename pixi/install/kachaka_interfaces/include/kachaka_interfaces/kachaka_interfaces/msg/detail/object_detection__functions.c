// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from kachaka_interfaces:msg/ObjectDetection.idl
// generated code does not contain a copyright notice
#include "kachaka_interfaces/msg/detail/object_detection__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `roi`
#include "sensor_msgs/msg/detail/region_of_interest__functions.h"

bool
kachaka_interfaces__msg__ObjectDetection__init(kachaka_interfaces__msg__ObjectDetection * msg)
{
  if (!msg) {
    return false;
  }
  // label
  // roi
  if (!sensor_msgs__msg__RegionOfInterest__init(&msg->roi)) {
    kachaka_interfaces__msg__ObjectDetection__fini(msg);
    return false;
  }
  // score
  // distance_median
  return true;
}

void
kachaka_interfaces__msg__ObjectDetection__fini(kachaka_interfaces__msg__ObjectDetection * msg)
{
  if (!msg) {
    return;
  }
  // label
  // roi
  sensor_msgs__msg__RegionOfInterest__fini(&msg->roi);
  // score
  // distance_median
}

bool
kachaka_interfaces__msg__ObjectDetection__are_equal(const kachaka_interfaces__msg__ObjectDetection * lhs, const kachaka_interfaces__msg__ObjectDetection * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // label
  if (lhs->label != rhs->label) {
    return false;
  }
  // roi
  if (!sensor_msgs__msg__RegionOfInterest__are_equal(
      &(lhs->roi), &(rhs->roi)))
  {
    return false;
  }
  // score
  if (lhs->score != rhs->score) {
    return false;
  }
  // distance_median
  if (lhs->distance_median != rhs->distance_median) {
    return false;
  }
  return true;
}

bool
kachaka_interfaces__msg__ObjectDetection__copy(
  const kachaka_interfaces__msg__ObjectDetection * input,
  kachaka_interfaces__msg__ObjectDetection * output)
{
  if (!input || !output) {
    return false;
  }
  // label
  output->label = input->label;
  // roi
  if (!sensor_msgs__msg__RegionOfInterest__copy(
      &(input->roi), &(output->roi)))
  {
    return false;
  }
  // score
  output->score = input->score;
  // distance_median
  output->distance_median = input->distance_median;
  return true;
}

kachaka_interfaces__msg__ObjectDetection *
kachaka_interfaces__msg__ObjectDetection__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kachaka_interfaces__msg__ObjectDetection * msg = (kachaka_interfaces__msg__ObjectDetection *)allocator.allocate(sizeof(kachaka_interfaces__msg__ObjectDetection), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kachaka_interfaces__msg__ObjectDetection));
  bool success = kachaka_interfaces__msg__ObjectDetection__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kachaka_interfaces__msg__ObjectDetection__destroy(kachaka_interfaces__msg__ObjectDetection * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kachaka_interfaces__msg__ObjectDetection__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kachaka_interfaces__msg__ObjectDetection__Sequence__init(kachaka_interfaces__msg__ObjectDetection__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kachaka_interfaces__msg__ObjectDetection * data = NULL;

  if (size) {
    data = (kachaka_interfaces__msg__ObjectDetection *)allocator.zero_allocate(size, sizeof(kachaka_interfaces__msg__ObjectDetection), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kachaka_interfaces__msg__ObjectDetection__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kachaka_interfaces__msg__ObjectDetection__fini(&data[i - 1]);
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
kachaka_interfaces__msg__ObjectDetection__Sequence__fini(kachaka_interfaces__msg__ObjectDetection__Sequence * array)
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
      kachaka_interfaces__msg__ObjectDetection__fini(&array->data[i]);
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

kachaka_interfaces__msg__ObjectDetection__Sequence *
kachaka_interfaces__msg__ObjectDetection__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kachaka_interfaces__msg__ObjectDetection__Sequence * array = (kachaka_interfaces__msg__ObjectDetection__Sequence *)allocator.allocate(sizeof(kachaka_interfaces__msg__ObjectDetection__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kachaka_interfaces__msg__ObjectDetection__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kachaka_interfaces__msg__ObjectDetection__Sequence__destroy(kachaka_interfaces__msg__ObjectDetection__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kachaka_interfaces__msg__ObjectDetection__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kachaka_interfaces__msg__ObjectDetection__Sequence__are_equal(const kachaka_interfaces__msg__ObjectDetection__Sequence * lhs, const kachaka_interfaces__msg__ObjectDetection__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kachaka_interfaces__msg__ObjectDetection__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kachaka_interfaces__msg__ObjectDetection__Sequence__copy(
  const kachaka_interfaces__msg__ObjectDetection__Sequence * input,
  kachaka_interfaces__msg__ObjectDetection__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kachaka_interfaces__msg__ObjectDetection);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kachaka_interfaces__msg__ObjectDetection * data =
      (kachaka_interfaces__msg__ObjectDetection *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kachaka_interfaces__msg__ObjectDetection__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kachaka_interfaces__msg__ObjectDetection__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kachaka_interfaces__msg__ObjectDetection__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
