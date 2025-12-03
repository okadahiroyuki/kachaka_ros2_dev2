// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kachaka_interfaces:msg/KachakaCommand.idl
// generated code does not contain a copyright notice

#ifndef KACHAKA_INTERFACES__MSG__DETAIL__KACHAKA_COMMAND__STRUCT_H_
#define KACHAKA_INTERFACES__MSG__DETAIL__KACHAKA_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'COMMAND_TYPE_OTHER'.
enum
{
  kachaka_interfaces__msg__KachakaCommand__COMMAND_TYPE_OTHER = 0
};

/// Constant 'MOVE_SHELF_COMMAND'.
enum
{
  kachaka_interfaces__msg__KachakaCommand__MOVE_SHELF_COMMAND = 1
};

/// Constant 'RETURN_SHELF_COMMAND'.
enum
{
  kachaka_interfaces__msg__KachakaCommand__RETURN_SHELF_COMMAND = 2
};

/// Constant 'UNDOCK_SHELF_COMMAND'.
enum
{
  kachaka_interfaces__msg__KachakaCommand__UNDOCK_SHELF_COMMAND = 5
};

/// Constant 'MOVE_TO_LOCATION_COMMAND'.
enum
{
  kachaka_interfaces__msg__KachakaCommand__MOVE_TO_LOCATION_COMMAND = 7
};

/// Constant 'RETURN_HOME_COMMAND'.
enum
{
  kachaka_interfaces__msg__KachakaCommand__RETURN_HOME_COMMAND = 8
};

/// Constant 'DOCK_SHELF_COMMAND'.
enum
{
  kachaka_interfaces__msg__KachakaCommand__DOCK_SHELF_COMMAND = 9
};

/// Constant 'SPEAK_COMMAND'.
enum
{
  kachaka_interfaces__msg__KachakaCommand__SPEAK_COMMAND = 12
};

/// Constant 'MOVE_TO_POSE_COMMAND'.
enum
{
  kachaka_interfaces__msg__KachakaCommand__MOVE_TO_POSE_COMMAND = 13
};

// Include directives for member types
// Member 'move_shelf_command_target_shelf_id'
// Member 'move_shelf_command_destination_location_id'
// Member 'return_shelf_command_target_shelf_id'
// Member 'undock_shelf_command_target_shelf_id'
// Member 'move_to_location_command_target_location_id'
// Member 'speak_command_text'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/KachakaCommand in the package kachaka_interfaces.
typedef struct kachaka_interfaces__msg__KachakaCommand
{
  uint8_t command_type;
  /// NOTE: only used for MOVE_SHELF_COMMAND
  rosidl_runtime_c__String move_shelf_command_target_shelf_id;
  rosidl_runtime_c__String move_shelf_command_destination_location_id;
  bool move_shelf_command_undock_on_destination;
  /// NOTE: only used for RETURN_SHELF_COMMAND
  rosidl_runtime_c__String return_shelf_command_target_shelf_id;
  /// NOTE: only used for UNDOCK_SHELF_COMMAND
  rosidl_runtime_c__String undock_shelf_command_target_shelf_id;
  /// NOTE: only used for MOVE_TO_LOCATION_COMMAND
  rosidl_runtime_c__String move_to_location_command_target_location_id;
  /// NOTE: only used for RETURN_HOME_COMMAND
  bool return_home_command_silent;
  /// NOTE: only used for SPEAK_COMMAND
  rosidl_runtime_c__String speak_command_text;
  /// NOTE: only used for MOVE_TO_POSE_COMMAND
  double move_to_pose_command_x;
  double move_to_pose_command_y;
  double move_to_pose_command_yaw;
} kachaka_interfaces__msg__KachakaCommand;

// Struct for a sequence of kachaka_interfaces__msg__KachakaCommand.
typedef struct kachaka_interfaces__msg__KachakaCommand__Sequence
{
  kachaka_interfaces__msg__KachakaCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kachaka_interfaces__msg__KachakaCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KACHAKA_INTERFACES__MSG__DETAIL__KACHAKA_COMMAND__STRUCT_H_
