// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kachaka_interfaces:action/ExecKachakaCommand.idl
// generated code does not contain a copyright notice

#ifndef KACHAKA_INTERFACES__ACTION__DETAIL__EXEC_KACHAKA_COMMAND__BUILDER_HPP_
#define KACHAKA_INTERFACES__ACTION__DETAIL__EXEC_KACHAKA_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "kachaka_interfaces/action/detail/exec_kachaka_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace kachaka_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecKachakaCommand_Goal_tts_on_success
{
public:
  explicit Init_ExecKachakaCommand_Goal_tts_on_success(::kachaka_interfaces::action::ExecKachakaCommand_Goal & msg)
  : msg_(msg)
  {}
  ::kachaka_interfaces::action::ExecKachakaCommand_Goal tts_on_success(::kachaka_interfaces::action::ExecKachakaCommand_Goal::_tts_on_success_type arg)
  {
    msg_.tts_on_success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kachaka_interfaces::action::ExecKachakaCommand_Goal msg_;
};

class Init_ExecKachakaCommand_Goal_cancel_all
{
public:
  explicit Init_ExecKachakaCommand_Goal_cancel_all(::kachaka_interfaces::action::ExecKachakaCommand_Goal & msg)
  : msg_(msg)
  {}
  Init_ExecKachakaCommand_Goal_tts_on_success cancel_all(::kachaka_interfaces::action::ExecKachakaCommand_Goal::_cancel_all_type arg)
  {
    msg_.cancel_all = std::move(arg);
    return Init_ExecKachakaCommand_Goal_tts_on_success(msg_);
  }

private:
  ::kachaka_interfaces::action::ExecKachakaCommand_Goal msg_;
};

class Init_ExecKachakaCommand_Goal_kachaka_command
{
public:
  Init_ExecKachakaCommand_Goal_kachaka_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecKachakaCommand_Goal_cancel_all kachaka_command(::kachaka_interfaces::action::ExecKachakaCommand_Goal::_kachaka_command_type arg)
  {
    msg_.kachaka_command = std::move(arg);
    return Init_ExecKachakaCommand_Goal_cancel_all(msg_);
  }

private:
  ::kachaka_interfaces::action::ExecKachakaCommand_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::kachaka_interfaces::action::ExecKachakaCommand_Goal>()
{
  return kachaka_interfaces::action::builder::Init_ExecKachakaCommand_Goal_kachaka_command();
}

}  // namespace kachaka_interfaces


namespace kachaka_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecKachakaCommand_Result_message
{
public:
  explicit Init_ExecKachakaCommand_Result_message(::kachaka_interfaces::action::ExecKachakaCommand_Result & msg)
  : msg_(msg)
  {}
  ::kachaka_interfaces::action::ExecKachakaCommand_Result message(::kachaka_interfaces::action::ExecKachakaCommand_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kachaka_interfaces::action::ExecKachakaCommand_Result msg_;
};

class Init_ExecKachakaCommand_Result_error_code
{
public:
  explicit Init_ExecKachakaCommand_Result_error_code(::kachaka_interfaces::action::ExecKachakaCommand_Result & msg)
  : msg_(msg)
  {}
  Init_ExecKachakaCommand_Result_message error_code(::kachaka_interfaces::action::ExecKachakaCommand_Result::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_ExecKachakaCommand_Result_message(msg_);
  }

private:
  ::kachaka_interfaces::action::ExecKachakaCommand_Result msg_;
};

class Init_ExecKachakaCommand_Result_success
{
public:
  Init_ExecKachakaCommand_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecKachakaCommand_Result_error_code success(::kachaka_interfaces::action::ExecKachakaCommand_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ExecKachakaCommand_Result_error_code(msg_);
  }

private:
  ::kachaka_interfaces::action::ExecKachakaCommand_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::kachaka_interfaces::action::ExecKachakaCommand_Result>()
{
  return kachaka_interfaces::action::builder::Init_ExecKachakaCommand_Result_success();
}

}  // namespace kachaka_interfaces


namespace kachaka_interfaces
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::kachaka_interfaces::action::ExecKachakaCommand_Feedback>()
{
  return ::kachaka_interfaces::action::ExecKachakaCommand_Feedback(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace kachaka_interfaces


namespace kachaka_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecKachakaCommand_SendGoal_Request_goal
{
public:
  explicit Init_ExecKachakaCommand_SendGoal_Request_goal(::kachaka_interfaces::action::ExecKachakaCommand_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::kachaka_interfaces::action::ExecKachakaCommand_SendGoal_Request goal(::kachaka_interfaces::action::ExecKachakaCommand_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kachaka_interfaces::action::ExecKachakaCommand_SendGoal_Request msg_;
};

class Init_ExecKachakaCommand_SendGoal_Request_goal_id
{
public:
  Init_ExecKachakaCommand_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecKachakaCommand_SendGoal_Request_goal goal_id(::kachaka_interfaces::action::ExecKachakaCommand_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ExecKachakaCommand_SendGoal_Request_goal(msg_);
  }

private:
  ::kachaka_interfaces::action::ExecKachakaCommand_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::kachaka_interfaces::action::ExecKachakaCommand_SendGoal_Request>()
{
  return kachaka_interfaces::action::builder::Init_ExecKachakaCommand_SendGoal_Request_goal_id();
}

}  // namespace kachaka_interfaces


namespace kachaka_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecKachakaCommand_SendGoal_Response_stamp
{
public:
  explicit Init_ExecKachakaCommand_SendGoal_Response_stamp(::kachaka_interfaces::action::ExecKachakaCommand_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::kachaka_interfaces::action::ExecKachakaCommand_SendGoal_Response stamp(::kachaka_interfaces::action::ExecKachakaCommand_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kachaka_interfaces::action::ExecKachakaCommand_SendGoal_Response msg_;
};

class Init_ExecKachakaCommand_SendGoal_Response_accepted
{
public:
  Init_ExecKachakaCommand_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecKachakaCommand_SendGoal_Response_stamp accepted(::kachaka_interfaces::action::ExecKachakaCommand_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_ExecKachakaCommand_SendGoal_Response_stamp(msg_);
  }

private:
  ::kachaka_interfaces::action::ExecKachakaCommand_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::kachaka_interfaces::action::ExecKachakaCommand_SendGoal_Response>()
{
  return kachaka_interfaces::action::builder::Init_ExecKachakaCommand_SendGoal_Response_accepted();
}

}  // namespace kachaka_interfaces


namespace kachaka_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecKachakaCommand_GetResult_Request_goal_id
{
public:
  Init_ExecKachakaCommand_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::kachaka_interfaces::action::ExecKachakaCommand_GetResult_Request goal_id(::kachaka_interfaces::action::ExecKachakaCommand_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kachaka_interfaces::action::ExecKachakaCommand_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::kachaka_interfaces::action::ExecKachakaCommand_GetResult_Request>()
{
  return kachaka_interfaces::action::builder::Init_ExecKachakaCommand_GetResult_Request_goal_id();
}

}  // namespace kachaka_interfaces


namespace kachaka_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecKachakaCommand_GetResult_Response_result
{
public:
  explicit Init_ExecKachakaCommand_GetResult_Response_result(::kachaka_interfaces::action::ExecKachakaCommand_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::kachaka_interfaces::action::ExecKachakaCommand_GetResult_Response result(::kachaka_interfaces::action::ExecKachakaCommand_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kachaka_interfaces::action::ExecKachakaCommand_GetResult_Response msg_;
};

class Init_ExecKachakaCommand_GetResult_Response_status
{
public:
  Init_ExecKachakaCommand_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecKachakaCommand_GetResult_Response_result status(::kachaka_interfaces::action::ExecKachakaCommand_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ExecKachakaCommand_GetResult_Response_result(msg_);
  }

private:
  ::kachaka_interfaces::action::ExecKachakaCommand_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::kachaka_interfaces::action::ExecKachakaCommand_GetResult_Response>()
{
  return kachaka_interfaces::action::builder::Init_ExecKachakaCommand_GetResult_Response_status();
}

}  // namespace kachaka_interfaces


namespace kachaka_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecKachakaCommand_FeedbackMessage_feedback
{
public:
  explicit Init_ExecKachakaCommand_FeedbackMessage_feedback(::kachaka_interfaces::action::ExecKachakaCommand_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::kachaka_interfaces::action::ExecKachakaCommand_FeedbackMessage feedback(::kachaka_interfaces::action::ExecKachakaCommand_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kachaka_interfaces::action::ExecKachakaCommand_FeedbackMessage msg_;
};

class Init_ExecKachakaCommand_FeedbackMessage_goal_id
{
public:
  Init_ExecKachakaCommand_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecKachakaCommand_FeedbackMessage_feedback goal_id(::kachaka_interfaces::action::ExecKachakaCommand_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ExecKachakaCommand_FeedbackMessage_feedback(msg_);
  }

private:
  ::kachaka_interfaces::action::ExecKachakaCommand_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::kachaka_interfaces::action::ExecKachakaCommand_FeedbackMessage>()
{
  return kachaka_interfaces::action::builder::Init_ExecKachakaCommand_FeedbackMessage_goal_id();
}

}  // namespace kachaka_interfaces

#endif  // KACHAKA_INTERFACES__ACTION__DETAIL__EXEC_KACHAKA_COMMAND__BUILDER_HPP_
