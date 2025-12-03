// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kachaka_interfaces:msg/ShelfSize.idl
// generated code does not contain a copyright notice

#ifndef KACHAKA_INTERFACES__MSG__DETAIL__SHELF_SIZE__TRAITS_HPP_
#define KACHAKA_INTERFACES__MSG__DETAIL__SHELF_SIZE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "kachaka_interfaces/msg/detail/shelf_size__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace kachaka_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ShelfSize & msg,
  std::ostream & out)
{
  out << "{";
  // member: width
  {
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << ", ";
  }

  // member: depth
  {
    out << "depth: ";
    rosidl_generator_traits::value_to_yaml(msg.depth, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ShelfSize & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << "\n";
  }

  // member: depth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "depth: ";
    rosidl_generator_traits::value_to_yaml(msg.depth, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ShelfSize & msg, bool use_flow_style = false)
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
  const kachaka_interfaces::msg::ShelfSize & msg,
  std::ostream & out, size_t indentation = 0)
{
  kachaka_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kachaka_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const kachaka_interfaces::msg::ShelfSize & msg)
{
  return kachaka_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<kachaka_interfaces::msg::ShelfSize>()
{
  return "kachaka_interfaces::msg::ShelfSize";
}

template<>
inline const char * name<kachaka_interfaces::msg::ShelfSize>()
{
  return "kachaka_interfaces/msg/ShelfSize";
}

template<>
struct has_fixed_size<kachaka_interfaces::msg::ShelfSize>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<kachaka_interfaces::msg::ShelfSize>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<kachaka_interfaces::msg::ShelfSize>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // KACHAKA_INTERFACES__MSG__DETAIL__SHELF_SIZE__TRAITS_HPP_
