// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kachaka_interfaces:msg/Shelf.idl
// generated code does not contain a copyright notice

#ifndef KACHAKA_INTERFACES__MSG__DETAIL__SHELF__STRUCT_H_
#define KACHAKA_INTERFACES__MSG__DETAIL__SHELF__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DEFAULT_SPEED_MODE'.
enum
{
  kachaka_interfaces__msg__Shelf__DEFAULT_SPEED_MODE = 0
};

/// Constant 'LOW_SPEED_MODE'.
enum
{
  kachaka_interfaces__msg__Shelf__LOW_SPEED_MODE = 1
};

// Include directives for member types
// Member 'id'
// Member 'name'
// Member 'home_location_id'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose2_d__struct.h"
// Member 'size'
#include "kachaka_interfaces/msg/detail/shelf_size__struct.h"

/// Struct defined in msg/Shelf in the package kachaka_interfaces.
typedef struct kachaka_interfaces__msg__Shelf
{
  rosidl_runtime_c__String id;
  rosidl_runtime_c__String name;
  geometry_msgs__msg__Pose2D pose;
  kachaka_interfaces__msg__ShelfSize size;
  rosidl_runtime_c__String home_location_id;
  uint8_t speed_mode;
} kachaka_interfaces__msg__Shelf;

// Struct for a sequence of kachaka_interfaces__msg__Shelf.
typedef struct kachaka_interfaces__msg__Shelf__Sequence
{
  kachaka_interfaces__msg__Shelf * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kachaka_interfaces__msg__Shelf__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KACHAKA_INTERFACES__MSG__DETAIL__SHELF__STRUCT_H_
