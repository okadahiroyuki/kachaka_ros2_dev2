// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from kachaka_interfaces:msg/ShelfSize.idl
// generated code does not contain a copyright notice

#ifndef KACHAKA_INTERFACES__MSG__DETAIL__SHELF_SIZE__STRUCT_HPP_
#define KACHAKA_INTERFACES__MSG__DETAIL__SHELF_SIZE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__kachaka_interfaces__msg__ShelfSize __attribute__((deprecated))
#else
# define DEPRECATED__kachaka_interfaces__msg__ShelfSize __declspec(deprecated)
#endif

namespace kachaka_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ShelfSize_
{
  using Type = ShelfSize_<ContainerAllocator>;

  explicit ShelfSize_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->width = 0.0;
      this->depth = 0.0;
    }
  }

  explicit ShelfSize_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->width = 0.0;
      this->depth = 0.0;
    }
  }

  // field types and members
  using _width_type =
    double;
  _width_type width;
  using _depth_type =
    double;
  _depth_type depth;

  // setters for named parameter idiom
  Type & set__width(
    const double & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__depth(
    const double & _arg)
  {
    this->depth = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    kachaka_interfaces::msg::ShelfSize_<ContainerAllocator> *;
  using ConstRawPtr =
    const kachaka_interfaces::msg::ShelfSize_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kachaka_interfaces::msg::ShelfSize_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kachaka_interfaces::msg::ShelfSize_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kachaka_interfaces::msg::ShelfSize_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kachaka_interfaces::msg::ShelfSize_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kachaka_interfaces::msg::ShelfSize_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kachaka_interfaces::msg::ShelfSize_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kachaka_interfaces::msg::ShelfSize_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kachaka_interfaces::msg::ShelfSize_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kachaka_interfaces__msg__ShelfSize
    std::shared_ptr<kachaka_interfaces::msg::ShelfSize_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kachaka_interfaces__msg__ShelfSize
    std::shared_ptr<kachaka_interfaces::msg::ShelfSize_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ShelfSize_ & other) const
  {
    if (this->width != other.width) {
      return false;
    }
    if (this->depth != other.depth) {
      return false;
    }
    return true;
  }
  bool operator!=(const ShelfSize_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ShelfSize_

// alias to use template instance with default allocator
using ShelfSize =
  kachaka_interfaces::msg::ShelfSize_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace kachaka_interfaces

#endif  // KACHAKA_INTERFACES__MSG__DETAIL__SHELF_SIZE__STRUCT_HPP_
