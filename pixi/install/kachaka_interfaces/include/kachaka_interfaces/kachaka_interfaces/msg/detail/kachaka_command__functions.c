// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from kachaka_interfaces:msg/KachakaCommand.idl
// generated code does not contain a copyright notice
#include "kachaka_interfaces/msg/detail/kachaka_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `move_shelf_command_target_shelf_id`
// Member `move_shelf_command_destination_location_id`
// Member `return_shelf_command_target_shelf_id`
// Member `undock_shelf_command_target_shelf_id`
// Member `move_to_location_command_target_location_id`
// Member `speak_command_text`
#include "rosidl_runtime_c/string_functions.h"

bool
kachaka_interfaces__msg__KachakaCommand__init(kachaka_interfaces__msg__KachakaCommand * msg)
{
  if (!msg) {
    return false;
  }
  // command_type
  // move_shelf_command_target_shelf_id
  if (!rosidl_runtime_c__String__init(&msg->move_shelf_command_target_shelf_id)) {
    kachaka_interfaces__msg__KachakaCommand__fini(msg);
    return false;
  }
  // move_shelf_command_destination_location_id
  if (!rosidl_runtime_c__String__init(&msg->move_shelf_command_destination_location_id)) {
    kachaka_interfaces__msg__KachakaCommand__fini(msg);
    return false;
  }
  // move_shelf_command_undock_on_destination
  // return_shelf_command_target_shelf_id
  if (!rosidl_runtime_c__String__init(&msg->return_shelf_command_target_shelf_id)) {
    kachaka_interfaces__msg__KachakaCommand__fini(msg);
    return false;
  }
  // undock_shelf_command_target_shelf_id
  if (!rosidl_runtime_c__String__init(&msg->undock_shelf_command_target_shelf_id)) {
    kachaka_interfaces__msg__KachakaCommand__fini(msg);
    return false;
  }
  // move_to_location_command_target_location_id
  if (!rosidl_runtime_c__String__init(&msg->move_to_location_command_target_location_id)) {
    kachaka_interfaces__msg__KachakaCommand__fini(msg);
    return false;
  }
  // return_home_command_silent
  // speak_command_text
  if (!rosidl_runtime_c__String__init(&msg->speak_command_text)) {
    kachaka_interfaces__msg__KachakaCommand__fini(msg);
    return false;
  }
  // move_to_pose_command_x
  // move_to_pose_command_y
  // move_to_pose_command_yaw
  return true;
}

void
kachaka_interfaces__msg__KachakaCommand__fini(kachaka_interfaces__msg__KachakaCommand * msg)
{
  if (!msg) {
    return;
  }
  // command_type
  // move_shelf_command_target_shelf_id
  rosidl_runtime_c__String__fini(&msg->move_shelf_command_target_shelf_id);
  // move_shelf_command_destination_location_id
  rosidl_runtime_c__String__fini(&msg->move_shelf_command_destination_location_id);
  // move_shelf_command_undock_on_destination
  // return_shelf_command_target_shelf_id
  rosidl_runtime_c__String__fini(&msg->return_shelf_command_target_shelf_id);
  // undock_shelf_command_target_shelf_id
  rosidl_runtime_c__String__fini(&msg->undock_shelf_command_target_shelf_id);
  // move_to_location_command_target_location_id
  rosidl_runtime_c__String__fini(&msg->move_to_location_command_target_location_id);
  // return_home_command_silent
  // speak_command_text
  rosidl_runtime_c__String__fini(&msg->speak_command_text);
  // move_to_pose_command_x
  // move_to_pose_command_y
  // move_to_pose_command_yaw
}

bool
kachaka_interfaces__msg__KachakaCommand__are_equal(const kachaka_interfaces__msg__KachakaCommand * lhs, const kachaka_interfaces__msg__KachakaCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // command_type
  if (lhs->command_type != rhs->command_type) {
    return false;
  }
  // move_shelf_command_target_shelf_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->move_shelf_command_target_shelf_id), &(rhs->move_shelf_command_target_shelf_id)))
  {
    return false;
  }
  // move_shelf_command_destination_location_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->move_shelf_command_destination_location_id), &(rhs->move_shelf_command_destination_location_id)))
  {
    return false;
  }
  // move_shelf_command_undock_on_destination
  if (lhs->move_shelf_command_undock_on_destination != rhs->move_shelf_command_undock_on_destination) {
    return false;
  }
  // return_shelf_command_target_shelf_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->return_shelf_command_target_shelf_id), &(rhs->return_shelf_command_target_shelf_id)))
  {
    return false;
  }
  // undock_shelf_command_target_shelf_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->undock_shelf_command_target_shelf_id), &(rhs->undock_shelf_command_target_shelf_id)))
  {
    return false;
  }
  // move_to_location_command_target_location_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->move_to_location_command_target_location_id), &(rhs->move_to_location_command_target_location_id)))
  {
    return false;
  }
  // return_home_command_silent
  if (lhs->return_home_command_silent != rhs->return_home_command_silent) {
    return false;
  }
  // speak_command_text
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->speak_command_text), &(rhs->speak_command_text)))
  {
    return false;
  }
  // move_to_pose_command_x
  if (lhs->move_to_pose_command_x != rhs->move_to_pose_command_x) {
    return false;
  }
  // move_to_pose_command_y
  if (lhs->move_to_pose_command_y != rhs->move_to_pose_command_y) {
    return false;
  }
  // move_to_pose_command_yaw
  if (lhs->move_to_pose_command_yaw != rhs->move_to_pose_command_yaw) {
    return false;
  }
  return true;
}

