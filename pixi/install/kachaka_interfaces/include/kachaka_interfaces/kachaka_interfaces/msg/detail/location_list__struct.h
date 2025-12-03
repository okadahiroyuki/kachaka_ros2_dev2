// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kachaka_interfaces:msg/LocationList.idl
// generated code does not contain a copyright notice

#ifndef KACHAKA_INTERFACES__MSG__DETAIL__LOCATION_LIST__STRUCT_H_
#define KACHAKA_INTERFACES__MSG__DETAIL__LOCATION_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'locations'
#include "kachaka_interfaces/msg/detail/location__struct.h"
// Member 'default_location_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/LocationList in the package kachaka_interfaces.
typedef struct kachaka_interfaces__msg__LocationList
{
  kachaka_interfaces__msg__Location__Sequence locations;
  rosidl_runtime_c__String default_location_id;
} kachaka_interfaces__msg__LocationList;

// Struct for a sequence of kachaka_interfaces__msg__LocationList.
typedef struct kachaka_interfaces__msg__LocationList__Sequence
{
  kachaka_interfaces__msg__LocationList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kachaka_interfaces__msg__LocationList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KACHAKA_INTERFACES__MSG__DETAIL__LOCATION_LIST__STRUCT_H_
