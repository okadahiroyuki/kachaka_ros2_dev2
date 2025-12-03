// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kachaka_interfaces:msg/KachakaCommand.idl
// generated code does not contain a copyright notice

#ifndef KACHAKA_INTERFACES__MSG__DETAIL__KACHAKA_COMMAND__TRAITS_HPP_
#define KACHAKA_INTERFACES__MSG__DETAIL__KACHAKA_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "kachaka_interfaces/msg/detail/kachaka_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace kachaka_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const KachakaCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: command_type
  {
    out << "command_type: ";
    rosidl_generator_traits::value_to_yaml(msg.command_type, out);
    out << ", ";
  }

  // member: move_shelf_command_target_shelf_id
  {
    out << "move_shelf_command_target_shelf_id: ";
    rosidl_generator_traits::value_to_yaml(msg.move_shelf_command_target_shelf_id, out);
    out << ", ";
  }

  // member: move_shelf_command_destination_location_id
  {
    out << "move_shelf_command_destination_location_id: ";
    rosidl_generator_traits::value_to_yaml(msg.move_shelf_command_destination_location_id, out);
    out << ", ";
  }

  // member: move_shelf_command_undock_on_destination
  {
    out << "move_shelf_command_undock_on_destination: ";
    rosidl_generator_traits::value_to_yaml(msg.move_shelf_command_undock_on_destination, out);
    out << ", ";
  }

  // member: return_shelf_command_target_shelf_id
  {
    out << "return_shelf_command_target_shelf_id: ";
    rosidl_generator_traits::value_to_yaml(msg.return_shelf_command_target_shelf_id, out);
    out << ", ";
  }

  // member: undock_shelf_command_target_shelf_id
  {
    out << "undock_shelf_command_target_shelf_id: ";
    rosidl_generator_traits::value_to_yaml(msg.undock_shelf_command_target_shelf_id, out);
    out << ", ";
  }

  // member: move_to_location_command_target_location_id
  {
    out << "move_to_location_command_target_location_id: ";
    rosidl_generator_traits::value_to_yaml(msg.move_to_location_command_target_location_id, out);
    out << ", ";
  }

  // member: return_home_command_silent
  {
    out << "return_home_command_silent: ";
    rosidl_generator_traits::value_to_yaml(msg.return_home_command_silent, out);
    out << ", ";
  }

  // member: speak_command_text
  {
    out << "speak_command_text: ";
    rosidl_generator_traits::value_to_yaml(msg.speak_command_text, out);
    out << ", ";
  }

  // member: move_to_pose_command_x
  {
    out << "move_to_pose_command_x: ";
    rosidl_generator_traits::value_to_yaml(msg.move_to_pose_command_x, out);
    out << ", ";
  }

  // member: move_to_pose_command_y
  {
    out << "move_to_pose_command_y: ";
    rosidl_generator_traits::value_to_yaml(msg.move_to_pose_command_y, out);
    out << ", ";
  }

  // member: move_to_pose_command_yaw
  {
    out << "move_to_pose_command_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.move_to_pose_command_yaw, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const KachakaCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: command_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command_type: ";
    rosidl_generator_traits::value_to_yaml(msg.command_type, out);
    out << "\n";
  }

  // member: move_shelf_command_target_shelf_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "move_shelf_command_target_shelf_id: ";
    rosidl_generator_traits::value_to_yaml(msg.move_shelf_command_target_shelf_id, out);
    out << "\n";
  }

  // member: move_shelf_command_destination_location_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "move_shelf_command_destination_location_id: ";
    rosidl_generator_traits::value_to_yaml(msg.move_shelf_command_destination_location_id, out);
    out << "\n";
  }

  // member: move_shelf_command_undock_on_destination
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "move_shelf_command_undock_on_destination: ";
    rosidl_generator_traits::value_to_yaml(msg.move_shelf_command_undock_on_destination, out);
    out << "\n";
  }

  // member: return_shelf_command_target_shelf_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "return_shelf_command_target_shelf_id: ";
    rosidl_generator_traits::value_to_yaml(msg.return_shelf_command_target_shelf_id, out);
    out << "\n";
  }

  // member: undock_shelf_command_target_shelf_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "undock_shelf_command_target_shelf_id: ";
    rosidl_generator_traits::value_to_yaml(msg.undock_shelf_command_target_shelf_id, out);
    out << "\n";
  }

  // member: move_to_location_command_target_location_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "move_to_location_command_target_location_id: ";
    rosidl_generator_traits::value_to_yaml(msg.move_to_location_command_target_location_id, out);
    out << "\n";
  }

  // member: return_home_command_silent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "return_home_command_silent: ";
    rosidl_generator_traits::value_to_yaml(msg.return_home_command_silent, out);
    out << "\n";
  }

  // member: speak_command_text
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speak_command_text: ";
    rosidl_generator_traits::value_to_yaml(msg.speak_command_text, out);
    out << "\n";
  }

  // member: move_to_pose_command_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "move_to_pose_command_x: ";
    rosidl_generator_traits::value_to_yaml(msg.move_to_pose_command_x, out);
    out << "\n";
  }

  // member: move_to_pose_command_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "move_to_pose_command_y: ";
    rosidl_generator_traits::value_to_yaml(msg.move_to_pose_command_y, out);
    out << "\n";
  }

  // member: move_to_pose_command_yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "move_to_pose_command_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.move_to_pose_command_yaw, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const KachakaCommand & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace kachaka_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use kachaka_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const kachaka_interfaces::msg::KachakaCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  kachaka_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kachaka_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const kachaka_interfaces::msg::KachakaCommand & msg)
{
  return kachaka_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<kachaka_interfaces::msg::KachakaCommand>()
{
  return "kachaka_interfaces::msg::KachakaCommand";
}

template<>
inline const char * name<kachaka_interfaces::msg::KachakaCommand>()
{
  return "kachaka_interfaces/msg/KachakaCommand";
}

template<>
struct has_fixed_size<kachaka_interfaces::msg::KachakaCommand>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<kachaka_interfaces::msg::KachakaCommand>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<kachaka_interfaces::msg::KachakaCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // KACHAKA_INTERFACES__MSG__DETAIL__KACHAKA_COMMAND__TRAITS_HPP_
