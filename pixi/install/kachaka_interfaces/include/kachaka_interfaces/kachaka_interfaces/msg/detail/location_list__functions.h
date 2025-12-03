// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from kachaka_interfaces:msg/LocationList.idl
// generated code does not contain a copyright notice

#ifndef KACHAKA_INTERFACES__MSG__DETAIL__LOCATION_LIST__FUNCTIONS_H_
#define KACHAKA_INTERFACES__MSG__DETAIL__LOCATION_LIST__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "kachaka_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "kachaka_interfaces/msg/detail/location_list__struct.h"

/// Initialize msg/LocationList message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * kachaka_interfaces__msg__LocationList
 * )) before or use
 * kachaka_interfaces__msg__LocationList__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
bool
kachaka_interfaces__msg__LocationList__init(kachaka_interfaces__msg__LocationList * msg);

/// Finalize msg/LocationList message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
void
kachaka_interfaces__msg__LocationList__fini(kachaka_interfaces__msg__LocationList * msg);

/// Create msg/LocationList message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * kachaka_interfaces__msg__LocationList__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
kachaka_interfaces__msg__LocationList *
kachaka_interfaces__msg__LocationList__create();

/// Destroy msg/LocationList message.
/**
 * It calls
 * kachaka_interfaces__msg__LocationList__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
void
kachaka_interfaces__msg__LocationList__destroy(kachaka_interfaces__msg__LocationList * msg);

/// Check for msg/LocationList message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
bool
kachaka_interfaces__msg__LocationList__are_equal(const kachaka_interfaces__msg__LocationList * lhs, const kachaka_interfaces__msg__LocationList * rhs);

/// Copy a msg/LocationList message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
bool
kachaka_interfaces__msg__LocationList__copy(
  const kachaka_interfaces__msg__LocationList * input,
  kachaka_interfaces__msg__LocationList * output);

/// Initialize array of msg/LocationList messages.
/**
 * It allocates the memory for the number of elements and calls
 * kachaka_interfaces__msg__LocationList__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
bool
kachaka_interfaces__msg__LocationList__Sequence__init(kachaka_interfaces__msg__LocationList__Sequence * array, size_t size);

/// Finalize array of msg/LocationList messages.
/**
 * It calls
 * kachaka_interfaces__msg__LocationList__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
void
kachaka_interfaces__msg__LocationList__Sequence__fini(kachaka_interfaces__msg__LocationList__Sequence * array);

/// Create array of msg/LocationList messages.
/**
 * It allocates the memory for the array and calls
 * kachaka_interfaces__msg__LocationList__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
kachaka_interfaces__msg__LocationList__Sequence *
kachaka_interfaces__msg__LocationList__Sequence__create(size_t size);

/// Destroy array of msg/LocationList messages.
/**
 * It calls
 * kachaka_interfaces__msg__LocationList__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
void
kachaka_interfaces__msg__LocationList__Sequence__destroy(kachaka_interfaces__msg__LocationList__Sequence * array);

/// Check for msg/LocationList message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
bool
kachaka_interfaces__msg__LocationList__Sequence__are_equal(const kachaka_interfaces__msg__LocationList__Sequence * lhs, const kachaka_interfaces__msg__LocationList__Sequence * rhs);

/// Copy an array of msg/LocationList messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
bool
kachaka_interfaces__msg__LocationList__Sequence__copy(
  const kachaka_interfaces__msg__LocationList__Sequence * input,
  kachaka_interfaces__msg__LocationList__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // KACHAKA_INTERFACES__MSG__DETAIL__LOCATION_LIST__FUNCTIONS_H_
