// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from kachaka_interfaces:msg/LocationList.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "kachaka_interfaces/msg/detail/location_list__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace kachaka_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void LocationList_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) kachaka_interfaces::msg::LocationList(_init);
}

void LocationList_fini_function(void * message_memory)
{
  auto typed_message = static_cast<kachaka_interfaces::msg::LocationList *>(message_memory);
  typed_message->~LocationList();
}

size_t size_function__LocationList__locations(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<kachaka_interfaces::msg::Location> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LocationList__locations(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<kachaka_interfaces::msg::Location> *>(untyped_member);
  return &member[index];
}

void * get_function__LocationList__locations(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<kachaka_interfaces::msg::Location> *>(untyped_member);
  return &member[index];
}

void fetch_function__LocationList__locations(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const kachaka_interfaces::msg::Location *>(
    get_const_function__LocationList__locations(untyped_member, index));
  auto & value = *reinterpret_cast<kachaka_interfaces::msg::Location *>(untyped_value);
  value = item;
}

void assign_function__LocationList__locations(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<kachaka_interfaces::msg::Location *>(
    get_function__LocationList__locations(untyped_member, index));
  const auto & value = *reinterpret_cast<const kachaka_interfaces::msg::Location *>(untyped_value);
  item = value;
}

void resize_function__LocationList__locations(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<kachaka_interfaces::msg::Location> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LocationList_message_member_array[2] = {
  {
    "locations",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<kachaka_interfaces::msg::Location>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kachaka_interfaces::msg::LocationList, locations),  // bytes offset in struct
    nullptr,  // default value
    size_function__LocationList__locations,  // size() function pointer
    get_const_function__LocationList__locations,  // get_const(index) function pointer
    get_function__LocationList__locations,  // get(index) function pointer
    fetch_function__LocationList__locations,  // fetch(index, &value) function pointer
    assign_function__LocationList__locations,  // assign(index, value) function pointer
    resize_function__LocationList__locations  // resize(index) function pointer
  },
  {
    "default_location_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kachaka_interfaces::msg::LocationList, default_location_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LocationList_message_members = {
  "kachaka_interfaces::msg",  // message namespace
  "LocationList",  // message name
  2,  // number of fields
  sizeof(kachaka_interfaces::msg::LocationList),
  LocationList_message_member_array,  // message members
  LocationList_init_function,  // function to initialize message memory (memory has to be allocated)
  LocationList_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LocationList_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LocationList_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace kachaka_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<kachaka_interfaces::msg::LocationList>()
{
  return &::kachaka_interfaces::msg::rosidl_typesupport_introspection_cpp::LocationList_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, kachaka_interfaces, msg, LocationList)() {
  return &::kachaka_interfaces::msg::rosidl_typesupport_introspection_cpp::LocationList_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
