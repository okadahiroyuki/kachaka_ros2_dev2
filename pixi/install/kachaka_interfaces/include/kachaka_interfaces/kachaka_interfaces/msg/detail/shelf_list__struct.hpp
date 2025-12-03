// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from kachaka_interfaces:msg/ShelfList.idl
// generated code does not contain a copyright notice

#ifndef KACHAKA_INTERFACES__MSG__DETAIL__SHELF_LIST__STRUCT_HPP_
#define KACHAKA_INTERFACES__MSG__DETAIL__SHELF_LIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'shelves'
#include "kachaka_interfaces/msg/detail/shelf__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__kachaka_interfaces__msg__ShelfList __attribute__((deprecated))
#else
# define DEPRECATED__kachaka_interfaces__msg__ShelfList __declspec(deprecated)
#endif

namespace kachaka_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ShelfList_
{
  using Type = ShelfList_<ContainerAllocator>;

  explicit ShelfList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ShelfList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _shelves_type =
    std::vector<kachaka_interfaces::msg::Shelf_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<kachaka_interfaces::msg::Shelf_<ContainerAllocator>>>;
  _shelves_type shelves;

  // setters for named parameter idiom
  Type & set__shelves(
    const std::vector<kachaka_interfaces::msg::Shelf_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<kachaka_interfaces::msg::Shelf_<ContainerAllocator>>> & _arg)
  {
    this->shelves = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    kachaka_interfaces::msg::ShelfList_<ContainerAllocator> *;
  using ConstRawPtr =
    const kachaka_interfaces::msg::ShelfList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kachaka_interfaces::msg::ShelfList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kachaka_interfaces::msg::ShelfList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kachaka_interfaces::msg::ShelfList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kachaka_interfaces::msg::ShelfList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kachaka_interfaces::msg::ShelfList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kachaka_interfaces::msg::ShelfList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kachaka_interfaces::msg::ShelfList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kachaka_interfaces::msg::ShelfList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kachaka_interfaces__msg__ShelfList
    std::shared_ptr<kachaka_interfaces::msg::ShelfList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kachaka_interfaces__msg__ShelfList
    std::shared_ptr<kachaka_interfaces::msg::ShelfList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ShelfList_ & other) const
  {
    if (this->shelves != other.shelves) {
      return false;
    }
    return true;
  }
  bool operator!=(const ShelfList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ShelfList_

// alias to use template instance with default allocator
using ShelfList =
  kachaka_interfaces::msg::ShelfList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace kachaka_interfaces

#endif  // KACHAKA_INTERFACES__MSG__DETAIL__SHELF_LIST__STRUCT_HPP_
