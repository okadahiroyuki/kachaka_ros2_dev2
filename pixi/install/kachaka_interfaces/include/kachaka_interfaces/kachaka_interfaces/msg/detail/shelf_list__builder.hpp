// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kachaka_interfaces:msg/ShelfList.idl
// generated code does not contain a copyright notice

#ifndef KACHAKA_INTERFACES__MSG__DETAIL__SHELF_LIST__BUILDER_HPP_
#define KACHAKA_INTERFACES__MSG__DETAIL__SHELF_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "kachaka_interfaces/msg/detail/shelf_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace kachaka_interfaces
{

namespace msg
{

namespace builder
{

class Init_ShelfList_shelves
{
public:
  Init_ShelfList_shelves()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::kachaka_interfaces::msg::ShelfList shelves(::kachaka_interfaces::msg::ShelfList::_shelves_type arg)
  {
    msg_.shelves = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kachaka_interfaces::msg::ShelfList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::kachaka_interfaces::msg::ShelfList>()
{
  return kachaka_interfaces::msg::builder::Init_ShelfList_shelves();
}

}  // namespace kachaka_interfaces

#endif  // KACHAKA_INTERFACES__MSG__DETAIL__SHELF_LIST__BUILDER_HPP_
