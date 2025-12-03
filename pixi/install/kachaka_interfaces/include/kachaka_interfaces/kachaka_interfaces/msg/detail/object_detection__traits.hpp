// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kachaka_interfaces:msg/ObjectDetection.idl
// generated code does not contain a copyright notice

#ifndef KACHAKA_INTERFACES__MSG__DETAIL__OBJECT_DETECTION__TRAITS_HPP_
#define KACHAKA_INTERFACES__MSG__DETAIL__OBJECT_DETECTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "kachaka_interfaces/msg/detail/object_detection__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'roi'
#include "sensor_msgs/msg/detail/region_of_interest__traits.hpp"

namespace kachaka_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ObjectDetection & msg,
  std::ostream & out)
{
  out << "{";
  // member: label
  {
    out << "label: ";
    rosidl_generator_traits::value_to_yaml(msg.label, out);
    out << ", ";
  }

  // member: roi
  {
    out << "roi: ";
    to_flow_style_yaml(msg.roi, out);
    out << ", ";
  }

  // member: score
  {
    out << "score: ";
    rosidl_generator_traits::value_to_yaml(msg.score, out);
    out << ", ";
  }

  // member: distance_median
  {
    out << "distance_median: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_median, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ObjectDetection & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: label
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "label: ";
    rosidl_generator_traits::value_to_yaml(msg.label, out);
    out << "\n";
  }

  // member: roi
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roi:\n";
    to_block_style_yaml(msg.roi, out, indentation + 2);
  }

  // member: score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "score: ";
    rosidl_generator_traits::value_to_yaml(msg.score, out);
    out << "\n";
  }

  // member: distance_median
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_median: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_median, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ObjectDetection & msg, bool use_flow_style = false)
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
  const kachaka_interfaces::msg::ObjectDetection & msg,
  std::ostream & out, size_t indentation = 0)
{
  kachaka_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kachaka_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const kachaka_interfaces::msg::ObjectDetection & msg)
{
  return kachaka_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<kachaka_interfaces::msg::ObjectDetection>()
{
  return "kachaka_interfaces::msg::ObjectDetection";
}

template<>
inline const char * name<kachaka_interfaces::msg::ObjectDetection>()
{
  return "kachaka_interfaces/msg/ObjectDetection";
}

template<>
struct has_fixed_size<kachaka_interfaces::msg::ObjectDetection>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::RegionOfInterest>::value> {};

template<>
struct has_bounded_size<kachaka_interfaces::msg::ObjectDetection>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::RegionOfInterest>::value> {};

template<>
struct is_message<kachaka_interfaces::msg::ObjectDetection>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // KACHAKA_INTERFACES__MSG__DETAIL__OBJECT_DETECTION__TRAITS_HPP_
