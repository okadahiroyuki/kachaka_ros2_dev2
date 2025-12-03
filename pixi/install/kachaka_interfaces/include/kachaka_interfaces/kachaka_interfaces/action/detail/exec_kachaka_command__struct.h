// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kachaka_interfaces:action/ExecKachakaCommand.idl
// generated code does not contain a copyright notice

#ifndef KACHAKA_INTERFACES__ACTION__DETAIL__EXEC_KACHAKA_COMMAND__STRUCT_H_
#define KACHAKA_INTERFACES__ACTION__DETAIL__EXEC_KACHAKA_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'kachaka_command'
#include "kachaka_interfaces/msg/detail/kachaka_command__struct.h"
// Member 'tts_on_success'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/ExecKachakaCommand in the package kachaka_interfaces.
typedef struct kachaka_interfaces__action__ExecKachakaCommand_Goal
{
  kachaka_interfaces__msg__KachakaCommand kachaka_command;
  bool cancel_all;
  rosidl_runtime_c__String tts_on_success;
} kachaka_interfaces__action__ExecKachakaCommand_Goal;

// Struct for a sequence of kachaka_interfaces__action__ExecKachakaCommand_Goal.
typedef struct kachaka_interfaces__action__ExecKachakaCommand_Goal__Sequence
{
  kachaka_interfaces__action__ExecKachakaCommand_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kachaka_interfaces__action__ExecKachakaCommand_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/ExecKachakaCommand in the package kachaka_interfaces.
typedef struct kachaka_interfaces__action__ExecKachakaCommand_Result
{
  bool success;
  int32_t error_code;
  rosidl_runtime_c__String message;
} kachaka_interfaces__action__ExecKachakaCommand_Result;

// Struct for a sequence of kachaka_interfaces__action__ExecKachakaCommand_Result.
typedef struct kachaka_interfaces__action__ExecKachakaCommand_Result__Sequence
{
  kachaka_interfaces__action__ExecKachakaCommand_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kachaka_interfaces__action__ExecKachakaCommand_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/ExecKachakaCommand in the package kachaka_interfaces.
typedef struct kachaka_interfaces__action__ExecKachakaCommand_Feedback
{
  uint8_t structure_needs_at_least_one_member;
} kachaka_interfaces__action__ExecKachakaCommand_Feedback;

// Struct for a sequence of kachaka_interfaces__action__ExecKachakaCommand_Feedback.
typedef struct kachaka_interfaces__action__ExecKachakaCommand_Feedback__Sequence
{
  kachaka_interfaces__action__ExecKachakaCommand_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kachaka_interfaces__action__ExecKachakaCommand_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "kachaka_interfaces/action/detail/exec_kachaka_command__struct.h"

/// Struct defined in action/ExecKachakaCommand in the package kachaka_interfaces.
typedef struct kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  kachaka_interfaces__action__ExecKachakaCommand_Goal goal;
} kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request;

// Struct for a sequence of kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request.
typedef struct kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request__Sequence
{
  kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/ExecKachakaCommand in the package kachaka_interfaces.
typedef struct kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response;

// Struct for a sequence of kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response.
typedef struct kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response__Sequence
{
  kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kachaka_interfaces__action__ExecKachakaCommand_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/ExecKachakaCommand in the package kachaka_interfaces.
typedef struct kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request;

// Struct for a sequence of kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request.
typedef struct kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request__Sequence
{
  kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kachaka_interfaces__action__ExecKachakaCommand_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "kachaka_interfaces/action/detail/exec_kachaka_command__struct.h"

/// Struct defined in action/ExecKachakaCommand in the package kachaka_interfaces.
typedef struct kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response
{
  int8_t status;
  kachaka_interfaces__action__ExecKachakaCommand_Result result;
} kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response;

// Struct for a sequence of kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response.
typedef struct kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response__Sequence
{
  kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kachaka_interfaces__action__ExecKachakaCommand_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "kachaka_interfaces/action/detail/exec_kachaka_command__struct.h"

/// Struct defined in action/ExecKachakaCommand in the package kachaka_interfaces.
typedef struct kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  kachaka_interfaces__action__ExecKachakaCommand_Feedback feedback;
} kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage;

// Struct for a sequence of kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage.
typedef struct kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage__Sequence
{
  kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kachaka_interfaces__action__ExecKachakaCommand_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KACHAKA_INTERFACES__ACTION__DETAIL__EXEC_KACHAKA_COMMAND__STRUCT_H_
