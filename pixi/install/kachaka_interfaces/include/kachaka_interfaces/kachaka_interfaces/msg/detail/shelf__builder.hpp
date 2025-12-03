// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kachaka_interfaces:msg/Shelf.idl
// generated code does not contain a copyright notice

#ifndef KACHAKA_INTERFACES__MSG__DETAIL__SHELF__BUILDER_HPP_
#define KACHAKA_INTERFACES__MSG__DETAIL__SHELF__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "kachaka_interfaces/msg/detail/shelf__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace kachaka_interfaces
{

namespace msg
{

namespace builder
{

class Init_Shelf_speed_mode
{
public:
  explicit Init_Shelf_speed_mode(::kachaka_interfaces::msg::Shelf & msg)
  : msg_(msg)
  {}
  ::kachaka_interfaces::msg::Shelf speed_mode(::kachaka_interfaces::msg::Shelf::_speed_mode_type arg)
  {
    msg_.speed_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kachaka_interfaces::msg::Shelf msg_;
};

class Init_Shelf_home_location_id
{
public:
  explicit Init_Shelf_home_location_id(::kachaka_interfaces::msg::Shelf & msg)
  : msg_(msg)
  {}
  Init_Shelf_speed_mode home_location_id(::kachaka_interfaces::msg::Shelf::_home_location_id_type arg)
  {
    msg_.home_location_id = std::move(arg);
    return Init_Shelf_speed_mode(msg_);
  }

private:
  ::kachaka_interfaces::msg::Shelf msg_;
};

class Init_Shelf_size
{
public:
  explicit Init_Shelf_size(::kachaka_interfaces::msg::Shelf & msg)
  : msg_(msg)
  {}
  Init_Shelf_home_location_id size(::kachaka_interfaces::msg::Shelf::_size_type arg)
  {
    msg_.size = std::move(arg);
    return Init_Shelf_home_location_id(msg_);
  }

private:
  ::kachaka_interfaces::msg::Shelf msg_;
};

class Init_Shelf_pose
{
public:
  explicit Init_Shelf_pose(::kachaka_interfaces::msg::Shelf & msg)
  : msg_(msg)
  {}
  Init_Shelf_size pose(::kachaka_interfaces::msg::Shelf::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_Shelf_size(msg_);
  }

private:
  ::kachaka_interfaces::msg::Shelf msg_;
};

class Init_Shelf_name
{
public:
  explicit Init_Shelf_name(::kachaka_interfaces::msg::Shelf & msg)
  : msg_(msg)
  {}
  Init_Shelf_pose name(::kachaka_interfaces::msg::Shelf::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Shelf_pose(msg_);
  }

private:
  ::kachaka_interfaces::msg::Shelf msg_;
};

class Init_Shelf_id
{
public:
  Init_Shelf_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Shelf_name id(::kachaka_interfaces::msg::Shelf::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Shelf_name(msg_);
  }

private:
  ::kachaka_interfaces::msg::Shelf msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::kachaka_interfaces::msg::Shelf>()
{
  return kachaka_interfaces::msg::builder::Init_Shelf_id();
}

}  // namespace kachaka_interfaces

#endif  // KACHAKA_INTERFACES__MSG__DETAIL__SHELF__BUILDER_HPP_
