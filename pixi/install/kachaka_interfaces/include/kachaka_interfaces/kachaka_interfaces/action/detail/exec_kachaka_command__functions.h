// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from kachaka_interfaces:action/ExecKachakaCommand.idl
// generated code does not contain a copyright notice

#ifndef KACHAKA_INTERFACES__ACTION__DETAIL__EXEC_KACHAKA_COMMAND__FUNCTIONS_H_
#define KACHAKA_INTERFACES__ACTION__DETAIL__EXEC_KACHAKA_COMMAND__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "kachaka_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "kachaka_interfaces/action/detail/exec_kachaka_command__struct.h"

/// Initialize action/ExecKachakaCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * kachaka_interfaces__action__ExecKachakaCommand_Goal
 * )) before or use
 * kachaka_interfaces__action__ExecKachakaCommand_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
bool
kachaka_interfaces__action__ExecKachakaCommand_Goal__init(kachaka_interfaces__action__ExecKachakaCommand_Goal * msg);

/// Finalize action/ExecKachakaCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
void
kachaka_interfaces__action__ExecKachakaCommand_Goal__fini(kachaka_interfaces__action__ExecKachakaCommand_Goal * msg);

/// Create action/ExecKachakaCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * kachaka_interfaces__action__ExecKachakaCommand_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
kachaka_interfaces__action__ExecKachakaCommand_Goal *
kachaka_interfaces__action__ExecKachakaCommand_Goal__create();

