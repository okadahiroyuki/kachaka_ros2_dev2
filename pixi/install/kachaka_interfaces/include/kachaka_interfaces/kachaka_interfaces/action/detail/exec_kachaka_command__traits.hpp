// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kachaka_interfaces:action/ExecKachakaCommand.idl
// generated code does not contain a copyright notice

#ifndef KACHAKA_INTERFACES__ACTION__DETAIL__EXEC_KACHAKA_COMMAND__TRAITS_HPP_
#define KACHAKA_INTERFACES__ACTION__DETAIL__EXEC_KACHAKA_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "kachaka_interfaces/action/detail/exec_kachaka_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'kachaka_command'
#include "kachaka_interfaces/msg/detail/kachaka_command__traits.hpp"

namespace kachaka_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecKachakaCommand_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: kachaka_command
  {
    out << "kachaka_command: ";
    to_flow_style_yaml(msg.kachaka_command, out);
    out << ", ";
  }

  // member: cancel_all
  {
    out << "cancel_all: ";
    rosidl_generator_traits::value_to_yaml(msg.cancel_all, out);
    out << ", ";
  }

  // member: tts_on_success
  {
    out << "tts_on_success: ";
    rosidl_generator_traits::value_to_yaml(msg.tts_on_success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecKachakaCommand_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: kachaka_command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kachaka_command:\n";
    to_block_style_yaml(msg.kachaka_command, out, indentation + 2);
  }

  // member: cancel_all
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cancel_all: ";
    rosidl_generator_traits::value_to_yaml(msg.cancel_all, out);
    out << "\n";
  }

  // member: tts_on_success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tts_on_success: ";
    rosidl_generator_traits::value_to_yaml(msg.tts_on_success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecKachakaCommand_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace kachaka_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use kachaka_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const kachaka_interfaces::action::ExecKachakaCommand_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  kachaka_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kachaka_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const kachaka_interfaces::action::ExecKachakaCommand_Goal & msg)
{
  return kachaka_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<kachaka_interfaces::action::ExecKachakaCommand_Goal>()
{
  return "kachaka_interfaces::action::ExecKachakaCommand_Goal";
}

template<>
inline const char * name<kachaka_interfaces::action::ExecKachakaCommand_Goal>()
{
  return "kachaka_interfaces/action/ExecKachakaCommand_Goal";
}

template<>
struct has_fixed_size<kachaka_interfaces::action::ExecKachakaCommand_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<kachaka_interfaces::action::ExecKachakaCommand_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<kachaka_interfaces::action::ExecKachakaCommand_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace kachaka_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecKachakaCommand_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: error_code
  {
    out << "error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_code, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecKachakaCommand_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: error_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_code, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecKachakaCommand_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace kachaka_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use kachaka_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const kachaka_interfaces::action::ExecKachakaCommand_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  kachaka_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kachaka_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const kachaka_interfaces::action::ExecKachakaCommand_Result & msg)
{
  return kachaka_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<kachaka_interfaces::action::ExecKachakaCommand_Result>()
{
  return "kachaka_interfaces::action::ExecKachakaCommand_Result";
}

template<>
inline const char * name<kachaka_interfaces::action::ExecKachakaCommand_Result>()
{
  return "kachaka_interfaces/action/ExecKachakaCommand_Result";
}

template<>
struct has_fixed_size<kachaka_interfaces::action::ExecKachakaCommand_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<kachaka_interfaces::action::ExecKachakaCommand_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<kachaka_interfaces::action::ExecKachakaCommand_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace kachaka_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecKachakaCommand_Feedback & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecKachakaCommand_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecKachakaCommand_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace kachaka_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use kachaka_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const kachaka_interfaces::action::ExecKachakaCommand_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  kachaka_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kachaka_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const kachaka_interfaces::action::ExecKachakaCommand_Feedback & msg)
{
  return kachaka_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<kachaka_interfaces::action::ExecKachakaCommand_Feedback>()
{
  return "kachaka_interfaces::action::ExecKachakaCommand_Feedback";
}

template<>
inline const char * name<kachaka_interfaces::action::ExecKachakaCommand_Feedback>()
{
  return "kachaka_interfaces/action/ExecKachakaCommand_Feedback";
}

template<>
struct has_fixed_size<kachaka_interfaces::action::ExecKachakaCommand_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<kachaka_interfaces::action::ExecKachakaCommand_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<kachaka_interfaces::action::ExecKachakaCommand_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "kachaka_interfaces/action/detail/exec_kachaka_command__traits.hpp"

namespace kachaka_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecKachakaCommand_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecKachakaCommand_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecKachakaCommand_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace kachaka_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use kachaka_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const kachaka_interfaces::action::ExecKachakaCommand_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  kachaka_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kachaka_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const kachaka_interfaces::action::ExecKachakaCommand_SendGoal_Request & msg)
{
  return kachaka_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<kachaka_interfaces::action::ExecKachakaCommand_SendGoal_Request>()
{
  return "kachaka_interfaces::action::ExecKachakaCommand_SendGoal_Request";
}

template<>
inline const char * name<kachaka_interfaces::action::ExecKachakaCommand_SendGoal_Request>()
{
  return "kachaka_interfaces/action/ExecKachakaCommand_SendGoal_Request";
}

template<>
struct has_fixed_size<kachaka_interfaces::action::ExecKachakaCommand_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<kachaka_interfaces::action::ExecKachakaCommand_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<kachaka_interfaces::action::ExecKachakaCommand_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<kachaka_interfaces::action::ExecKachakaCommand_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<kachaka_interfaces::action::ExecKachakaCommand_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace kachaka_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecKachakaCommand_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecKachakaCommand_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecKachakaCommand_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace kachaka_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use kachaka_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const kachaka_interfaces::action::ExecKachakaCommand_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  kachaka_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kachaka_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const kachaka_interfaces::action::ExecKachakaCommand_SendGoal_Response & msg)
{
  return kachaka_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<kachaka_interfaces::action::ExecKachakaCommand_SendGoal_Response>()
{
  return "kachaka_interfaces::action::ExecKachakaCommand_SendGoal_Response";
}

template<>
inline const char * name<kachaka_interfaces::action::ExecKachakaCommand_SendGoal_Response>()
{
  return "kachaka_interfaces/action/ExecKachakaCommand_SendGoal_Response";
}

template<>
struct has_fixed_size<kachaka_interfaces::action::ExecKachakaCommand_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<kachaka_interfaces::action::ExecKachakaCommand_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<kachaka_interfaces::action::ExecKachakaCommand_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<kachaka_interfaces::action::ExecKachakaCommand_SendGoal>()
{
  return "kachaka_interfaces::action::ExecKachakaCommand_SendGoal";
}

template<>
inline const char * name<kachaka_interfaces::action::ExecKachakaCommand_SendGoal>()
{
  return "kachaka_interfaces/action/ExecKachakaCommand_SendGoal";
}

template<>
struct has_fixed_size<kachaka_interfaces::action::ExecKachakaCommand_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<kachaka_interfaces::action::ExecKachakaCommand_SendGoal_Request>::value &&
    has_fixed_size<kachaka_interfaces::action::ExecKachakaCommand_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<kachaka_interfaces::action::ExecKachakaCommand_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<kachaka_interfaces::action::ExecKachakaCommand_SendGoal_Request>::value &&
    has_bounded_size<kachaka_interfaces::action::ExecKachakaCommand_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<kachaka_interfaces::action::ExecKachakaCommand_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<kachaka_interfaces::action::ExecKachakaCommand_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<kachaka_interfaces::action::ExecKachakaCommand_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace kachaka_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecKachakaCommand_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecKachakaCommand_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecKachakaCommand_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace kachaka_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use kachaka_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const kachaka_interfaces::action::ExecKachakaCommand_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  kachaka_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kachaka_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const kachaka_interfaces::action::ExecKachakaCommand_GetResult_Request & msg)
{
  return kachaka_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<kachaka_interfaces::action::ExecKachakaCommand_GetResult_Request>()
{
  return "kachaka_interfaces::action::ExecKachakaCommand_GetResult_Request";
}

template<>
inline const char * name<kachaka_interfaces::action::ExecKachakaCommand_GetResult_Request>()
{
  return "kachaka_interfaces/action/ExecKachakaCommand_GetResult_Request";
}

template<>
struct has_fixed_size<kachaka_interfaces::action::ExecKachakaCommand_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<kachaka_interfaces::action::ExecKachakaCommand_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<kachaka_interfaces::action::ExecKachakaCommand_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "kachaka_interfaces/action/detail/exec_kachaka_command__traits.hpp"

namespace kachaka_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecKachakaCommand_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecKachakaCommand_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecKachakaCommand_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace kachaka_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use kachaka_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const kachaka_interfaces::action::ExecKachakaCommand_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  kachaka_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kachaka_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const kachaka_interfaces::action::ExecKachakaCommand_GetResult_Response & msg)
{
  return kachaka_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<kachaka_interfaces::action::ExecKachakaCommand_GetResult_Response>()
{
  return "kachaka_interfaces::action::ExecKachakaCommand_GetResult_Response";
}

template<>
inline const char * name<kachaka_interfaces::action::ExecKachakaCommand_GetResult_Response>()
{
  return "kachaka_interfaces/action/ExecKachakaCommand_GetResult_Response";
}

template<>
struct has_fixed_size<kachaka_interfaces::action::ExecKachakaCommand_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<kachaka_interfaces::action::ExecKachakaCommand_Result>::value> {};

template<>
struct has_bounded_size<kachaka_interfaces::action::ExecKachakaCommand_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<kachaka_interfaces::action::ExecKachakaCommand_Result>::value> {};

template<>
struct is_message<kachaka_interfaces::action::ExecKachakaCommand_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<kachaka_interfaces::action::ExecKachakaCommand_GetResult>()
{
  return "kachaka_interfaces::action::ExecKachakaCommand_GetResult";
}

template<>
inline const char * name<kachaka_interfaces::action::ExecKachakaCommand_GetResult>()
{
  return "kachaka_interfaces/action/ExecKachakaCommand_GetResult";
}

template<>
struct has_fixed_size<kachaka_interfaces::action::ExecKachakaCommand_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<kachaka_interfaces::action::ExecKachakaCommand_GetResult_Request>::value &&
    has_fixed_size<kachaka_interfaces::action::ExecKachakaCommand_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<kachaka_interfaces::action::ExecKachakaCommand_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<kachaka_interfaces::action::ExecKachakaCommand_GetResult_Request>::value &&
    has_bounded_size<kachaka_interfaces::action::ExecKachakaCommand_GetResult_Response>::value
  >
{
};

template<>
struct is_service<kachaka_interfaces::action::ExecKachakaCommand_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<kachaka_interfaces::action::ExecKachakaCommand_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<kachaka_interfaces::action::ExecKachakaCommand_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "kachaka_interfaces/action/detail/exec_kachaka_command__traits.hpp"

namespace kachaka_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecKachakaCommand_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecKachakaCommand_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecKachakaCommand_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace kachaka_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use kachaka_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const kachaka_interfaces::action::ExecKachakaCommand_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  kachaka_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kachaka_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const kachaka_interfaces::action::ExecKachakaCommand_FeedbackMessage & msg)
{
  return kachaka_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<kachaka_interfaces::action::ExecKachakaCommand_FeedbackMessage>()
{
  return "kachaka_interfaces::action::ExecKachakaCommand_FeedbackMessage";
}

template<>
inline const char * name<kachaka_interfaces::action::ExecKachakaCommand_FeedbackMessage>()
{
  return "kachaka_interfaces/action/ExecKachakaCommand_FeedbackMessage";
}

template<>
struct has_fixed_size<kachaka_interfaces::action::ExecKachakaCommand_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<kachaka_interfaces::action::ExecKachakaCommand_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<kachaka_interfaces::action::ExecKachakaCommand_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<kachaka_interfaces::action::ExecKachakaCommand_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<kachaka_interfaces::action::ExecKachakaCommand_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<kachaka_interfaces::action::ExecKachakaCommand>
  : std::true_type
{
};

template<>
struct is_action_goal<kachaka_interfaces::action::ExecKachakaCommand_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<kachaka_interfaces::action::ExecKachakaCommand_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<kachaka_interfaces::action::ExecKachakaCommand_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // KACHAKA_INTERFACES__ACTION__DETAIL__EXEC_KACHAKA_COMMAND__TRAITS_HPP_
