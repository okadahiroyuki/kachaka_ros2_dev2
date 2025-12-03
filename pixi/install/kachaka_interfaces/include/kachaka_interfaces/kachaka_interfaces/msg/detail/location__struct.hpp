// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from kachaka_interfaces:msg/Location.idl
// generated code does not contain a copyright notice

#ifndef KACHAKA_INTERFACES__MSG__DETAIL__LOCATION__STRUCT_HPP_
#define KACHAKA_INTERFACES__MSG__DETAIL__LOCATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose2_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__kachaka_interfaces__msg__Location __attribute__((deprecated))
#else
# define DEPRECATED__kachaka_interfaces__msg__Location __declspec(deprecated)
#endif

namespace kachaka_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Location_
{
  using Type = Location_<ContainerAllocator>;

  explicit Location_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->name = "";
      this->type = 0;
    }
  }

  explicit Location_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc),
    name(_alloc),
    pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->name = "";
      this->type = 0;
    }
  }

  // field types and members
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _type_type =
    uint8_t;
  _type_type type;
  using _pose_type =
    geometry_msgs::msg::Pose2D_<ContainerAllocator>;
  _pose_type pose;

  // setters for named parameter idiom
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose2D_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t LOCATION_TYPE_OTHER =
    0u;
  static constexpr uint8_t LOCATION_TYPE_CHARGER =
    1u;
  static constexpr uint8_t LOCATION_TYPE_SHELF_HOME =
    2u;

  // pointer types
  using RawPtr =
    kachaka_interfaces::msg::Location_<ContainerAllocator> *;
  using ConstRawPtr =
    const kachaka_interfaces::msg::Location_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kachaka_interfaces::msg::Location_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kachaka_interfaces::msg::Location_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kachaka_interfaces::msg::Location_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kachaka_interfaces::msg::Location_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kachaka_interfaces::msg::Location_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kachaka_interfaces::msg::Location_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kachaka_interfaces::msg::Location_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kachaka_interfaces::msg::Location_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kachaka_interfaces__msg__Location
    std::shared_ptr<kachaka_interfaces::msg::Location_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kachaka_interfaces__msg__Location
    std::shared_ptr<kachaka_interfaces::msg::Location_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Location_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const Location_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Location_

// alias to use template instance with default allocator
using Location =
  kachaka_interfaces::msg::Location_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Location_<ContainerAllocator>::LOCATION_TYPE_OTHER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Location_<ContainerAllocator>::LOCATION_TYPE_CHARGER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Location_<ContainerAllocator>::LOCATION_TYPE_SHELF_HOME;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace kachaka_interfaces

#endif  // KACHAKA_INTERFACES__MSG__DETAIL__LOCATION__STRUCT_HPP_
