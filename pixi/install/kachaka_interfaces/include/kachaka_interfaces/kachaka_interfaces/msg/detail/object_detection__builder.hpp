// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kachaka_interfaces:msg/ObjectDetection.idl
// generated code does not contain a copyright notice

#ifndef KACHAKA_INTERFACES__MSG__DETAIL__OBJECT_DETECTION__BUILDER_HPP_
#define KACHAKA_INTERFACES__MSG__DETAIL__OBJECT_DETECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "kachaka_interfaces/msg/detail/object_detection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace kachaka_interfaces
{

namespace msg
{

namespace builder
{

class Init_ObjectDetection_distance_median
{
public:
  explicit Init_ObjectDetection_distance_median(::kachaka_interfaces::msg::ObjectDetection & msg)
  : msg_(msg)
  {}
  ::kachaka_interfaces::msg::ObjectDetection distance_median(::kachaka_interfaces::msg::ObjectDetection::_distance_median_type arg)
  {
    msg_.distance_median = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kachaka_interfaces::msg::ObjectDetection msg_;
};

class Init_ObjectDetection_score
{
public:
  explicit Init_ObjectDetection_score(::kachaka_interfaces::msg::ObjectDetection & msg)
  : msg_(msg)
  {}
  Init_ObjectDetection_distance_median score(::kachaka_interfaces::msg::ObjectDetection::_score_type arg)
  {
    msg_.score = std::move(arg);
    return Init_ObjectDetection_distance_median(msg_);
  }

private:
  ::kachaka_interfaces::msg::ObjectDetection msg_;
};

class Init_ObjectDetection_roi
{
public:
  explicit Init_ObjectDetection_roi(::kachaka_interfaces::msg::ObjectDetection & msg)
  : msg_(msg)
  {}
  Init_ObjectDetection_score roi(::kachaka_interfaces::msg::ObjectDetection::_roi_type arg)
  {
    msg_.roi = std::move(arg);
    return Init_ObjectDetection_score(msg_);
  }

private:
  ::kachaka_interfaces::msg::ObjectDetection msg_;
};

class Init_ObjectDetection_label
{
public:
  Init_ObjectDetection_label()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjectDetection_roi label(::kachaka_interfaces::msg::ObjectDetection::_label_type arg)
  {
    msg_.label = std::move(arg);
    return Init_ObjectDetection_roi(msg_);
  }

private:
  ::kachaka_interfaces::msg::ObjectDetection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::kachaka_interfaces::msg::ObjectDetection>()
{
  return kachaka_interfaces::msg::builder::Init_ObjectDetection_label();
}

}  // namespace kachaka_interfaces

#endif  // KACHAKA_INTERFACES__MSG__DETAIL__OBJECT_DETECTION__BUILDER_HPP_
