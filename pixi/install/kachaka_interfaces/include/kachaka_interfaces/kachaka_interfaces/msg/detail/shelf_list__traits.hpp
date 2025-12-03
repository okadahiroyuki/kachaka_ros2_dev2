// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kachaka_interfaces:msg/ShelfList.idl
// generated code does not contain a copyright notice

#ifndef KACHAKA_INTERFACES__MSG__DETAIL__SHELF_LIST__TRAITS_HPP_
#define KACHAKA_INTERFACES__MSG__DETAIL__SHELF_LIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "kachaka_interfaces/msg/detail/shelf_list__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'shelves'
#include "kachaka_interfaces/msg/detail/shelf__traits.hpp"

namespace kachaka_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ShelfList & msg,
  std::ostream & out)
{
  out << "{";
  // member: shelves
  {
    if (msg.shelves.size() == 0) {
      out << "shelves: []";
    } else {
      out << "shelves: [";
      size_t pending_items = msg.shelves.size();
      for (auto item : msg.shelves) {
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
  const ShelfList & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: shelves
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.shelves.size() == 0) {
      out << "shelves: []\n";
    } else {
      out << "shelves:\n";
      for (auto item : msg.shelves) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ShelfList & msg, bool use_flow_style = false)
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
  const kachaka_interfaces::msg::ShelfList & msg,
  std::ostream & out, size_t indentation = 0)
{
  kachaka_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kachaka_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const kachaka_interfaces::msg::ShelfList & msg)
{
  return kachaka_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<kachaka_interfaces::msg::ShelfList>()
{
  return "kachaka_interfaces::msg::ShelfList";
}

template<>
inline const char * name<kachaka_interfaces::msg::ShelfList>()
{
  return "kachaka_interfaces/msg/ShelfList";
}

template<>
struct has_fixed_size<kachaka_interfaces::msg::ShelfList>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<kachaka_interfaces::msg::ShelfList>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<kachaka_interfaces::msg::ShelfList>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // KACHAKA_INTERFACES__MSG__DETAIL__SHELF_LIST__TRAITS_HPP_