/// Destroy action/ExecKachakaCommand message.
/**
 * It calls
 * kachaka_interfaces__action__ExecKachakaCommand_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
void
kachaka_interfaces__action__ExecKachakaCommand_Goal__destroy(kachaka_interfaces__action__ExecKachakaCommand_Goal * msg);

/// Check for action/ExecKachakaCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
bool
kachaka_interfaces__action__ExecKachakaCommand_Goal__are_equal(const kachaka_interfaces__action__ExecKachakaCommand_Goal * lhs, const kachaka_interfaces__action__ExecKachakaCommand_Goal * rhs);

/// Copy a action/ExecKachakaCommand message.
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
kachaka_interfaces__action__ExecKachakaCommand_Goal__copy(
  const kachaka_interfaces__action__ExecKachakaCommand_Goal * input,
  kachaka_interfaces__action__ExecKachakaCommand_Goal * output);

/// Initialize array of action/ExecKachakaCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * kachaka_interfaces__action__ExecKachakaCommand_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
bool
kachaka_interfaces__action__ExecKachakaCommand_Goal__Sequence__init(kachaka_interfaces__action__ExecKachakaCommand_Goal__Sequence * array, size_t size);

/// Finalize array of action/ExecKachakaCommand messages.
/**
 * It calls
 * kachaka_interfaces__action__ExecKachakaCommand_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
void
kachaka_interfaces__action__ExecKachakaCommand_Goal__Sequence__fini(kachaka_interfaces__action__ExecKachakaCommand_Goal__Sequence * array);

/// Create array of action/ExecKachakaCommand messages.
/**
 * It allocates the memory for the array and calls
 * kachaka_interfaces__action__ExecKachakaCommand_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
kachaka_interfaces__action__ExecKachakaCommand_Goal__Sequence *
kachaka_interfaces__action__ExecKachakaCommand_Goal__Sequence__create(size_t size);

/// Destroy array of action/ExecKachakaCommand messages.
/**
 * It calls
 * kachaka_interfaces__action__ExecKachakaCommand_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
void
kachaka_interfaces__action__ExecKachakaCommand_Goal__Sequence__destroy(kachaka_interfaces__action__ExecKachakaCommand_Goal__Sequence * array);

/// Check for action/ExecKachakaCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
bool
kachaka_interfaces__action__ExecKachakaCommand_Goal__Sequence__are_equal(const kachaka_interfaces__action__ExecKachakaCommand_Goal__Sequence * lhs, const kachaka_interfaces__action__ExecKachakaCommand_Goal__Sequence * rhs);

/// Copy an array of action/ExecKachakaCommand messages.
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
kachaka_interfaces__action__ExecKachakaCommand_Goal__Sequence__copy(
  const kachaka_interfaces__action__ExecKachakaCommand_Goal__Sequence * input,
  kachaka_interfaces__action__ExecKachakaCommand_Goal__Sequence * output);

/// Initialize action/ExecKachakaCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * kachaka_interfaces__action__ExecKachakaCommand_Result
 * )) before or use
 * kachaka_interfaces__action__ExecKachakaCommand_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
bool
kachaka_interfaces__action__ExecKachakaCommand_Result__init(kachaka_interfaces__action__ExecKachakaCommand_Result * msg);

/// Finalize action/ExecKachakaCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
void
kachaka_interfaces__action__ExecKachakaCommand_Result__fini(kachaka_interfaces__action__ExecKachakaCommand_Result * msg);

/// Create action/ExecKachakaCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * kachaka_interfaces__action__ExecKachakaCommand_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
kachaka_interfaces__action__ExecKachakaCommand_Result *
kachaka_interfaces__action__ExecKachakaCommand_Result__create();

/// Destroy action/ExecKachakaCommand message.
/**
 * It calls
 * kachaka_interfaces__action__ExecKachakaCommand_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
void
kachaka_interfaces__action__ExecKachakaCommand_Result__destroy(kachaka_interfaces__action__ExecKachakaCommand_Result * msg);

/// Check for action/ExecKachakaCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
bool
kachaka_interfaces__action__ExecKachakaCommand_Result__are_equal(const kachaka_interfaces__action__ExecKachakaCommand_Result * lhs, const kachaka_interfaces__action__ExecKachakaCommand_Result * rhs);

/// Copy a action/ExecKachakaCommand message.
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
kachaka_interfaces__action__ExecKachakaCommand_Result__copy(
  const kachaka_interfaces__action__ExecKachakaCommand_Result * input,
  kachaka_interfaces__action__ExecKachakaCommand_Result * output);

/// Initialize array of action/ExecKachakaCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * kachaka_interfaces__action__ExecKachakaCommand_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
bool
kachaka_interfaces__action__ExecKachakaCommand_Result__Sequence__init(kachaka_interfaces__action__ExecKachakaCommand_Result__Sequence * array, size_t size);

/// Finalize array of action/ExecKachakaCommand messages.
/**
 * It calls
 * kachaka_interfaces__action__ExecKachakaCommand_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
void
kachaka_interfaces__action__ExecKachakaCommand_Result__Sequence__fini(kachaka_interfaces__action__ExecKachakaCommand_Result__Sequence * array);

/// Create array of action/ExecKachakaCommand messages.
/**
 * It allocates the memory for the array and calls
 * kachaka_interfaces__action__ExecKachakaCommand_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
kachaka_interfaces__action__ExecKachakaCommand_Result__Sequence *
kachaka_interfaces__action__ExecKachakaCommand_Result__Sequence__create(size_t size);

/// Destroy array of action/ExecKachakaCommand messages.
/**
 * It calls
 * kachaka_interfaces__action__ExecKachakaCommand_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
void
kachaka_interfaces__action__ExecKachakaCommand_Result__Sequence__destroy(kachaka_interfaces__action__ExecKachakaCommand_Result__Sequence * array);

/// Check for action/ExecKachakaCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
bool
kachaka_interfaces__action__ExecKachakaCommand_Result__Sequence__are_equal(const kachaka_interfaces__action__ExecKachakaCommand_Result__Sequence * lhs, const kachaka_interfaces__action__ExecKachakaCommand_Result__Sequence * rhs);

/// Copy an array of action/ExecKachakaCommand messages.
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
kachaka_interfaces__action__ExecKachakaCommand_Result__Sequence__copy(
  const kachaka_interfaces__action__ExecKachakaCommand_Result__Sequence * input,
  kachaka_interfaces__action__ExecKachakaCommand_Result__Sequence * output);

/// Initialize action/ExecKachakaCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * kachaka_interfaces__action__ExecKachakaCommand_Feedback
 * )) before or use
 * kachaka_interfaces__action__ExecKachakaCommand_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
bool
kachaka_interfaces__action__ExecKachakaCommand_Feedback__init(kachaka_interfaces__action__ExecKachakaCommand_Feedback * msg);

/// Finalize action/ExecKachakaCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
void
kachaka_interfaces__action__ExecKachakaCommand_Feedback__fini(kachaka_interfaces__action__ExecKachakaCommand_Feedback * msg);

/// Create action/ExecKachakaCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * kachaka_interfaces__action__ExecKachakaCommand_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
kachaka_interfaces__action__ExecKachakaCommand_Feedback *
kachaka_interfaces__action__ExecKachakaCommand_Feedback__create();

/// Destroy action/ExecKachakaCommand message.
/**
 * It calls
 * kachaka_interfaces__action__ExecKachakaCommand_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
void
kachaka_interfaces__action__ExecKachakaCommand_Feedback__destroy(kachaka_interfaces__action__ExecKachakaCommand_Feedback * msg);

/// Check for action/ExecKachakaCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
bool
kachaka_interfaces__action__ExecKachakaCommand_Feedback__are_equal(const kachaka_interfaces__action__ExecKachakaCommand_Feedback * lhs, const kachaka_interfaces__action__ExecKachakaCommand_Feedback * rhs);

/// Copy a action/ExecKachakaCommand message.
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
kachaka_interfaces__action__ExecKachakaCommand_Feedback__copy(
  const kachaka_interfaces__action__ExecKachakaCommand_Feedback * input,
  kachaka_interfaces__action__ExecKachakaCommand_Feedback * output);

/// Initialize array of action/ExecKachakaCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * kachaka_interfaces__action__ExecKachakaCommand_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
bool
kachaka_interfaces__action__ExecKachakaCommand_Feedback__Sequence__init(kachaka_interfaces__action__ExecKachakaCommand_Feedback__Sequence * array, size_t size);

/// Finalize array of action/ExecKachakaCommand messages.
/**
 * It calls
 * kachaka_interfaces__action__ExecKachakaCommand_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
void
kachaka_interfaces__action__ExecKachakaCommand_Feedback__Sequence__fini(kachaka_interfaces__action__ExecKachakaCommand_Feedback__Sequence * array);

/// Create array of action/ExecKachakaCommand messages.
/**
 * It allocates the memory for the array and calls
 * kachaka_interfaces__action__ExecKachakaCommand_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
kachaka_interfaces__action__ExecKachakaCommand_Feedback__Sequence *
kachaka_interfaces__action__ExecKachakaCommand_Feedback__Sequence__create(size_t size);

/// Destroy array of action/ExecKachakaCommand messages.
/**
 * It calls
 * kachaka_interfaces__action__ExecKachakaCommand_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
void
kachaka_interfaces__action__ExecKachakaCommand_Feedback__Sequence__destroy(kachaka_interfaces__action__ExecKachakaCommand_Feedback__Sequence * array);

/// Check for action/ExecKachakaCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
bool
kachaka_interfaces__action__ExecKachakaCommand_Feedback__Sequence__are_equal(const kachaka_interfaces__action__ExecKachakaCommand_Feedback__Sequence * lhs, const kachaka_interfaces__action__ExecKachakaCommand_Feedback__Sequence * rhs);

/// Copy an array of action/ExecKachakaCommand messages.
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
kachaka_interfaces__action__ExecKachakaCommand_Feedback__Sequence__copy(
  const kachaka_interfaces__action__ExecKachakaCommand_Feedback__Sequence * input,
  kachaka_interfaces__action__ExecKachakaCommand_Feedback__Sequence * output);

/// Initialize action/ExecKachakaCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request
 * )) before or use
 * kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
bool
kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request__init(kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request * msg);

/// Finalize action/ExecKachakaCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
void
kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request__fini(kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request * msg);

/// Create action/ExecKachakaCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request *
kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request__create();

/// Destroy action/ExecKachakaCommand message.
/**
 * It calls
 * kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
void
kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request__destroy(kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request * msg);

/// Check for action/ExecKachakaCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
bool
kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request__are_equal(const kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request * lhs, const kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request * rhs);

/// Copy a action/ExecKachakaCommand message.
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
kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request__copy(
  const kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request * input,
  kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request * output);

/// Initialize array of action/ExecKachakaCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
bool
kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request__Sequence__init(kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/ExecKachakaCommand messages.
/**
 * It calls
 * kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
void
kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request__Sequence__fini(kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request__Sequence * array);

/// Create array of action/ExecKachakaCommand messages.
/**
 * It allocates the memory for the array and calls
 * kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request__Sequence *
kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/ExecKachakaCommand messages.
/**
 * It calls
 * kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
void
kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request__Sequence__destroy(kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request__Sequence * array);

/// Check for action/ExecKachakaCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
bool
kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request__Sequence__are_equal(const kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request__Sequence * lhs, const kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/ExecKachakaCommand messages.
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
kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request__Sequence__copy(
  const kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request__Sequence * input,
  kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request__Sequence * output);

/// Initialize action/ExecKachakaCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response
 * )) before or use
 * kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
bool
kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response__init(kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response * msg);

/// Finalize action/ExecKachakaCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
void
kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response__fini(kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response * msg);

/// Create action/ExecKachakaCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response *
kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response__create();

/// Destroy action/ExecKachakaCommand message.
/**
 * It calls
 * kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
void
kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response__destroy(kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response * msg);

/// Check for action/ExecKachakaCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
bool
kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response__are_equal(const kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response * lhs, const kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response * rhs);

/// Copy a action/ExecKachakaCommand message.
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
kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response__copy(
  const kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response * input,
  kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response * output);

/// Initialize array of action/ExecKachakaCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
bool
kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response__Sequence__init(kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/ExecKachakaCommand messages.
/**
 * It calls
 * kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
void
kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response__Sequence__fini(kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response__Sequence * array);

/// Create array of action/ExecKachakaCommand messages.
/**
 * It allocates the memory for the array and calls
 * kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response__Sequence *
kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/ExecKachakaCommand messages.
/**
 * It calls
 * kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
void
kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response__Sequence__destroy(kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response__Sequence * array);

/// Check for action/ExecKachakaCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
bool
kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response__Sequence__are_equal(const kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response__Sequence * lhs, const kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/ExecKachakaCommand messages.
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
kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response__Sequence__copy(
  const kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response__Sequence * input,
  kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response__Sequence * output);

/// Initialize action/ExecKachakaCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request
 * )) before or use
 * kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
bool
kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request__init(kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request * msg);

/// Finalize action/ExecKachakaCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
void
kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request__fini(kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request * msg);

/// Create action/ExecKachakaCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request *
kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request__create();

/// Destroy action/ExecKachakaCommand message.
/**
 * It calls
 * kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
void
kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request__destroy(kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request * msg);

/// Check for action/ExecKachakaCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
bool
kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request__are_equal(const kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request * lhs, const kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request * rhs);

/// Copy a action/ExecKachakaCommand message.
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
kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request__copy(
  const kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request * input,
  kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request * output);

/// Initialize array of action/ExecKachakaCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
bool
kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request__Sequence__init(kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/ExecKachakaCommand messages.
/**
 * It calls
 * kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
void
kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request__Sequence__fini(kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request__Sequence * array);

/// Create array of action/ExecKachakaCommand messages.
/**
 * It allocates the memory for the array and calls
 * kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request__Sequence *
kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/ExecKachakaCommand messages.
/**
 * It calls
 * kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
void
kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request__Sequence__destroy(kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request__Sequence * array);

/// Check for action/ExecKachakaCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
bool
kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request__Sequence__are_equal(const kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request__Sequence * lhs, const kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request__Sequence * rhs);

/// Copy an array of action/ExecKachakaCommand messages.
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
kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request__Sequence__copy(
  const kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request__Sequence * input,
  kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request__Sequence * output);

/// Initialize action/ExecKachakaCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response
 * )) before or use
 * kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
bool
kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response__init(kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response * msg);

/// Finalize action/ExecKachakaCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
void
kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response__fini(kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response * msg);

/// Create action/ExecKachakaCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response *
kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response__create();

/// Destroy action/ExecKachakaCommand message.
/**
 * It calls
 * kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
void
kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response__destroy(kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response * msg);

/// Check for action/ExecKachakaCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
bool
kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response__are_equal(const kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response * lhs, const kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response * rhs);

/// Copy a action/ExecKachakaCommand message.
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
kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response__copy(
  const kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response * input,
  kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response * output);

/// Initialize array of action/ExecKachakaCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
bool
kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response__Sequence__init(kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/ExecKachakaCommand messages.
/**
 * It calls
 * kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
void
kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response__Sequence__fini(kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response__Sequence * array);

/// Create array of action/ExecKachakaCommand messages.
/**
 * It allocates the memory for the array and calls
 * kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response__Sequence *
kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/ExecKachakaCommand messages.
/**
 * It calls
 * kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
void
kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response__Sequence__destroy(kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response__Sequence * array);

/// Check for action/ExecKachakaCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
bool
kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response__Sequence__are_equal(const kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response__Sequence * lhs, const kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response__Sequence * rhs);

/// Copy an array of action/ExecKachakaCommand messages.
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
kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response__Sequence__copy(
  const kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response__Sequence * input,
  kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response__Sequence * output);

/// Initialize action/ExecKachakaCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage
 * )) before or use
 * kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
bool
kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage__init(kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage * msg);

/// Finalize action/ExecKachakaCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
void
kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage__fini(kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage * msg);

/// Create action/ExecKachakaCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage *
kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage__create();

/// Destroy action/ExecKachakaCommand message.
/**
 * It calls
 * kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
void
kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage__destroy(kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage * msg);

/// Check for action/ExecKachakaCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
bool
kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage__are_equal(const kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage * lhs, const kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage * rhs);

/// Copy a action/ExecKachakaCommand message.
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
kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage__copy(
  const kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage * input,
  kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage * output);

/// Initialize array of action/ExecKachakaCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
bool
kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage__Sequence__init(kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/ExecKachakaCommand messages.
/**
 * It calls
 * kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
void
kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage__Sequence__fini(kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage__Sequence * array);

/// Create array of action/ExecKachakaCommand messages.
/**
 * It allocates the memory for the array and calls
 * kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage__Sequence *
kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/ExecKachakaCommand messages.
/**
 * It calls
 * kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
void
kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage__Sequence__destroy(kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage__Sequence * array);

/// Check for action/ExecKachakaCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kachaka_interfaces
bool
kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage__Sequence__are_equal(const kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage__Sequence * lhs, const kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/ExecKachakaCommand messages.
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
kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage__Sequence__copy(
  const kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage__Sequence * input,
  kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // KACHAKA_INTERFACES__ACTION__DETAIL__EXEC_KACHAKA_COMMAND__FUNCTIONS_H_
