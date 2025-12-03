// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from kachaka_interfaces:msg/ObjectDetection.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "kachaka_interfaces/msg/detail/object_detection__rosidl_typesupport_introspection_c.h"
#include "kachaka_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "kachaka_interfaces/msg/detail/object_detection__functions.h"
#include "kachaka_interfaces/msg/detail/object_detection__struct.h"


// Include directives for member types
// Member `roi`
#include "sensor_msgs/msg/region_of_interest.h"
// Member `roi`
#include "sensor_msgs/msg/detail/region_of_interest__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void kachaka_interfaces__msg__ObjectDetection__rosidl_typesupport_introspection_c__ObjectDetection_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  kachaka_interfaces__msg__ObjectDetection__init(message_memory);
}

void kachaka_interfaces__msg__ObjectDetection__rosidl_typesupport_introspection_c__ObjectDetection_fini_function(void * message_memory)
{
  kachaka_interfaces__msg__ObjectDetection__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember kachaka_interfaces__msg__ObjectDetection__rosidl_typesupport_introspection_c__ObjectDetection_message_member_array[4] = {
  {
    "label",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kachaka_interfaces__msg__ObjectDetection, label),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "roi",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kachaka_interfaces__msg__ObjectDetection, roi),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "score",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kachaka_interfaces__msg__ObjectDetection, score),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "distance_median",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kachaka_interfaces__msg__ObjectDetection, distance_median),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers kachaka_interfaces__msg__ObjectDetection__rosidl_typesupport_introspection_c__ObjectDetection_message_members = {
  "kachaka_interfaces__msg",  // message namespace
  "ObjectDetection",  // message name
  4,  // number of fields
  sizeof(kachaka_interfaces__msg__ObjectDetection),
  kachaka_interfaces__msg__ObjectDetection__rosidl_typesupport_introspection_c__ObjectDetection_message_member_array,  // message members
  kachaka_interfaces__msg__ObjectDetection__rosidl_typesupport_introspection_c__ObjectDetection_init_function,  // function to initialize message memory (memory has to be allocated)
  kachaka_interfaces__msg__ObjectDetection__rosidl_typesupport_introspection_c__ObjectDetection_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t kachaka_interfaces__msg__ObjectDetection__rosidl_typesupport_introspection_c__ObjectDetection_message_type_support_handle = {
  0,
  &kachaka_interfaces__msg__ObjectDetection__rosidl_typesupport_introspection_c__ObjectDetection_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_kachaka_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kachaka_interfaces, msg, ObjectDetection)() {
  kachaka_interfaces__msg__ObjectDetection__rosidl_typesupport_introspection_c__ObjectDetection_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, RegionOfInterest)();
  if (!kachaka_interfaces__msg__ObjectDetection__rosidl_typesupport_introspection_c__ObjectDetection_message_type_support_handle.typesupport_identifier) {
    kachaka_interfaces__msg__ObjectDetection__rosidl_typesupport_introspection_c__ObjectDetection_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &kachaka_interfaces__msg__ObjectDetection__rosidl_typesupport_introspection_c__ObjectDetection_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
