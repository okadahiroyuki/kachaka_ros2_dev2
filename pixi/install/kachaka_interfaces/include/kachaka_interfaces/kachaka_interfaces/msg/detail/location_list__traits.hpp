// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kachaka_interfaces:msg/LocationList.idl
// generated code does not contain a copyright notice

#ifndef KACHAKA_INTERFACES__MSG__DETAIL__LOCATION_LIST__TRAITS_HPP_
#define KACHAKA_INTERFACES__MSG__DETAIL__LOCATION_LIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "kachaka_interfaces/msg/detail/location_list__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'locations'
#include "kachaka_interfaces/msg/detail/location__traits.hpp"

namespace kachaka_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const LocationList & msg,
  std::ostream & out)
{
  out << "{";
  // member: locations
  {
    if (msg.locations.size() == 0) {
      out << "locations: []";
    } else {
      out << "locations: [";
      size_t pending_items = msg.locations.size();
      for (auto item : msg.locations) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: default_location_id
  {
    out << "default_location_id: ";
    rosidl_generator_traits::value_to_yaml(msg.default_location_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LocationList & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: locations
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.locations.size() == 0) {
      out << "locations: []\n";
    } else {
      out << "locations:\n";
      for (auto item : msg.locations) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: default_location_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "default_location_id: ";
    rosidl_generator_traits::value_to_yaml(msg.default_location_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LocationList & msg, bool use_flow_style = false)
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
  const kachaka_interfaces::msg::LocationList & msg,
  std::ostream & out, size_t indentation = 0)
{
  kachaka_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kachaka_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const kachaka_interfaces::msg::LocationList & msg)
{
  return kachaka_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<kachaka_interfaces::msg::LocationList>()
{
  return "kachaka_interfaces::msg::LocationList";
}

template<>
inline const char * name<kachaka_interfaces::msg::LocationList>()
{
  return "kachaka_interfaces/msg/LocationList";
}

template<>
struct has_fixed_size<kachaka_interfaces::msg::LocationList>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<kachaka_interfaces::msg::LocationList>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<kachaka_interfaces::msg::LocationList>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // KACHAKA_INTERFACES__MSG__DETAIL__LOCATION_LIST__TRAITS_HPP_
