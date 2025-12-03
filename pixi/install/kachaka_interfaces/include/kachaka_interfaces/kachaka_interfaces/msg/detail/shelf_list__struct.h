// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kachaka_interfaces:msg/ShelfList.idl
// generated code does not contain a copyright notice

#ifndef KACHAKA_INTERFACES__MSG__DETAIL__SHELF_LIST__STRUCT_H_
#define KACHAKA_INTERFACES__MSG__DETAIL__SHELF_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'shelves'
#include "kachaka_interfaces/msg/detail/shelf__struct.h"

/// Struct defined in msg/ShelfList in the package kachaka_interfaces.
typedef struct kachaka_interfaces__msg__ShelfList
{
  kachaka_interfaces__msg__Shelf__Sequence shelves;
} kachaka_interfaces__msg__ShelfList;

// Struct for a sequence of kachaka_interfaces__msg__ShelfList.
typedef struct kachaka_interfaces__msg__ShelfList__Sequence
{
  kachaka_interfaces__msg__ShelfList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kachaka_interfaces__msg__ShelfList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KACHAKA_INTERFACES__MSG__DETAIL__SHELF_LIST__STRUCT_H_
