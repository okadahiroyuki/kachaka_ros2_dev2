// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from kachaka_interfaces:action/ExecKachakaCommand.idl
// generated code does not contain a copyright notice
#include "kachaka_interfaces/action/detail/exec_kachaka_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `kachaka_command`
#include "kachaka_interfaces/msg/detail/kachaka_command__functions.h"
// Member `tts_on_success`
#include "rosidl_runtime_c/string_functions.h"

bool
kachaka_interfaces__action__ExecKachakaCommand_Goal__init(kachaka_interfaces__action__ExecKachakaCommand_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // kachaka_command
  if (!kachaka_interfaces__msg__KachakaCommand__init(&msg->kachaka_command)) {
    kachaka_interfaces__action__ExecKachakaCommand_Goal__fini(msg);
    return false;
  }
  // cancel_all
  // tts_on_success
  if (!rosidl_runtime_c__String__init(&msg->tts_on_success)) {
    kachaka_interfaces__action__ExecKachakaCommand_Goal__fini(msg);
    return false;
  }
  return true;
}

void
kachaka_interfaces__action__ExecKachakaCommand_Goal__fini(kachaka_interfaces__action__ExecKachakaCommand_Goal * msg)
{
  if (!msg) {
    return;
  }
  // kachaka_command
  kachaka_interfaces__msg__KachakaCommand__fini(&msg->kachaka_command);
  // cancel_all
  // tts_on_success
  rosidl_runtime_c__String__fini(&msg->tts_on_success);
}

bool
kachaka_interfaces__action__ExecKachakaCommand_Goal__are_equal(const kachaka_interfaces__action__ExecKachakaCommand_Goal * lhs, const kachaka_interfaces__action__ExecKachakaCommand_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // kachaka_command
  if (!kachaka_interfaces__msg__KachakaCommand__are_equal(
      &(lhs->kachaka_command), &(rhs->kachaka_command)))
  {
    return false;
  }
  // cancel_all
  if (lhs->cancel_all != rhs->cancel_all) {
    return false;
  }
  // tts_on_success
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->tts_on_success), &(rhs->tts_on_success)))
  {
    return false;
  }
  return true;
}

bool
kachaka_interfaces__action__ExecKachakaCommand_Goal__copy(
  const kachaka_interfaces__action__ExecKachakaCommand_Goal * input,
  kachaka_interfaces__action__ExecKachakaCommand_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // kachaka_command
  if (!kachaka_interfaces__msg__KachakaCommand__copy(
      &(input->kachaka_command), &(output->kachaka_command)))
  {
    return false;
  }
  // cancel_all
  output->cancel_all = input->cancel_all;
  // tts_on_success
  if (!rosidl_runtime_c__String__copy(
      &(input->tts_on_success), &(output->tts_on_success)))
  {
    return false;
  }
  return true;
}

