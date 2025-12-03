// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kachaka_interfaces:msg/KachakaCommand.idl
// generated code does not contain a copyright notice

#ifndef KACHAKA_INTERFACES__MSG__DETAIL__KACHAKA_COMMAND__BUILDER_HPP_
#define KACHAKA_INTERFACES__MSG__DETAIL__KACHAKA_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "kachaka_interfaces/msg/detail/kachaka_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace kachaka_interfaces
{

namespace msg
{

namespace builder
{

class Init_KachakaCommand_move_to_pose_command_yaw
{
public:
  explicit Init_KachakaCommand_move_to_pose_command_yaw(::kachaka_interfaces::msg::KachakaCommand & msg)
  : msg_(msg)
  {}
  ::kachaka_interfaces::msg::KachakaCommand move_to_pose_command_yaw(::kachaka_interfaces::msg::KachakaCommand::_move_to_pose_command_yaw_type arg)
  {
    msg_.move_to_pose_command_yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kachaka_interfaces::msg::KachakaCommand msg_;
};

class Init_KachakaCommand_move_to_pose_command_y
{
public:
  explicit Init_KachakaCommand_move_to_pose_command_y(::kachaka_interfaces::msg::KachakaCommand & msg)
  : msg_(msg)
  {}
  Init_KachakaCommand_move_to_pose_command_yaw move_to_pose_command_y(::kachaka_interfaces::msg::KachakaCommand::_move_to_pose_command_y_type arg)
  {
    msg_.move_to_pose_command_y = std::move(arg);
    return Init_KachakaCommand_move_to_pose_command_yaw(msg_);
  }

private:
  ::kachaka_interfaces::msg::KachakaCommand msg_;
};

class Init_KachakaCommand_move_to_pose_command_x
{
public:
  explicit Init_KachakaCommand_move_to_pose_command_x(::kachaka_interfaces::msg::KachakaCommand & msg)
  : msg_(msg)
  {}
  Init_KachakaCommand_move_to_pose_command_y move_to_pose_command_x(::kachaka_interfaces::msg::KachakaCommand::_move_to_pose_command_x_type arg)
  {
    msg_.move_to_pose_command_x = std::move(arg);
    return Init_KachakaCommand_move_to_pose_command_y(msg_);
  }

private:
  ::kachaka_interfaces::msg::KachakaCommand msg_;
};

class Init_KachakaCommand_speak_command_text
{
public:
  explicit Init_KachakaCommand_speak_command_text(::kachaka_interfaces::msg::KachakaCommand & msg)
  : msg_(msg)
  {}
  Init_KachakaCommand_move_to_pose_command_x speak_command_text(::kachaka_interfaces::msg::KachakaCommand::_speak_command_text_type arg)
  {
    msg_.speak_command_text = std::move(arg);
    return Init_KachakaCommand_move_to_pose_command_x(msg_);
  }

private:
  ::kachaka_interfaces::msg::KachakaCommand msg_;
};

class Init_KachakaCommand_return_home_command_silent
{
public:
  explicit Init_KachakaCommand_return_home_command_silent(::kachaka_interfaces::msg::KachakaCommand & msg)
  : msg_(msg)
  {}
  Init_KachakaCommand_speak_command_text return_home_command_silent(::kachaka_interfaces::msg::KachakaCommand::_return_home_command_silent_type arg)
  {
    msg_.return_home_command_silent = std::move(arg);
    return Init_KachakaCommand_speak_command_text(msg_);
  }

private:
  ::kachaka_interfaces::msg::KachakaCommand msg_;
};

class Init_KachakaCommand_move_to_location_command_target_location_id
{
public:
  explicit Init_KachakaCommand_move_to_location_command_target_location_id(::kachaka_interfaces::msg::KachakaCommand & msg)
  : msg_(msg)
  {}
  Init_KachakaCommand_return_home_command_silent move_to_location_command_target_location_id(::kachaka_interfaces::msg::KachakaCommand::_move_to_location_command_target_location_id_type arg)
  {
    msg_.move_to_location_command_target_location_id = std::move(arg);
    return Init_KachakaCommand_return_home_command_silent(msg_);
  }

private:
  ::kachaka_interfaces::msg::KachakaCommand msg_;
};

class Init_KachakaCommand_undock_shelf_command_target_shelf_id
{
public:
  explicit Init_KachakaCommand_undock_shelf_command_target_shelf_id(::kachaka_interfaces::msg::KachakaCommand & msg)
  : msg_(msg)
  {}
  Init_KachakaCommand_move_to_location_command_target_location_id undock_shelf_command_target_shelf_id(::kachaka_interfaces::msg::KachakaCommand::_undock_shelf_command_target_shelf_id_type arg)
  {
    msg_.undock_shelf_command_target_shelf_id = std::move(arg);
    return Init_KachakaCommand_move_to_location_command_target_location_id(msg_);
  }

private:
  ::kachaka_interfaces::msg::KachakaCommand msg_;
};

class Init_KachakaCommand_return_shelf_command_target_shelf_id
{
public:
  explicit Init_KachakaCommand_return_shelf_command_target_shelf_id(::kachaka_interfaces::msg::KachakaCommand & msg)
  : msg_(msg)
  {}
  Init_KachakaCommand_undock_shelf_command_target_shelf_id return_shelf_command_target_shelf_id(::kachaka_interfaces::msg::KachakaCommand::_return_shelf_command_target_shelf_id_type arg)
  {
    msg_.return_shelf_command_target_shelf_id = std::move(arg);
    return Init_KachakaCommand_undock_shelf_command_target_shelf_id(msg_);
  }

private:
  ::kachaka_interfaces::msg::KachakaCommand msg_;
};

class Init_KachakaCommand_move_shelf_command_undock_on_destination
{
public:
  explicit Init_KachakaCommand_move_shelf_command_undock_on_destination(::kachaka_interfaces::msg::KachakaCommand & msg)
  : msg_(msg)
  {}
  Init_KachakaCommand_return_shelf_command_target_shelf_id move_shelf_command_undock_on_destination(::kachaka_interfaces::msg::KachakaCommand::_move_shelf_command_undock_on_destination_type arg)
  {
    msg_.move_shelf_command_undock_on_destination = std::move(arg);
    return Init_KachakaCommand_return_shelf_command_target_shelf_id(msg_);
  }

private:
  ::kachaka_interfaces::msg::KachakaCommand msg_;
};

class Init_KachakaCommand_move_shelf_command_destination_location_id
{
public:
  explicit Init_KachakaCommand_move_shelf_command_destination_location_id(::kachaka_interfaces::msg::KachakaCommand & msg)
  : msg_(msg)
  {}
  Init_KachakaCommand_move_shelf_command_undock_on_destination move_shelf_command_destination_location_id(::kachaka_interfaces::msg::KachakaCommand::_move_shelf_command_destination_location_id_type arg)
  {
    msg_.move_shelf_command_destination_location_id = std::move(arg);
    return Init_KachakaCommand_move_shelf_command_undock_on_destination(msg_);
  }

private:
  ::kachaka_interfaces::msg::KachakaCommand msg_;
};

class Init_KachakaCommand_move_shelf_command_target_shelf_id
{
public:
  explicit Init_KachakaCommand_move_shelf_command_target_shelf_id(::kachaka_interfaces::msg::KachakaCommand & msg)
  : msg_(msg)
  {}
  Init_KachakaCommand_move_shelf_command_destination_location_id move_shelf_command_target_shelf_id(::kachaka_interfaces::msg::KachakaCommand::_move_shelf_command_target_shelf_id_type arg)
  {
    msg_.move_shelf_command_target_shelf_id = std::move(arg);
    return Init_KachakaCommand_move_shelf_command_destination_location_id(msg_);
  }

private:
  ::kachaka_interfaces::msg::KachakaCommand msg_;
};

class Init_KachakaCommand_command_type
{
public:
  Init_KachakaCommand_command_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KachakaCommand_move_shelf_command_target_shelf_id command_type(::kachaka_interfaces::msg::KachakaCommand::_command_type_type arg)
  {
    msg_.command_type = std::move(arg);
    return Init_KachakaCommand_move_shelf_command_target_shelf_id(msg_);
  }

private:
  ::kachaka_interfaces::msg::KachakaCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::kachaka_interfaces::msg::KachakaCommand>()
{
  return kachaka_interfaces::msg::builder::Init_KachakaCommand_command_type();
}

}  // namespace kachaka_interfaces

#endif  // KACHAKA_INTERFACES__MSG__DETAIL__KACHAKA_COMMAND__BUILDER_HPP_
