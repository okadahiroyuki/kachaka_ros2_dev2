// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from kachaka_interfaces:msg/ShelfList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "kachaka_interfaces/msg/detail/shelf_list__rosidl_typesupport_introspection_c.h"
#include "kachaka_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "kachaka_interfaces/msg/detail/shelf_list__functions.h"
#include "kachaka_interfaces/msg/detail/shelf_list__struct.h"


// Include directives for member types
// Member `shelves`
#include "kachaka_interfaces/msg/shelf.h"
// Member `shelves`
#include "kachaka_interfaces/msg/detail/shelf__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void kachaka_interfaces__msg__ShelfList__rosidl_typesupport_introspection_c__ShelfList_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  kachaka_interfaces__msg__ShelfList__init(message_memory);
}

void kachaka_interfaces__msg__ShelfList__rosidl_typesupport_introspection_c__ShelfList_fini_function(void * message_memory)
{
  kachaka_interfaces__msg__ShelfList__fini(message_memory);
}

size_t kachaka_interfaces__msg__ShelfList__rosidl_typesupport_introspection_c__size_function__ShelfList__shelves(
  const void * untyped_member)
{
  const kachaka_interfaces__msg__Shelf__Sequence * member =
    (const kachaka_interfaces__msg__Shelf__Sequence *)(untyped_member);
  return member->size;
}

const void * kachaka_interfaces__msg__ShelfList__rosidl_typesupport_introspection_c__get_const_function__ShelfList__shelves(
  const void * untyped_member, size_t index)
{
  const kachaka_interfaces__msg__Shelf__Sequence * member =
    (const kachaka_interfaces__msg__Shelf__Sequence *)(untyped_member);
  return &member->data[index];
}

void * kachaka_interfaces__msg__ShelfList__rosidl_typesupport_introspection_c__get_function__ShelfList__shelves(
  void * untyped_member, size_t index)
{
  kachaka_interfaces__msg__Shelf__Sequence * member =
    (kachaka_interfaces__msg__Shelf__Sequence *)(untyped_member);
  return &member->data[index];
}

void kachaka_interfaces__msg__ShelfList__rosidl_typesupport_introspection_c__fetch_function__ShelfList__shelves(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const kachaka_interfaces__msg__Shelf * item =
    ((const kachaka_interfaces__msg__Shelf *)
    kachaka_interfaces__msg__ShelfList__rosidl_typesupport_introspection_c__get_const_function__ShelfList__shelves(untyped_member, index));
  kachaka_interfaces__msg__Shelf * value =
    (kachaka_interfaces__msg__Shelf *)(untyped_value);
  *value = *item;
}

void kachaka_interfaces__msg__ShelfList__rosidl_typesupport_introspection_c__assign_function__ShelfList__shelves(
  void * untyped_member, size_t index, const void * untyped_value)
{
  kachaka_interfaces__msg__Shelf * item =
    ((kachaka_interfaces__msg__Shelf *)
    kachaka_interfaces__msg__ShelfList__rosidl_typesupport_introspection_c__get_function__ShelfList__shelves(untyped_member, index));
  const kachaka_interfaces__msg__Shelf * value =
    (const kachaka_interfaces__msg__Shelf *)(untyped_value);
  *item = *value;
}

bool kachaka_interfaces__msg__ShelfList__rosidl_typesupport_introspection_c__resize_function__ShelfList__shelves(
  void * untyped_member, size_t size)
{
  kachaka_interfaces__msg__Shelf__Sequence * member =
    (kachaka_interfaces__msg__Shelf__Sequence *)(untyped_member);
  kachaka_interfaces__msg__Shelf__Sequence__fini(member);
  return kachaka_interfaces__msg__Shelf__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember kachaka_interfaces__msg__ShelfList__rosidl_typesupport_introspection_c__ShelfList_message_member_array[1] = {
  {
    "shelves",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kachaka_interfaces__msg__ShelfList, shelves),  // bytes offset in struct
    NULL,  // default value
    kachaka_interfaces__msg__ShelfList__rosidl_typesupport_introspection_c__size_function__ShelfList__shelves,  // size() function pointer
    kachaka_interfaces__msg__ShelfList__rosidl_typesupport_introspection_c__get_const_function__ShelfList__shelves,  // get_const(index) function pointer
    kachaka_interfaces__msg__ShelfList__rosidl_typesupport_introspection_c__get_function__ShelfList__shelves,  // get(index) function pointer
    kachaka_interfaces__msg__ShelfList__rosidl_typesupport_introspection_c__fetch_function__ShelfList__shelves,  // fetch(index, &value) function pointer
    kachaka_interfaces__msg__ShelfList__rosidl_typesupport_introspection_c__assign_function__ShelfList__shelves,  // assign(index, value) function pointer
    kachaka_interfaces__msg__ShelfList__rosidl_typesupport_introspection_c__resize_function__ShelfList__shelves  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers kachaka_interfaces__msg__ShelfList__rosidl_typesupport_introspection_c__ShelfList_message_members = {
  "kachaka_interfaces__msg",  // message namespace
  "ShelfList",  // message name
  1,  // number of fields
  sizeof(kachaka_interfaces__msg__ShelfList),
  kachaka_interfaces__msg__ShelfList__rosidl_typesupport_introspection_c__ShelfList_message_member_array,  // message members
  kachaka_interfaces__msg__ShelfList__rosidl_typesupport_introspection_c__ShelfList_init_function,  // function to initialize message memory (memory has to be allocated)
  kachaka_interfaces__msg__ShelfList__rosidl_typesupport_introspection_c__ShelfList_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t kachaka_interfaces__msg__ShelfList__rosidl_typesupport_introspection_c__ShelfList_message_type_support_handle = {
  0,
  &kachaka_interfaces__msg__ShelfList__rosidl_typesupport_introspection_c__ShelfList_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_kachaka_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kachaka_interfaces, msg, ShelfList)() {
  kachaka_interfaces__msg__ShelfList__rosidl_typesupport_introspection_c__ShelfList_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kachaka_interfaces, msg, Shelf)();
  if (!kachaka_interfaces__msg__ShelfList__rosidl_typesupport_introspection_c__ShelfList_message_type_support_handle.typesupport_identifier) {
    kachaka_interfaces__msg__ShelfList__rosidl_typesupport_introspection_c__ShelfList_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &kachaka_interfaces__msg__ShelfList__rosidl_typesupport_introspection_c__ShelfList_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
