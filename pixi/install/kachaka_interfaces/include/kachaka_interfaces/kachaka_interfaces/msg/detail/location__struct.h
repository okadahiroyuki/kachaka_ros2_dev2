// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kachaka_interfaces:msg/Location.idl
// generated code does not contain a copyright notice

#ifndef KACHAKA_INTERFACES__MSG__DETAIL__LOCATION__STRUCT_H_
#define KACHAKA_INTERFACES__MSG__DETAIL__LOCATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'LOCATION_TYPE_OTHER'.
enum
{
  kachaka_interfaces__msg__Location__LOCATION_TYPE_OTHER = 0
};

/// Constant 'LOCATION_TYPE_CHARGER'.
enum
{
  kachaka_interfaces__msg__Location__LOCATION_TYPE_CHARGER = 1
};

/// Constant 'LOCATION_TYPE_SHELF_HOME'.
enum
{
  kachaka_interfaces__msg__Location__LOCATION_TYPE_SHELF_HOME = 2
};

// Include directives for member types
// Member 'id'
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose2_d__struct.h"

/// Struct defined in msg/Location in the package kachaka_interfaces.
typedef struct kachaka_interfaces__msg__Location
{
  rosidl_runtime_c__String id;
  rosidl_runtime_c__String name;
  uint8_t type;
  geometry_msgs__msg__Pose2D pose;
} kachaka_interfaces__msg__Location;

// Struct for a sequence of kachaka_interfaces__msg__Location.
typedef struct kachaka_interfaces__msg__Location__Sequence
{
  kachaka_interfaces__msg__Location * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kachaka_interfaces__msg__Location__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KACHAKA_INTERFACES__MSG__DETAIL__LOCATION__STRUCT_H_
