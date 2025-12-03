// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from kachaka_interfaces:msg/KachakaCommand.idl
// generated code does not contain a copyright notice

#ifndef KACHAKA_INTERFACES__MSG__DETAIL__KACHAKA_COMMAND__STRUCT_HPP_
#define KACHAKA_INTERFACES__MSG__DETAIL__KACHAKA_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__kachaka_interfaces__msg__KachakaCommand __attribute__((deprecated))
#else
# define DEPRECATED__kachaka_interfaces__msg__KachakaCommand __declspec(deprecated)
#endif

namespace kachaka_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct KachakaCommand_
{
  using Type = KachakaCommand_<ContainerAllocator>;

  explicit KachakaCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command_type = 0;
      this->move_shelf_command_target_shelf_id = "";
      this->move_shelf_command_destination_location_id = "";
      this->move_shelf_command_undock_on_destination = false;
      this->return_shelf_command_target_shelf_id = "";
      this->undock_shelf_command_target_shelf_id = "";
      this->move_to_location_command_target_location_id = "";
      this->return_home_command_silent = false;
      this->speak_command_text = "";
      this->move_to_pose_command_x = 0.0;
      this->move_to_pose_command_y = 0.0;
      this->move_to_pose_command_yaw = 0.0;
    }
  }

  explicit KachakaCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : move_shelf_command_target_shelf_id(_alloc),
    move_shelf_command_destination_location_id(_alloc),
    return_shelf_command_target_shelf_id(_alloc),
    undock_shelf_command_target_shelf_id(_alloc),
    move_to_location_command_target_location_id(_alloc),
    speak_command_text(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command_type = 0;
      this->move_shelf_command_target_shelf_id = "";
      this->move_shelf_command_destination_location_id = "";
      this->move_shelf_command_undock_on_destination = false;
      this->return_shelf_command_target_shelf_id = "";
      this->undock_shelf_command_target_shelf_id = "";
      this->move_to_location_command_target_location_id = "";
      this->return_home_command_silent = false;
      this->speak_command_text = "";
      this->move_to_pose_command_x = 0.0;
      this->move_to_pose_command_y = 0.0;
      this->move_to_pose_command_yaw = 0.0;
    }
  }

  // field types and members
  using _command_type_type =
    uint8_t;
  _command_type_type command_type;
  using _move_shelf_command_target_shelf_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _move_shelf_command_target_shelf_id_type move_shelf_command_target_shelf_id;
  using _move_shelf_command_destination_location_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _move_shelf_command_destination_location_id_type move_shelf_command_destination_location_id;
  using _move_shelf_command_undock_on_destination_type =
    bool;
  _move_shelf_command_undock_on_destination_type move_shelf_command_undock_on_destination;
  using _return_shelf_command_target_shelf_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _return_shelf_command_target_shelf_id_type return_shelf_command_target_shelf_id;
  using _undock_shelf_command_target_shelf_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _undock_shelf_command_target_shelf_id_type undock_shelf_command_target_shelf_id;
  using _move_to_location_command_target_location_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _move_to_location_command_target_location_id_type move_to_location_command_target_location_id;
  using _return_home_command_silent_type =
    bool;
  _return_home_command_silent_type return_home_command_silent;
  using _speak_command_text_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _speak_command_text_type speak_command_text;
  using _move_to_pose_command_x_type =
    double;
  _move_to_pose_command_x_type move_to_pose_command_x;
  using _move_to_pose_command_y_type =
    double;
  _move_to_pose_command_y_type move_to_pose_command_y;
  using _move_to_pose_command_yaw_type =
    double;
  _move_to_pose_command_yaw_type move_to_pose_command_yaw;

  // setters for named parameter idiom
  Type & set__command_type(
    const uint8_t & _arg)
  {
    this->command_type = _arg;
    return *this;
  }
  Type & set__move_shelf_command_target_shelf_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->move_shelf_command_target_shelf_id = _arg;
    return *this;
  }
  Type & set__move_shelf_command_destination_location_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->move_shelf_command_destination_location_id = _arg;
    return *this;
  }
  Type & set__move_shelf_command_undock_on_destination(
    const bool & _arg)
  {
    this->move_shelf_command_undock_on_destination = _arg;
    return *this;
  }
  Type & set__return_shelf_command_target_shelf_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->return_shelf_command_target_shelf_id = _arg;
    return *this;
  }
  Type & set__undock_shelf_command_target_shelf_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->undock_shelf_command_target_shelf_id = _arg;
    return *this;
  }
  Type & set__move_to_location_command_target_location_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->move_to_location_command_target_location_id = _arg;
    return *this;
  }
  Type & set__return_home_command_silent(
    const bool & _arg)
  {
    this->return_home_command_silent = _arg;
    return *this;
  }
  Type & set__speak_command_text(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->speak_command_text = _arg;
    return *this;
  }
  Type & set__move_to_pose_command_x(
    const double & _arg)
  {
    this->move_to_pose_command_x = _arg;
    return *this;
  }
  Type & set__move_to_pose_command_y(
    const double & _arg)
  {
    this->move_to_pose_command_y = _arg;
    return *this;
  }
  Type & set__move_to_pose_command_yaw(
    const double & _arg)
  {
    this->move_to_pose_command_yaw = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t COMMAND_TYPE_OTHER =
    0u;
  static constexpr uint8_t MOVE_SHELF_COMMAND =
    1u;
  static constexpr uint8_t RETURN_SHELF_COMMAND =
    2u;
  static constexpr uint8_t UNDOCK_SHELF_COMMAND =
    5u;
  static constexpr uint8_t MOVE_TO_LOCATION_COMMAND =
    7u;
  static constexpr uint8_t RETURN_HOME_COMMAND =
    8u;
  static constexpr uint8_t DOCK_SHELF_COMMAND =
    9u;
  static constexpr uint8_t SPEAK_COMMAND =
    12u;
  static constexpr uint8_t MOVE_TO_POSE_COMMAND =
    13u;

  // pointer types
  using RawPtr =
    kachaka_interfaces::msg::KachakaCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const kachaka_interfaces::msg::KachakaCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kachaka_interfaces::msg::KachakaCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kachaka_interfaces::msg::KachakaCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kachaka_interfaces::msg::KachakaCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kachaka_interfaces::msg::KachakaCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kachaka_interfaces::msg::KachakaCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kachaka_interfaces::msg::KachakaCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kachaka_interfaces::msg::KachakaCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kachaka_interfaces::msg::KachakaCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kachaka_interfaces__msg__KachakaCommand
    std::shared_ptr<kachaka_interfaces::msg::KachakaCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kachaka_interfaces__msg__KachakaCommand
    std::shared_ptr<kachaka_interfaces::msg::KachakaCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const KachakaCommand_ & other) const
  {
    if (this->command_type != other.command_type) {
      return false;
    }
    if (this->move_shelf_command_target_shelf_id != other.move_shelf_command_target_shelf_id) {
      return false;
    }
    if (this->move_shelf_command_destination_location_id != other.move_shelf_command_destination_location_id) {
      return false;
    }
    if (this->move_shelf_command_undock_on_destination != other.move_shelf_command_undock_on_destination) {
      return false;
    }
    if (this->return_shelf_command_target_shelf_id != other.return_shelf_command_target_shelf_id) {
      return false;
    }
    if (this->undock_shelf_command_target_shelf_id != other.undock_shelf_command_target_shelf_id) {
      return false;
    }
    if (this->move_to_location_command_target_location_id != other.move_to_location_command_target_location_id) {
      return false;
    }
    if (this->return_home_command_silent != other.return_home_command_silent) {
      return false;
    }
    if (this->speak_command_text != other.speak_command_text) {
      return false;
    }
    if (this->move_to_pose_command_x != other.move_to_pose_command_x) {
      return false;
    }
    if (this->move_to_pose_command_y != other.move_to_pose_command_y) {
      return false;
    }
    if (this->move_to_pose_command_yaw != other.move_to_pose_command_yaw) {
      return false;
    }
    return true;
  }
  bool operator!=(const KachakaCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct KachakaCommand_

// alias to use template instance with default allocator
using KachakaCommand =
  kachaka_interfaces::msg::KachakaCommand_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t KachakaCommand_<ContainerAllocator>::COMMAND_TYPE_OTHER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t KachakaCommand_<ContainerAllocator>::MOVE_SHELF_COMMAND;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t KachakaCommand_<ContainerAllocator>::RETURN_SHELF_COMMAND;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t KachakaCommand_<ContainerAllocator>::UNDOCK_SHELF_COMMAND;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t KachakaCommand_<ContainerAllocator>::MOVE_TO_LOCATION_COMMAND;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t KachakaCommand_<ContainerAllocator>::RETURN_HOME_COMMAND;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t KachakaCommand_<ContainerAllocator>::DOCK_SHELF_COMMAND;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t KachakaCommand_<ContainerAllocator>::SPEAK_COMMAND;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t KachakaCommand_<ContainerAllocator>::MOVE_TO_POSE_COMMAND;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace kachaka_interfaces

#endif  // KACHAKA_INTERFACES__MSG__DETAIL__KACHAKA_COMMAND__STRUCT_HPP_
