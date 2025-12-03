// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kachaka_interfaces:msg/ShelfSize.idl
// generated code does not contain a copyright notice

#ifndef KACHAKA_INTERFACES__MSG__DETAIL__SHELF_SIZE__BUILDER_HPP_
#define KACHAKA_INTERFACES__MSG__DETAIL__SHELF_SIZE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "kachaka_interfaces/msg/detail/shelf_size__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace kachaka_interfaces
{

namespace msg
{

namespace builder
{

class Init_ShelfSize_depth
{
public:
  explicit Init_ShelfSize_depth(::kachaka_interfaces::msg::ShelfSize & msg)
  : msg_(msg)
  {}
  ::kachaka_interfaces::msg::ShelfSize depth(::kachaka_interfaces::msg::ShelfSize::_depth_type arg)
  {
    msg_.depth = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kachaka_interfaces::msg::ShelfSize msg_;
};

class Init_ShelfSize_width
{
public:
  Init_ShelfSize_width()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ShelfSize_depth width(::kachaka_interfaces::msg::ShelfSize::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_ShelfSize_depth(msg_);
  }

private:
  ::kachaka_interfaces::msg::ShelfSize msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::kachaka_interfaces::msg::ShelfSize>()
{
  return kachaka_interfaces::msg::builder::Init_ShelfSize_width();
}

}  // namespace kachaka_interfaces

#endif  // KACHAKA_INTERFACES__MSG__DETAIL__SHELF_SIZE__BUILDER_HPP_
