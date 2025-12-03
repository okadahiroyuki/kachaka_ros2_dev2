// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kachaka_interfaces:msg/Shelf.idl
// generated code does not contain a copyright notice

#ifndef KACHAKA_INTERFACES__MSG__DETAIL__SHELF__TRAITS_HPP_
#define KACHAKA_INTERFACES__MSG__DETAIL__SHELF__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "kachaka_interfaces/msg/detail/shelf__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose2_d__traits.hpp"
// Member 'size'
#include "kachaka_interfaces/msg/detail/shelf_size__traits.hpp"

namespace kachaka_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Shelf & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: size
  {
    out << "size: ";
    to_flow_style_yaml(msg.size, out);
    out << ", ";
  }

  // member: home_location_id
  {
    out << "home_location_id: ";
    rosidl_generator_traits::value_to_yaml(msg.home_location_id, out);
    out << ", ";
  }

  // member: speed_mode
  {
    out << "speed_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_mode, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Shelf & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "size:\n";
    to_block_style_yaml(msg.size, out, indentation + 2);
  }

  // member: home_location_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "home_location_id: ";
    rosidl_generator_traits::value_to_yaml(msg.home_location_id, out);
    out << "\n";
  }

  // member: speed_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_mode, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Shelf & msg, bool use_flow_style = false)
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
  const kachaka_interfaces::msg::Shelf & msg,
  std::ostream & out, size_t indentation = 0)
{
  kachaka_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kachaka_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const kachaka_interfaces::msg::Shelf & msg)
{
  return kachaka_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<kachaka_interfaces::msg::Shelf>()
{
  return "kachaka_interfaces::msg::Shelf";
}

template<>
inline const char * name<kachaka_interfaces::msg::Shelf>()
{
  return "kachaka_interfaces/msg/Shelf";
}

template<>
struct has_fixed_size<kachaka_interfaces::msg::Shelf>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<kachaka_interfaces::msg::Shelf>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<kachaka_interfaces::msg::Shelf>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // KACHAKA_INTERFACES__MSG__DETAIL__SHELF__TRAITS_HPP_