bool
kachaka_interfaces__msg__KachakaCommand__copy(
  const kachaka_interfaces__msg__KachakaCommand * input,
  kachaka_interfaces__msg__KachakaCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // command_type
  output->command_type = input->command_type;
  // move_shelf_command_target_shelf_id
  if (!rosidl_runtime_c__String__copy(
      &(input->move_shelf_command_target_shelf_id), &(output->move_shelf_command_target_shelf_id)))
  {
    return false;
  }
  // move_shelf_command_destination_location_id
  if (!rosidl_runtime_c__String__copy(
      &(input->move_shelf_command_destination_location_id), &(output->move_shelf_command_destination_location_id)))
  {
    return false;
  }
  // move_shelf_command_undock_on_destination
  output->move_shelf_command_undock_on_destination = input->move_shelf_command_undock_on_destination;
  // return_shelf_command_target_shelf_id
  if (!rosidl_runtime_c__String__copy(
      &(input->return_shelf_command_target_shelf_id), &(output->return_shelf_command_target_shelf_id)))
  {
    return false;
  }
  // undock_shelf_command_target_shelf_id
  if (!rosidl_runtime_c__String__copy(
      &(input->undock_shelf_command_target_shelf_id), &(output->undock_shelf_command_target_shelf_id)))
  {
    return false;
  }
  // move_to_location_command_target_location_id
  if (!rosidl_runtime_c__String__copy(
      &(input->move_to_location_command_target_location_id), &(output->move_to_location_command_target_location_id)))
  {
    return false;
  }
  // return_home_command_silent
  output->return_home_command_silent = input->return_home_command_silent;
  // speak_command_text
  if (!rosidl_runtime_c__String__copy(
      &(input->speak_command_text), &(output->speak_command_text)))
  {
    return false;
  }
  // move_to_pose_command_x
  output->move_to_pose_command_x = input->move_to_pose_command_x;
  // move_to_pose_command_y
  output->move_to_pose_command_y = input->move_to_pose_command_y;
  // move_to_pose_command_yaw
  output->move_to_pose_command_yaw = input->move_to_pose_command_yaw;
  return true;
}

kachaka_interfaces__msg__KachakaCommand *
kachaka_interfaces__msg__KachakaCommand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kachaka_interfaces__msg__KachakaCommand * msg = (kachaka_interfaces__msg__KachakaCommand *)allocator.allocate(sizeof(kachaka_interfaces__msg__KachakaCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kachaka_interfaces__msg__KachakaCommand));
  bool success = kachaka_interfaces__msg__KachakaCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kachaka_interfaces__msg__KachakaCommand__destroy(kachaka_interfaces__msg__KachakaCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kachaka_interfaces__msg__KachakaCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kachaka_interfaces__msg__KachakaCommand__Sequence__init(kachaka_interfaces__msg__KachakaCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kachaka_interfaces__msg__KachakaCommand * data = NULL;

  if (size) {
    data = (kachaka_interfaces__msg__KachakaCommand *)allocator.zero_allocate(size, sizeof(kachaka_interfaces__msg__KachakaCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kachaka_interfaces__msg__KachakaCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kachaka_interfaces__msg__KachakaCommand__fini(&data[i - 1]);
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
kachaka_interfaces__msg__KachakaCommand__Sequence__fini(kachaka_interfaces__msg__KachakaCommand__Sequence * array)
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
      kachaka_interfaces__msg__KachakaCommand__fini(&array->data[i]);
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

kachaka_interfaces__msg__KachakaCommand__Sequence *
kachaka_interfaces__msg__KachakaCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kachaka_interfaces__msg__KachakaCommand__Sequence * array = (kachaka_interfaces__msg__KachakaCommand__Sequence *)allocator.allocate(sizeof(kachaka_interfaces__msg__KachakaCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kachaka_interfaces__msg__KachakaCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kachaka_interfaces__msg__KachakaCommand__Sequence__destroy(kachaka_interfaces__msg__KachakaCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kachaka_interfaces__msg__KachakaCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kachaka_interfaces__msg__KachakaCommand__Sequence__are_equal(const kachaka_interfaces__msg__KachakaCommand__Sequence * lhs, const kachaka_interfaces__msg__KachakaCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kachaka_interfaces__msg__KachakaCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kachaka_interfaces__msg__KachakaCommand__Sequence__copy(
  const kachaka_interfaces__msg__KachakaCommand__Sequence * input,
  kachaka_interfaces__msg__KachakaCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kachaka_interfaces__msg__KachakaCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kachaka_interfaces__msg__KachakaCommand * data =
      (kachaka_interfaces__msg__KachakaCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kachaka_interfaces__msg__KachakaCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kachaka_interfaces__msg__KachakaCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kachaka_interfaces__msg__KachakaCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