kachaka_interfaces__action__ExecKachakaCommand_Goal *
kachaka_interfaces__action__ExecKachakaCommand_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kachaka_interfaces__action__ExecKachakaCommand_Goal * msg = (kachaka_interfaces__action__ExecKachakaCommand_Goal *)allocator.allocate(sizeof(kachaka_interfaces__action__ExecKachakaCommand_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kachaka_interfaces__action__ExecKachakaCommand_Goal));
  bool success = kachaka_interfaces__action__ExecKachakaCommand_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kachaka_interfaces__action__ExecKachakaCommand_Goal__destroy(kachaka_interfaces__action__ExecKachakaCommand_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kachaka_interfaces__action__ExecKachakaCommand_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kachaka_interfaces__action__ExecKachakaCommand_Goal__Sequence__init(kachaka_interfaces__action__ExecKachakaCommand_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kachaka_interfaces__action__ExecKachakaCommand_Goal * data = NULL;

  if (size) {
    data = (kachaka_interfaces__action__ExecKachakaCommand_Goal *)allocator.zero_allocate(size, sizeof(kachaka_interfaces__action__ExecKachakaCommand_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kachaka_interfaces__action__ExecKachakaCommand_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kachaka_interfaces__action__ExecKachakaCommand_Goal__fini(&data[i - 1]);
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
kachaka_interfaces__action__ExecKachakaCommand_Goal__Sequence__fini(kachaka_interfaces__action__ExecKachakaCommand_Goal__Sequence * array)
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
      kachaka_interfaces__action__ExecKachakaCommand_Goal__fini(&array->data[i]);
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

kachaka_interfaces__action__ExecKachakaCommand_Goal__Sequence *
kachaka_interfaces__action__ExecKachakaCommand_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kachaka_interfaces__action__ExecKachakaCommand_Goal__Sequence * array = (kachaka_interfaces__action__ExecKachakaCommand_Goal__Sequence *)allocator.allocate(sizeof(kachaka_interfaces__action__ExecKachakaCommand_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kachaka_interfaces__action__ExecKachakaCommand_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kachaka_interfaces__action__ExecKachakaCommand_Goal__Sequence__destroy(kachaka_interfaces__action__ExecKachakaCommand_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kachaka_interfaces__action__ExecKachakaCommand_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kachaka_interfaces__action__ExecKachakaCommand_Goal__Sequence__are_equal(const kachaka_interfaces__action__ExecKachakaCommand_Goal__Sequence * lhs, const kachaka_interfaces__action__ExecKachakaCommand_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kachaka_interfaces__action__ExecKachakaCommand_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kachaka_interfaces__action__ExecKachakaCommand_Goal__Sequence__copy(
  const kachaka_interfaces__action__ExecKachakaCommand_Goal__Sequence * input,
  kachaka_interfaces__action__ExecKachakaCommand_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kachaka_interfaces__action__ExecKachakaCommand_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kachaka_interfaces__action__ExecKachakaCommand_Goal * data =
      (kachaka_interfaces__action__ExecKachakaCommand_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kachaka_interfaces__action__ExecKachakaCommand_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kachaka_interfaces__action__ExecKachakaCommand_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kachaka_interfaces__action__ExecKachakaCommand_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
kachaka_interfaces__action__ExecKachakaCommand_Result__init(kachaka_interfaces__action__ExecKachakaCommand_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // error_code
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    kachaka_interfaces__action__ExecKachakaCommand_Result__fini(msg);
    return false;
  }
  return true;
}

void
kachaka_interfaces__action__ExecKachakaCommand_Result__fini(kachaka_interfaces__action__ExecKachakaCommand_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
  // error_code
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
kachaka_interfaces__action__ExecKachakaCommand_Result__are_equal(const kachaka_interfaces__action__ExecKachakaCommand_Result * lhs, const kachaka_interfaces__action__ExecKachakaCommand_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // error_code
  if (lhs->error_code != rhs->error_code) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
kachaka_interfaces__action__ExecKachakaCommand_Result__copy(
  const kachaka_interfaces__action__ExecKachakaCommand_Result * input,
  kachaka_interfaces__action__ExecKachakaCommand_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // error_code
  output->error_code = input->error_code;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

kachaka_interfaces__action__ExecKachakaCommand_Result *
kachaka_interfaces__action__ExecKachakaCommand_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kachaka_interfaces__action__ExecKachakaCommand_Result * msg = (kachaka_interfaces__action__ExecKachakaCommand_Result *)allocator.allocate(sizeof(kachaka_interfaces__action__ExecKachakaCommand_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kachaka_interfaces__action__ExecKachakaCommand_Result));
  bool success = kachaka_interfaces__action__ExecKachakaCommand_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kachaka_interfaces__action__ExecKachakaCommand_Result__destroy(kachaka_interfaces__action__ExecKachakaCommand_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kachaka_interfaces__action__ExecKachakaCommand_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kachaka_interfaces__action__ExecKachakaCommand_Result__Sequence__init(kachaka_interfaces__action__ExecKachakaCommand_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kachaka_interfaces__action__ExecKachakaCommand_Result * data = NULL;

  if (size) {
    data = (kachaka_interfaces__action__ExecKachakaCommand_Result *)allocator.zero_allocate(size, sizeof(kachaka_interfaces__action__ExecKachakaCommand_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kachaka_interfaces__action__ExecKachakaCommand_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kachaka_interfaces__action__ExecKachakaCommand_Result__fini(&data[i - 1]);
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
kachaka_interfaces__action__ExecKachakaCommand_Result__Sequence__fini(kachaka_interfaces__action__ExecKachakaCommand_Result__Sequence * array)
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
      kachaka_interfaces__action__ExecKachakaCommand_Result__fini(&array->data[i]);
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

kachaka_interfaces__action__ExecKachakaCommand_Result__Sequence *
kachaka_interfaces__action__ExecKachakaCommand_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kachaka_interfaces__action__ExecKachakaCommand_Result__Sequence * array = (kachaka_interfaces__action__ExecKachakaCommand_Result__Sequence *)allocator.allocate(sizeof(kachaka_interfaces__action__ExecKachakaCommand_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kachaka_interfaces__action__ExecKachakaCommand_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kachaka_interfaces__action__ExecKachakaCommand_Result__Sequence__destroy(kachaka_interfaces__action__ExecKachakaCommand_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kachaka_interfaces__action__ExecKachakaCommand_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kachaka_interfaces__action__ExecKachakaCommand_Result__Sequence__are_equal(const kachaka_interfaces__action__ExecKachakaCommand_Result__Sequence * lhs, const kachaka_interfaces__action__ExecKachakaCommand_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kachaka_interfaces__action__ExecKachakaCommand_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kachaka_interfaces__action__ExecKachakaCommand_Result__Sequence__copy(
  const kachaka_interfaces__action__ExecKachakaCommand_Result__Sequence * input,
  kachaka_interfaces__action__ExecKachakaCommand_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kachaka_interfaces__action__ExecKachakaCommand_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kachaka_interfaces__action__ExecKachakaCommand_Result * data =
      (kachaka_interfaces__action__ExecKachakaCommand_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kachaka_interfaces__action__ExecKachakaCommand_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kachaka_interfaces__action__ExecKachakaCommand_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kachaka_interfaces__action__ExecKachakaCommand_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
kachaka_interfaces__action__ExecKachakaCommand_Feedback__init(kachaka_interfaces__action__ExecKachakaCommand_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
kachaka_interfaces__action__ExecKachakaCommand_Feedback__fini(kachaka_interfaces__action__ExecKachakaCommand_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
kachaka_interfaces__action__ExecKachakaCommand_Feedback__are_equal(const kachaka_interfaces__action__ExecKachakaCommand_Feedback * lhs, const kachaka_interfaces__action__ExecKachakaCommand_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
kachaka_interfaces__action__ExecKachakaCommand_Feedback__copy(
  const kachaka_interfaces__action__ExecKachakaCommand_Feedback * input,
  kachaka_interfaces__action__ExecKachakaCommand_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

kachaka_interfaces__action__ExecKachakaCommand_Feedback *
kachaka_interfaces__action__ExecKachakaCommand_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kachaka_interfaces__action__ExecKachakaCommand_Feedback * msg = (kachaka_interfaces__action__ExecKachakaCommand_Feedback *)allocator.allocate(sizeof(kachaka_interfaces__action__ExecKachakaCommand_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kachaka_interfaces__action__ExecKachakaCommand_Feedback));
  bool success = kachaka_interfaces__action__ExecKachakaCommand_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kachaka_interfaces__action__ExecKachakaCommand_Feedback__destroy(kachaka_interfaces__action__ExecKachakaCommand_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kachaka_interfaces__action__ExecKachakaCommand_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kachaka_interfaces__action__ExecKachakaCommand_Feedback__Sequence__init(kachaka_interfaces__action__ExecKachakaCommand_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kachaka_interfaces__action__ExecKachakaCommand_Feedback * data = NULL;

  if (size) {
    data = (kachaka_interfaces__action__ExecKachakaCommand_Feedback *)allocator.zero_allocate(size, sizeof(kachaka_interfaces__action__ExecKachakaCommand_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kachaka_interfaces__action__ExecKachakaCommand_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kachaka_interfaces__action__ExecKachakaCommand_Feedback__fini(&data[i - 1]);
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
kachaka_interfaces__action__ExecKachakaCommand_Feedback__Sequence__fini(kachaka_interfaces__action__ExecKachakaCommand_Feedback__Sequence * array)
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
      kachaka_interfaces__action__ExecKachakaCommand_Feedback__fini(&array->data[i]);
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

kachaka_interfaces__action__ExecKachakaCommand_Feedback__Sequence *
kachaka_interfaces__action__ExecKachakaCommand_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kachaka_interfaces__action__ExecKachakaCommand_Feedback__Sequence * array = (kachaka_interfaces__action__ExecKachakaCommand_Feedback__Sequence *)allocator.allocate(sizeof(kachaka_interfaces__action__ExecKachakaCommand_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kachaka_interfaces__action__ExecKachakaCommand_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kachaka_interfaces__action__ExecKachakaCommand_Feedback__Sequence__destroy(kachaka_interfaces__action__ExecKachakaCommand_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kachaka_interfaces__action__ExecKachakaCommand_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kachaka_interfaces__action__ExecKachakaCommand_Feedback__Sequence__are_equal(const kachaka_interfaces__action__ExecKachakaCommand_Feedback__Sequence * lhs, const kachaka_interfaces__action__ExecKachakaCommand_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kachaka_interfaces__action__ExecKachakaCommand_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kachaka_interfaces__action__ExecKachakaCommand_Feedback__Sequence__copy(
  const kachaka_interfaces__action__ExecKachakaCommand_Feedback__Sequence * input,
  kachaka_interfaces__action__ExecKachakaCommand_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kachaka_interfaces__action__ExecKachakaCommand_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kachaka_interfaces__action__ExecKachakaCommand_Feedback * data =
      (kachaka_interfaces__action__ExecKachakaCommand_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kachaka_interfaces__action__ExecKachakaCommand_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kachaka_interfaces__action__ExecKachakaCommand_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kachaka_interfaces__action__ExecKachakaCommand_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "kachaka_interfaces/action/detail/exec_kachaka_command__functions.h"

bool
kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request__init(kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!kachaka_interfaces__action__ExecKachakaCommand_Goal__init(&msg->goal)) {
    kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request__fini(kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  kachaka_interfaces__action__ExecKachakaCommand_Goal__fini(&msg->goal);
}

bool
kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request__are_equal(const kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request * lhs, const kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!kachaka_interfaces__action__ExecKachakaCommand_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request__copy(
  const kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request * input,
  kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!kachaka_interfaces__action__ExecKachakaCommand_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request *
kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request * msg = (kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request *)allocator.allocate(sizeof(kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request));
  bool success = kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request__destroy(kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request__Sequence__init(kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request * data = NULL;

  if (size) {
    data = (kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request *)allocator.zero_allocate(size, sizeof(kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request__fini(&data[i - 1]);
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
kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request__Sequence__fini(kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request__Sequence * array)
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
      kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request__fini(&array->data[i]);
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

kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request__Sequence *
kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request__Sequence * array = (kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request__Sequence *)allocator.allocate(sizeof(kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request__Sequence__destroy(kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request__Sequence__are_equal(const kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request__Sequence * lhs, const kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request__Sequence__copy(
  const kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request__Sequence * input,
  kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request * data =
      (kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response__init(kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response__fini(kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response__are_equal(const kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response * lhs, const kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response__copy(
  const kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response * input,
  kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response *
kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response * msg = (kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response *)allocator.allocate(sizeof(kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response));
  bool success = kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response__destroy(kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response__Sequence__init(kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response * data = NULL;

  if (size) {
    data = (kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response *)allocator.zero_allocate(size, sizeof(kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response__fini(&data[i - 1]);
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
kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response__Sequence__fini(kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response__Sequence * array)
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
      kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response__fini(&array->data[i]);
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

kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response__Sequence *
kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response__Sequence * array = (kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response__Sequence *)allocator.allocate(sizeof(kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response__Sequence__destroy(kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response__Sequence__are_equal(const kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response__Sequence * lhs, const kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response__Sequence__copy(
  const kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response__Sequence * input,
  kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response * data =
      (kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request__init(kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request__fini(kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request__are_equal(const kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request * lhs, const kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request__copy(
  const kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request * input,
  kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request *
kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request * msg = (kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request *)allocator.allocate(sizeof(kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request));
  bool success = kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request__destroy(kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request__Sequence__init(kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request * data = NULL;

  if (size) {
    data = (kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request *)allocator.zero_allocate(size, sizeof(kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request__fini(&data[i - 1]);
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
kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request__Sequence__fini(kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request__Sequence * array)
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
      kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request__fini(&array->data[i]);
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

kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request__Sequence *
kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request__Sequence * array = (kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request__Sequence *)allocator.allocate(sizeof(kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request__Sequence__destroy(kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request__Sequence__are_equal(const kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request__Sequence * lhs, const kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request__Sequence__copy(
  const kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request__Sequence * input,
  kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request * data =
      (kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "kachaka_interfaces/action/detail/exec_kachaka_command__functions.h"

bool
kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response__init(kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!kachaka_interfaces__action__ExecKachakaCommand_Result__init(&msg->result)) {
    kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response__fini(kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  kachaka_interfaces__action__ExecKachakaCommand_Result__fini(&msg->result);
}

bool
kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response__are_equal(const kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response * lhs, const kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!kachaka_interfaces__action__ExecKachakaCommand_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response__copy(
  const kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response * input,
  kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!kachaka_interfaces__action__ExecKachakaCommand_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response *
kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response * msg = (kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response *)allocator.allocate(sizeof(kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response));
  bool success = kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response__destroy(kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response__Sequence__init(kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response * data = NULL;

  if (size) {
    data = (kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response *)allocator.zero_allocate(size, sizeof(kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response__fini(&data[i - 1]);
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
kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response__Sequence__fini(kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response__Sequence * array)
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
      kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response__fini(&array->data[i]);
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

kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response__Sequence *
kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response__Sequence * array = (kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response__Sequence *)allocator.allocate(sizeof(kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response__Sequence__destroy(kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response__Sequence__are_equal(const kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response__Sequence * lhs, const kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response__Sequence__copy(
  const kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response__Sequence * input,
  kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response * data =
      (kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "kachaka_interfaces/action/detail/exec_kachaka_command__functions.h"

bool
kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage__init(kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!kachaka_interfaces__action__ExecKachakaCommand_Feedback__init(&msg->feedback)) {
    kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage__fini(kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  kachaka_interfaces__action__ExecKachakaCommand_Feedback__fini(&msg->feedback);
}

bool
kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage__are_equal(const kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage * lhs, const kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!kachaka_interfaces__action__ExecKachakaCommand_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage__copy(
  const kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage * input,
  kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!kachaka_interfaces__action__ExecKachakaCommand_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage *
kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage * msg = (kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage *)allocator.allocate(sizeof(kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage));
  bool success = kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage__destroy(kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage__Sequence__init(kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage * data = NULL;

  if (size) {
    data = (kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage *)allocator.zero_allocate(size, sizeof(kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage__fini(&data[i - 1]);
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
kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage__Sequence__fini(kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage__Sequence * array)
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
      kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage__fini(&array->data[i]);
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

kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage__Sequence *
kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage__Sequence * array = (kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage__Sequence *)allocator.allocate(sizeof(kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage__Sequence__destroy(kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage__Sequence__are_equal(const kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage__Sequence * lhs, const kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage__Sequence__copy(
  const kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage__Sequence * input,
  kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage * data =
      (kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
