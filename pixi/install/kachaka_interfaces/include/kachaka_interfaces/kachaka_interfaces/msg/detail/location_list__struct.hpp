// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from kachaka_interfaces:msg/LocationList.idl
// generated code does not contain a copyright notice

#ifndef KACHAKA_INTERFACES__MSG__DETAIL__LOCATION_LIST__STRUCT_HPP_
#define KACHAKA_INTERFACES__MSG__DETAIL__LOCATION_LIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'locations'
#include "kachaka_interfaces/msg/detail/location__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__kachaka_interfaces__msg__LocationList __attribute__((deprecated))
#else
# define DEPRECATED__kachaka_interfaces__msg__LocationList __declspec(deprecated)
#endif

namespace kachaka_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LocationList_
{
  using Type = LocationList_<ContainerAllocator>;

  explicit LocationList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->default_location_id = "";
    }
  }

  explicit LocationList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : default_location_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->default_location_id = "";
    }
  }

  // field types and members
  using _locations_type =
    std::vector<kachaka_interfaces::msg::Location_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<kachaka_interfaces::msg::Location_<ContainerAllocator>>>;
  _locations_type locations;
  using _default_location_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _default_location_id_type default_location_id;

  // setters for named parameter idiom
  Type & set__locations(
    const std::vector<kachaka_interfaces::msg::Location_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<kachaka_interfaces::msg::Location_<ContainerAllocator>>> & _arg)
  {
    this->locations = _arg;
    return *this;
  }
  Type & set__default_location_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->default_location_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    kachaka_interfaces::msg::LocationList_<ContainerAllocator> *;
  using ConstRawPtr =
    const kachaka_interfaces::msg::LocationList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kachaka_interfaces::msg::LocationList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kachaka_interfaces::msg::LocationList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kachaka_interfaces::msg::LocationList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kachaka_interfaces::msg::LocationList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kachaka_interfaces::msg::LocationList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kachaka_interfaces::msg::LocationList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kachaka_interfaces::msg::LocationList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kachaka_interfaces::msg::LocationList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kachaka_interfaces__msg__LocationList
    std::shared_ptr<kachaka_interfaces::msg::LocationList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kachaka_interfaces__msg__LocationList
    std::shared_ptr<kachaka_interfaces::msg::LocationList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LocationList_ & other) const
  {
    if (this->locations != other.locations) {
      return false;
    }
    if (this->default_location_id != other.default_location_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const LocationList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LocationList_

// alias to use template instance with default allocator
using LocationList =
  kachaka_interfaces::msg::LocationList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace kachaka_interfaces

#endif  // KACHAKA_INTERFACES__MSG__DETAIL__LOCATION_LIST__STRUCT_HPP_
