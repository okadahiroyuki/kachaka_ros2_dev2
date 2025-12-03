// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from kachaka_interfaces:msg/ObjectDetection.idl
// generated code does not contain a copyright notice

#ifndef KACHAKA_INTERFACES__MSG__DETAIL__OBJECT_DETECTION__STRUCT_HPP_
#define KACHAKA_INTERFACES__MSG__DETAIL__OBJECT_DETECTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'roi'
#include "sensor_msgs/msg/detail/region_of_interest__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__kachaka_interfaces__msg__ObjectDetection __attribute__((deprecated))
#else
# define DEPRECATED__kachaka_interfaces__msg__ObjectDetection __declspec(deprecated)
#endif

namespace kachaka_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObjectDetection_
{
  using Type = ObjectDetection_<ContainerAllocator>;

  explicit ObjectDetection_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : roi(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->label = 0;
      this->score = 0.0f;
      this->distance_median = 0.0;
    }
  }

  explicit ObjectDetection_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : roi(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->label = 0;
      this->score = 0.0f;
      this->distance_median = 0.0;
    }
  }

  // field types and members
  using _label_type =
    uint8_t;
  _label_type label;
  using _roi_type =
    sensor_msgs::msg::RegionOfInterest_<ContainerAllocator>;
  _roi_type roi;
  using _score_type =
    float;
  _score_type score;
  using _distance_median_type =
    double;
  _distance_median_type distance_median;

  // setters for named parameter idiom
  Type & set__label(
    const uint8_t & _arg)
  {
    this->label = _arg;
    return *this;
  }
  Type & set__roi(
    const sensor_msgs::msg::RegionOfInterest_<ContainerAllocator> & _arg)
  {
    this->roi = _arg;
    return *this;
  }
  Type & set__score(
    const float & _arg)
  {
    this->score = _arg;
    return *this;
  }
  Type & set__distance_median(
    const double & _arg)
  {
    this->distance_median = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t PERSON =
    0u;
  static constexpr uint8_t SHELF =
    1u;
  static constexpr uint8_t CHARGER =
    2u;
  static constexpr uint8_t DOOR =
    3u;

  // pointer types
  using RawPtr =
    kachaka_interfaces::msg::ObjectDetection_<ContainerAllocator> *;
  using ConstRawPtr =
    const kachaka_interfaces::msg::ObjectDetection_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kachaka_interfaces::msg::ObjectDetection_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kachaka_interfaces::msg::ObjectDetection_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kachaka_interfaces::msg::ObjectDetection_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kachaka_interfaces::msg::ObjectDetection_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kachaka_interfaces::msg::ObjectDetection_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kachaka_interfaces::msg::ObjectDetection_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kachaka_interfaces::msg::ObjectDetection_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kachaka_interfaces::msg::ObjectDetection_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kachaka_interfaces__msg__ObjectDetection
    std::shared_ptr<kachaka_interfaces::msg::ObjectDetection_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kachaka_interfaces__msg__ObjectDetection
    std::shared_ptr<kachaka_interfaces::msg::ObjectDetection_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectDetection_ & other) const
  {
    if (this->label != other.label) {
      return false;
    }
    if (this->roi != other.roi) {
      return false;
    }
    if (this->score != other.score) {
      return false;
    }
    if (this->distance_median != other.distance_median) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectDetection_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectDetection_

// alias to use template instance with default allocator
using ObjectDetection =
  kachaka_interfaces::msg::ObjectDetection_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ObjectDetection_<ContainerAllocator>::PERSON;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ObjectDetection_<ContainerAllocator>::SHELF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ObjectDetection_<ContainerAllocator>::CHARGER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ObjectDetection_<ContainerAllocator>::DOOR;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace kachaka_interfaces

#endif  // KACHAKA_INTERFACES__MSG__DETAIL__OBJECT_DETECTION__STRUCT_HPP_
