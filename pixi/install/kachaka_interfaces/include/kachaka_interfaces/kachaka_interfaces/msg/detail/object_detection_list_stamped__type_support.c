// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from kachaka_interfaces:msg/ObjectDetectionListStamped.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "kachaka_interfaces/msg/detail/object_detection_list_stamped__rosidl_typesupport_introspection_c.h"
#include "kachaka_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "kachaka_interfaces/msg/detail/object_detection_list_stamped__functions.h"
#include "kachaka_interfaces/msg/detail/object_detection_list_stamped__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `detection`
#include "kachaka_interfaces/msg/object_detection.h"
// Member `detection`
#include "kachaka_interfaces/msg/detail/object_detection__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void kachaka_interfaces__msg__ObjectDetectionListStamped__rosidl_typesupport_introspection_c__ObjectDetectionListStamped_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  kachaka_interfaces__msg__ObjectDetectionListStamped__init(message_memory);
}

void kachaka_interfaces__msg__ObjectDetectionListStamped__rosidl_typesupport_introspection_c__ObjectDetectionListStamped_fini_function(void * message_memory)
{
  kachaka_interfaces__msg__ObjectDetectionListStamped__fini(message_memory);
}

size_t kachaka_interfaces__msg__ObjectDetectionListStamped__rosidl_typesupport_introspection_c__size_function__ObjectDetectionListStamped__detection(
  const void * untyped_member)
{
  const kachaka_interfaces__msg__ObjectDetection__Sequence * member =
    (const kachaka_interfaces__msg__ObjectDetection__Sequence *)(untyped_member);
  return member->size;
}

const void * kachaka_interfaces__msg__ObjectDetectionListStamped__rosidl_typesupport_introspection_c__get_const_function__ObjectDetectionListStamped__detection(
  const void * untyped_member, size_t index)
{
  const kachaka_interfaces__msg__ObjectDetection__Sequence * member =
    (const kachaka_interfaces__msg__ObjectDetection__Sequence *)(untyped_member);
  return &member->data[index];
}

void * kachaka_interfaces__msg__ObjectDetectionListStamped__rosidl_typesupport_introspection_c__get_function__ObjectDetectionListStamped__detection(
  void * untyped_member, size_t index)
{
  kachaka_interfaces__msg__ObjectDetection__Sequence * member =
    (kachaka_interfaces__msg__ObjectDetection__Sequence *)(untyped_member);
  return &member->data[index];
}

void kachaka_interfaces__msg__ObjectDetectionListStamped__rosidl_typesupport_introspection_c__fetch_function__ObjectDetectionListStamped__detection(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const kachaka_interfaces__msg__ObjectDetection * item =
    ((const kachaka_interfaces__msg__ObjectDetection *)
    kachaka_interfaces__msg__ObjectDetectionListStamped__rosidl_typesupport_introspection_c__get_const_function__ObjectDetectionListStamped__detection(untyped_member, index));
  kachaka_interfaces__msg__ObjectDetection * value =
    (kachaka_interfaces__msg__ObjectDetection *)(untyped_value);
  *value = *item;
}

void kachaka_interfaces__msg__ObjectDetectionListStamped__rosidl_typesupport_introspection_c__assign_function__ObjectDetectionListStamped__detection(
  void * untyped_member, size_t index, const void * untyped_value)
{
  kachaka_interfaces__msg__ObjectDetection * item =
    ((kachaka_interfaces__msg__ObjectDetection *)
    kachaka_interfaces__msg__ObjectDetectionListStamped__rosidl_typesupport_introspection_c__get_function__ObjectDetectionListStamped__detection(untyped_member, index));
  const kachaka_interfaces__msg__ObjectDetection * value =
    (const kachaka_interfaces__msg__ObjectDetection *)(untyped_value);
  *item = *value;
}

