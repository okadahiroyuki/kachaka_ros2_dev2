// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from kachaka_interfaces:msg/LocationList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "kachaka_interfaces/msg/detail/location_list__rosidl_typesupport_introspection_c.h"
#include "kachaka_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "kachaka_interfaces/msg/detail/location_list__functions.h"
#include "kachaka_interfaces/msg/detail/location_list__struct.h"


// Include directives for member types
// Member `locations`
#include "kachaka_interfaces/msg/location.h"
// Member `locations`
#include "kachaka_interfaces/msg/detail/location__rosidl_typesupport_introspection_c.h"
// Member `default_location_id`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void kachaka_interfaces__msg__LocationList__rosidl_typesupport_introspection_c__LocationList_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  kachaka_interfaces__msg__LocationList__init(message_memory);
}

void kachaka_interfaces__msg__LocationList__rosidl_typesupport_introspection_c__LocationList_fini_function(void * message_memory)
{
  kachaka_interfaces__msg__LocationList__fini(message_memory);
}

size_t kachaka_interfaces__msg__LocationList__rosidl_typesupport_introspection_c__size_function__LocationList__locations(
  const void * untyped_member)
{
  const kachaka_interfaces__msg__Location__Sequence * member =
    (const kachaka_interfaces__msg__Location__Sequence *)(untyped_member);
  return member->size;
}

const void * kachaka_interfaces__msg__LocationList__rosidl_typesupport_introspection_c__get_const_function__LocationList__locations(
  const void * untyped_member, size_t index)
{
  const kachaka_interfaces__msg__Location__Sequence * member =
    (const kachaka_interfaces__msg__Location__Sequence *)(untyped_member);
  return &member->data[index];
}

void * kachaka_interfaces__msg__LocationList__rosidl_typesupport_introspection_c__get_function__LocationList__locations(
  void * untyped_member, size_t index)
{
  kachaka_interfaces__msg__Location__Sequence * member =
    (kachaka_interfaces__msg__Location__Sequence *)(untyped_member);
  return &member->data[index];
}

void kachaka_interfaces__msg__LocationList__rosidl_typesupport_introspection_c__fetch_function__LocationList__locations(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const kachaka_interfaces__msg__Location * item =
    ((const kachaka_interfaces__msg__Location *)
    kachaka_interfaces__msg__LocationList__rosidl_typesupport_introspection_c__get_const_function__LocationList__locations(untyped_member, index));
  kachaka_interfaces__msg__Location * value =
    (kachaka_interfaces__msg__Location *)(untyped_value);
  *value = *item;
}

void kachaka_interfaces__msg__LocationList__rosidl_typesupport_introspection_c__assign_function__LocationList__locations(
  void * untyped_member, size_t index, const void * untyped_value)
{
  kachaka_interfaces__msg__Location * item =
    ((kachaka_interfaces__msg__Location *)
    kachaka_interfaces__msg__LocationList__rosidl_typesupport_introspection_c__get_function__LocationList__locations(untyped_member, index));
  const kachaka_interfaces__msg__Location * value =
    (const kachaka_interfaces__msg__Location *)(untyped_value);
  *item = *value;
}

bool kachaka_interfaces__msg__LocationList__rosidl_typesupport_introspection_c__resize_function__LocationList__locations(
  void * untyped_member, size_t size)
{
  kachaka_interfaces__msg__Location__Sequence * member =
    (kachaka_interfaces__msg__Location__Sequence *)(untyped_member);
  kachaka_interfaces__msg__Location__Sequence__fini(member);
  return kachaka_interfaces__msg__Location__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember kachaka_interfaces__msg__LocationList__rosidl_typesupport_introspection_c__LocationList_message_member_array[2] = {
  {
    "locations",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kachaka_interfaces__msg__LocationList, locations),  // bytes offset in struct
    NULL,  // default value
    kachaka_interfaces__msg__LocationList__rosidl_typesupport_introspection_c__size_function__LocationList__locations,  // size() function pointer
    kachaka_interfaces__msg__LocationList__rosidl_typesupport_introspection_c__get_const_function__LocationList__locations,  // get_const(index) function pointer
    kachaka_interfaces__msg__LocationList__rosidl_typesupport_introspection_c__get_function__LocationList__locations,  // get(index) function pointer
    kachaka_interfaces__msg__LocationList__rosidl_typesupport_introspection_c__fetch_function__LocationList__locations,  // fetch(index, &value) function pointer
    kachaka_interfaces__msg__LocationList__rosidl_typesupport_introspection_c__assign_function__LocationList__locations,  // assign(index, value) function pointer
    kachaka_interfaces__msg__LocationList__rosidl_typesupport_introspection_c__resize_function__LocationList__locations  // resize(index) function pointer
  },
  {
    "default_location_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kachaka_interfaces__msg__LocationList, default_location_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers kachaka_interfaces__msg__LocationList__rosidl_typesupport_introspection_c__LocationList_message_members = {
  "kachaka_interfaces__msg",  // message namespace
  "LocationList",  // message name
  2,  // number of fields
  sizeof(kachaka_interfaces__msg__LocationList),
  kachaka_interfaces__msg__LocationList__rosidl_typesupport_introspection_c__LocationList_message_member_array,  // message members
  kachaka_interfaces__msg__LocationList__rosidl_typesupport_introspection_c__LocationList_init_function,  // function to initialize message memory (memory has to be allocated)
  kachaka_interfaces__msg__LocationList__rosidl_typesupport_introspection_c__LocationList_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t kachaka_interfaces__msg__LocationList__rosidl_typesupport_introspection_c__LocationList_message_type_support_handle = {
  0,
  &kachaka_interfaces__msg__LocationList__rosidl_typesupport_introspection_c__LocationList_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_kachaka_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kachaka_interfaces, msg, LocationList)() {
  kachaka_interfaces__msg__LocationList__rosidl_typesupport_introspection_c__LocationList_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kachaka_interfaces, msg, Location)();
  if (!kachaka_interfaces__msg__LocationList__rosidl_typesupport_introspection_c__LocationList_message_type_support_handle.typesupport_identifier) {
    kachaka_interfaces__msg__LocationList__rosidl_typesupport_introspection_c__LocationList_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &kachaka_interfaces__msg__LocationList__rosidl_typesupport_introspection_c__LocationList_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
