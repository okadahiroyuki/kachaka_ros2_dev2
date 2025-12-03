// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kachaka_interfaces:msg/ObjectDetection.idl
// generated code does not contain a copyright notice

#ifndef KACHAKA_INTERFACES__MSG__DETAIL__OBJECT_DETECTION__STRUCT_H_
#define KACHAKA_INTERFACES__MSG__DETAIL__OBJECT_DETECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'PERSON'.
enum
{
  kachaka_interfaces__msg__ObjectDetection__PERSON = 0
};

/// Constant 'SHELF'.
enum
{
  kachaka_interfaces__msg__ObjectDetection__SHELF = 1
};

/// Constant 'CHARGER'.
enum
{
  kachaka_interfaces__msg__ObjectDetection__CHARGER = 2
};

/// Constant 'DOOR'.
enum
{
  kachaka_interfaces__msg__ObjectDetection__DOOR = 3
};

// Include directives for member types
// Member 'roi'
#include "sensor_msgs/msg/detail/region_of_interest__struct.h"

/// Struct defined in msg/ObjectDetection in the package kachaka_interfaces.
/**
  * Object label definition
 */
typedef struct kachaka_interfaces__msg__ObjectDetection
{
  /// Object label
  uint8_t label;
  /// Region of the detected object
  sensor_msgs__msg__RegionOfInterest roi;
  /// Confidence score for the detected object
  float score;
  /// Distance to the detected object. Median value in the region.
  /// 0.0 is interpreted as invalid distance
  double distance_median;
} kachaka_interfaces__msg__ObjectDetection;

// Struct for a sequence of kachaka_interfaces__msg__ObjectDetection.
typedef struct kachaka_interfaces__msg__ObjectDetection__Sequence
{
  kachaka_interfaces__msg__ObjectDetection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kachaka_interfaces__msg__ObjectDetection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KACHAKA_INTERFACES__MSG__DETAIL__OBJECT_DETECTION__STRUCT_H_
