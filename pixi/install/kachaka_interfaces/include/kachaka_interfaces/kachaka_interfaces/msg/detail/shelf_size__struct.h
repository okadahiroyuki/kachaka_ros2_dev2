// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kachaka_interfaces:msg/ShelfSize.idl
// generated code does not contain a copyright notice

#ifndef KACHAKA_INTERFACES__MSG__DETAIL__SHELF_SIZE__STRUCT_H_
#define KACHAKA_INTERFACES__MSG__DETAIL__SHELF_SIZE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ShelfSize in the package kachaka_interfaces.
typedef struct kachaka_interfaces__msg__ShelfSize
{
  double width;
  double depth;
} kachaka_interfaces__msg__ShelfSize;

// Struct for a sequence of kachaka_interfaces__msg__ShelfSize.
typedef struct kachaka_interfaces__msg__ShelfSize__Sequence
{
  kachaka_interfaces__msg__ShelfSize * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kachaka_interfaces__msg__ShelfSize__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KACHAKA_INTERFACES__MSG__DETAIL__SHELF_SIZE__STRUCT_H_
