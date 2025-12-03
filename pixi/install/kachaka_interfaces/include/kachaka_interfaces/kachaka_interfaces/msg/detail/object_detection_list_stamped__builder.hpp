// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kachaka_interfaces:msg/ObjectDetectionListStamped.idl
// generated code does not contain a copyright notice

#ifndef KACHAKA_INTERFACES__MSG__DETAIL__OBJECT_DETECTION_LIST_STAMPED__BUILDER_HPP_
#define KACHAKA_INTERFACES__MSG__DETAIL__OBJECT_DETECTION_LIST_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "kachaka_interfaces/msg/detail/object_detection_list_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace kachaka_interfaces
{

namespace msg
{

namespace builder
{

class Init_ObjectDetectionListStamped_detection
{
public:
  explicit Init_ObjectDetectionListStamped_detection(::kachaka_interfaces::msg::ObjectDetectionListStamped & msg)
  : msg_(msg)
  {}
  ::kachaka_interfaces::msg::ObjectDetectionListStamped detection(::kachaka_interfaces::msg::ObjectDetectionListStamped::_detection_type arg)
  {
    msg_.detection = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kachaka_interfaces::msg::ObjectDetectionListStamped msg_;
};

class Init_ObjectDetectionListStamped_header
{
public:
  Init_ObjectDetectionListStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjectDetectionListStamped_detection header(::kachaka_interfaces::msg::ObjectDetectionListStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ObjectDetectionListStamped_detection(msg_);
  }

private:
  ::kachaka_interfaces::msg::ObjectDetectionListStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::kachaka_interfaces::msg::ObjectDetectionListStamped>()
{
  return kachaka_interfaces::msg::builder::Init_ObjectDetectionListStamped_header();
}

}  // namespace kachaka_interfaces

#endif  // KACHAKA_INTERFACES__MSG__DETAIL__OBJECT_DETECTION_LIST_STAMPED__BUILDER_HPP_
