// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kachaka_interfaces:msg/ObjectDetectionListStamped.idl
// generated code does not contain a copyright notice

#ifndef KACHAKA_INTERFACES__MSG__DETAIL__OBJECT_DETECTION_LIST_STAMPED__STRUCT_H_
#define KACHAKA_INTERFACES__MSG__DETAIL__OBJECT_DETECTION_LIST_STAMPED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'detection'
#include "kachaka_interfaces/msg/detail/object_detection__struct.h"

/// Struct defined in msg/ObjectDetectionListStamped in the package kachaka_interfaces.
typedef struct kachaka_interfaces__msg__ObjectDetectionListStamped
{
  std_msgs__msg__Header header;
  kachaka_interfaces__msg__ObjectDetection__Sequence detection;
} kachaka_interfaces__msg__ObjectDetectionListStamped;

// Struct for a sequence of kachaka_interfaces__msg__ObjectDetectionListStamped.
typedef struct kachaka_interfaces__msg__ObjectDetectionListStamped__Sequence
{
  kachaka_interfaces__msg__ObjectDetectionListStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kachaka_interfaces__msg__ObjectDetectionListStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KACHAKA_INTERFACES__MSG__DETAIL__OBJECT_DETECTION_LIST_STAMPED__STRUCT_H_
