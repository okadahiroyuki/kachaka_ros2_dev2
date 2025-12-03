// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kachaka_interfaces:msg/ObjectDetectionListStamped.idl
// generated code does not contain a copyright notice

#ifndef KACHAKA_INTERFACES__MSG__DETAIL__OBJECT_DETECTION_LIST_STAMPED__TRAITS_HPP_
#define KACHAKA_INTERFACES__MSG__DETAIL__OBJECT_DETECTION_LIST_STAMPED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "kachaka_interfaces/msg/detail/object_detection_list_stamped__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'detection'
#include "kachaka_interfaces/msg/detail/object_detection__traits.hpp"

namespace kachaka_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ObjectDetectionListStamped & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: detection
  {
    if (msg.detection.size() == 0) {
      out << "detection: []";
    } else {
      out << "detection: [";
      size_t pending_items = msg.detection.size();
      for (auto item : msg.detection) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ObjectDetectionListStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: detection
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.detection.size() == 0) {
      out << "detection: []\n";
    } else {
      out << "detection:\n";
      for (auto item : msg.detection) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ObjectDetectionListStamped & msg, bool use_flow_style = false)
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
  const kachaka_interfaces::msg::ObjectDetectionListStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  kachaka_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kachaka_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const kachaka_interfaces::msg::ObjectDetectionListStamped & msg)
{
  return kachaka_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<kachaka_interfaces::msg::ObjectDetectionListStamped>()
{
  return "kachaka_interfaces::msg::ObjectDetectionListStamped";
}

template<>
inline const char * name<kachaka_interfaces::msg::ObjectDetectionListStamped>()
{
  return "kachaka_interfaces/msg/ObjectDetectionListStamped";
}

template<>
struct has_fixed_size<kachaka_interfaces::msg::ObjectDetectionListStamped>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<kachaka_interfaces::msg::ObjectDetectionListStamped>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<kachaka_interfaces::msg::ObjectDetectionListStamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // KACHAKA_INTERFACES__MSG__DETAIL__OBJECT_DETECTION_LIST_STAMPED__TRAITS_HPP_