bool kachaka_interfaces__msg__ObjectDetectionListStamped__rosidl_typesupport_introspection_c__resize_function__ObjectDetectionListStamped__detection(
  void * untyped_member, size_t size)
{
  kachaka_interfaces__msg__ObjectDetection__Sequence * member =
    (kachaka_interfaces__msg__ObjectDetection__Sequence *)(untyped_member);
  kachaka_interfaces__msg__ObjectDetection__Sequence__fini(member);
  return kachaka_interfaces__msg__ObjectDetection__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember kachaka_interfaces__msg__ObjectDetectionListStamped__rosidl_typesupport_introspection_c__ObjectDetectionListStamped_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kachaka_interfaces__msg__ObjectDetectionListStamped, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "detection",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kachaka_interfaces__msg__ObjectDetectionListStamped, detection),  // bytes offset in struct
    NULL,  // default value
    kachaka_interfaces__msg__ObjectDetectionListStamped__rosidl_typesupport_introspection_c__size_function__ObjectDetectionListStamped__detection,  // size() function pointer
    kachaka_interfaces__msg__ObjectDetectionListStamped__rosidl_typesupport_introspection_c__get_const_function__ObjectDetectionListStamped__detection,  // get_const(index) function pointer
    kachaka_interfaces__msg__ObjectDetectionListStamped__rosidl_typesupport_introspection_c__get_function__ObjectDetectionListStamped__detection,  // get(index) function pointer
    kachaka_interfaces__msg__ObjectDetectionListStamped__rosidl_typesupport_introspection_c__fetch_function__ObjectDetectionListStamped__detection,  // fetch(index, &value) function pointer
    kachaka_interfaces__msg__ObjectDetectionListStamped__rosidl_typesupport_introspection_c__assign_function__ObjectDetectionListStamped__detection,  // assign(index, value) function pointer
    kachaka_interfaces__msg__ObjectDetectionListStamped__rosidl_typesupport_introspection_c__resize_function__ObjectDetectionListStamped__detection  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers kachaka_interfaces__msg__ObjectDetectionListStamped__rosidl_typesupport_introspection_c__ObjectDetectionListStamped_message_members = {
  "kachaka_interfaces__msg",  // message namespace
  "ObjectDetectionListStamped",  // message name
  2,  // number of fields
  sizeof(kachaka_interfaces__msg__ObjectDetectionListStamped),
  kachaka_interfaces__msg__ObjectDetectionListStamped__rosidl_typesupport_introspection_c__ObjectDetectionListStamped_message_member_array,  // message members
  kachaka_interfaces__msg__ObjectDetectionListStamped__rosidl_typesupport_introspection_c__ObjectDetectionListStamped_init_function,  // function to initialize message memory (memory has to be allocated)
  kachaka_interfaces__msg__ObjectDetectionListStamped__rosidl_typesupport_introspection_c__ObjectDetectionListStamped_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t kachaka_interfaces__msg__ObjectDetectionListStamped__rosidl_typesupport_introspection_c__ObjectDetectionListStamped_message_type_support_handle = {
  0,
  &kachaka_interfaces__msg__ObjectDetectionListStamped__rosidl_typesupport_introspection_c__ObjectDetectionListStamped_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_kachaka_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kachaka_interfaces, msg, ObjectDetectionListStamped)() {
  kachaka_interfaces__msg__ObjectDetectionListStamped__rosidl_typesupport_introspection_c__ObjectDetectionListStamped_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  kachaka_interfaces__msg__ObjectDetectionListStamped__rosidl_typesupport_introspection_c__ObjectDetectionListStamped_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kachaka_interfaces, msg, ObjectDetection)();
  if (!kachaka_interfaces__msg__ObjectDetectionListStamped__rosidl_typesupport_introspection_c__ObjectDetectionListStamped_message_type_support_handle.typesupport_identifier) {
    kachaka_interfaces__msg__ObjectDetectionListStamped__rosidl_typesupport_introspection_c__ObjectDetectionListStamped_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &kachaka_interfaces__msg__ObjectDetectionListStamped__rosidl_typesupport_introspection_c__ObjectDetectionListStamped_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
