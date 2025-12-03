// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kachaka_interfaces:msg/Location.idl
// generated code does not contain a copyright notice

#ifndef KACHAKA_INTERFACES__MSG__DETAIL__LOCATION__BUILDER_HPP_
#define KACHAKA_INTERFACES__MSG__DETAIL__LOCATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "kachaka_interfaces/msg/detail/location__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace kachaka_interfaces
{

namespace msg
{

namespace builder
{

class Init_Location_pose
{
public:
  explicit Init_Location_pose(::kachaka_interfaces::msg::Location & msg)
  : msg_(msg)
  {}
  ::kachaka_interfaces::msg::Location pose(::kachaka_interfaces::msg::Location::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kachaka_interfaces::msg::Location msg_;
};

class Init_Location_type
{
public:
  explicit Init_Location_type(::kachaka_interfaces::msg::Location & msg)
  : msg_(msg)
  {}
  Init_Location_pose type(::kachaka_interfaces::msg::Location::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_Location_pose(msg_);
  }

private:
  ::kachaka_interfaces::msg::Location msg_;
};

class Init_Location_name
{
public:
  explicit Init_Location_name(::kachaka_interfaces::msg::Location & msg)
  : msg_(msg)
  {}
  Init_Location_type name(::kachaka_interfaces::msg::Location::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Location_type(msg_);
  }

private:
  ::kachaka_interfaces::msg::Location msg_;
};

class Init_Location_id
{
public:
  Init_Location_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Location_name id(::kachaka_interfaces::msg::Location::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Location_name(msg_);
  }

private:
  ::kachaka_interfaces::msg::Location msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::kachaka_interfaces::msg::Location>()
{
  return kachaka_interfaces::msg::builder::Init_Location_id();
}

}  // namespace kachaka_interfaces

#endif  // KACHAKA_INTERFACES__MSG__DETAIL__LOCATION__BUILDER_HPP_
