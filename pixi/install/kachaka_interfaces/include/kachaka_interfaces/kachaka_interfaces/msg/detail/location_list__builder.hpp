// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kachaka_interfaces:msg/LocationList.idl
// generated code does not contain a copyright notice

#ifndef KACHAKA_INTERFACES__MSG__DETAIL__LOCATION_LIST__BUILDER_HPP_
#define KACHAKA_INTERFACES__MSG__DETAIL__LOCATION_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "kachaka_interfaces/msg/detail/location_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace kachaka_interfaces
{

namespace msg
{

namespace builder
{

class Init_LocationList_default_location_id
{
public:
  explicit Init_LocationList_default_location_id(::kachaka_interfaces::msg::LocationList & msg)
  : msg_(msg)
  {}
  ::kachaka_interfaces::msg::LocationList default_location_id(::kachaka_interfaces::msg::LocationList::_default_location_id_type arg)
  {
    msg_.default_location_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kachaka_interfaces::msg::LocationList msg_;
};

class Init_LocationList_locations
{
public:
  Init_LocationList_locations()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LocationList_default_location_id locations(::kachaka_interfaces::msg::LocationList::_locations_type arg)
  {
    msg_.locations = std::move(arg);
    return Init_LocationList_default_location_id(msg_);
  }

private:
  ::kachaka_interfaces::msg::LocationList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::kachaka_interfaces::msg::LocationList>()
{
  return kachaka_interfaces::msg::builder::Init_LocationList_locations();
}

}  // namespace kachaka_interfaces

#endif  // KACHAKA_INTERFACES__MSG__DETAIL__LOCATION_LIST__BUILDER_HPP_
