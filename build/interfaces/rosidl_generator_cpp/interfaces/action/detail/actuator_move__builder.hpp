// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:action/ActuatorMove.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interfaces/action/actuator_move.hpp"


#ifndef INTERFACES__ACTION__DETAIL__ACTUATOR_MOVE__BUILDER_HPP_
#define INTERFACES__ACTION__DETAIL__ACTUATOR_MOVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/action/detail/actuator_move__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_ActuatorMove_Goal_loops
{
public:
  explicit Init_ActuatorMove_Goal_loops(::interfaces::action::ActuatorMove_Goal & msg)
  : msg_(msg)
  {}
  ::interfaces::action::ActuatorMove_Goal loops(::interfaces::action::ActuatorMove_Goal::_loops_type arg)
  {
    msg_.loops = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::ActuatorMove_Goal msg_;
};

class Init_ActuatorMove_Goal_samples
{
public:
  explicit Init_ActuatorMove_Goal_samples(::interfaces::action::ActuatorMove_Goal & msg)
  : msg_(msg)
  {}
  Init_ActuatorMove_Goal_loops samples(::interfaces::action::ActuatorMove_Goal::_samples_type arg)
  {
    msg_.samples = std::move(arg);
    return Init_ActuatorMove_Goal_loops(msg_);
  }

private:
  ::interfaces::action::ActuatorMove_Goal msg_;
};

class Init_ActuatorMove_Goal_phases
{
public:
  explicit Init_ActuatorMove_Goal_phases(::interfaces::action::ActuatorMove_Goal & msg)
  : msg_(msg)
  {}
  Init_ActuatorMove_Goal_samples phases(::interfaces::action::ActuatorMove_Goal::_phases_type arg)
  {
    msg_.phases = std::move(arg);
    return Init_ActuatorMove_Goal_samples(msg_);
  }

private:
  ::interfaces::action::ActuatorMove_Goal msg_;
};

class Init_ActuatorMove_Goal_offsets
{
public:
  explicit Init_ActuatorMove_Goal_offsets(::interfaces::action::ActuatorMove_Goal & msg)
  : msg_(msg)
  {}
  Init_ActuatorMove_Goal_phases offsets(::interfaces::action::ActuatorMove_Goal::_offsets_type arg)
  {
    msg_.offsets = std::move(arg);
    return Init_ActuatorMove_Goal_phases(msg_);
  }

private:
  ::interfaces::action::ActuatorMove_Goal msg_;
};

class Init_ActuatorMove_Goal_periods
{
public:
  explicit Init_ActuatorMove_Goal_periods(::interfaces::action::ActuatorMove_Goal & msg)
  : msg_(msg)
  {}
  Init_ActuatorMove_Goal_offsets periods(::interfaces::action::ActuatorMove_Goal::_periods_type arg)
  {
    msg_.periods = std::move(arg);
    return Init_ActuatorMove_Goal_offsets(msg_);
  }

private:
  ::interfaces::action::ActuatorMove_Goal msg_;
};

class Init_ActuatorMove_Goal_amplitudes
{
public:
  explicit Init_ActuatorMove_Goal_amplitudes(::interfaces::action::ActuatorMove_Goal & msg)
  : msg_(msg)
  {}
  Init_ActuatorMove_Goal_periods amplitudes(::interfaces::action::ActuatorMove_Goal::_amplitudes_type arg)
  {
    msg_.amplitudes = std::move(arg);
    return Init_ActuatorMove_Goal_periods(msg_);
  }

private:
  ::interfaces::action::ActuatorMove_Goal msg_;
};

class Init_ActuatorMove_Goal_names
{
public:
  Init_ActuatorMove_Goal_names()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActuatorMove_Goal_amplitudes names(::interfaces::action::ActuatorMove_Goal::_names_type arg)
  {
    msg_.names = std::move(arg);
    return Init_ActuatorMove_Goal_amplitudes(msg_);
  }

private:
  ::interfaces::action::ActuatorMove_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::ActuatorMove_Goal>()
{
  return interfaces::action::builder::Init_ActuatorMove_Goal_names();
}

}  // namespace interfaces


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_ActuatorMove_Result_message
{
public:
  explicit Init_ActuatorMove_Result_message(::interfaces::action::ActuatorMove_Result & msg)
  : msg_(msg)
  {}
  ::interfaces::action::ActuatorMove_Result message(::interfaces::action::ActuatorMove_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::ActuatorMove_Result msg_;
};

class Init_ActuatorMove_Result_success
{
public:
  Init_ActuatorMove_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActuatorMove_Result_message success(::interfaces::action::ActuatorMove_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ActuatorMove_Result_message(msg_);
  }

private:
  ::interfaces::action::ActuatorMove_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::ActuatorMove_Result>()
{
  return interfaces::action::builder::Init_ActuatorMove_Result_success();
}

}  // namespace interfaces


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_ActuatorMove_Feedback_current_positions
{
public:
  explicit Init_ActuatorMove_Feedback_current_positions(::interfaces::action::ActuatorMove_Feedback & msg)
  : msg_(msg)
  {}
  ::interfaces::action::ActuatorMove_Feedback current_positions(::interfaces::action::ActuatorMove_Feedback::_current_positions_type arg)
  {
    msg_.current_positions = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::ActuatorMove_Feedback msg_;
};

class Init_ActuatorMove_Feedback_names
{
public:
  Init_ActuatorMove_Feedback_names()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActuatorMove_Feedback_current_positions names(::interfaces::action::ActuatorMove_Feedback::_names_type arg)
  {
    msg_.names = std::move(arg);
    return Init_ActuatorMove_Feedback_current_positions(msg_);
  }

private:
  ::interfaces::action::ActuatorMove_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::ActuatorMove_Feedback>()
{
  return interfaces::action::builder::Init_ActuatorMove_Feedback_names();
}

}  // namespace interfaces


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_ActuatorMove_SendGoal_Request_goal
{
public:
  explicit Init_ActuatorMove_SendGoal_Request_goal(::interfaces::action::ActuatorMove_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::interfaces::action::ActuatorMove_SendGoal_Request goal(::interfaces::action::ActuatorMove_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::ActuatorMove_SendGoal_Request msg_;
};

class Init_ActuatorMove_SendGoal_Request_goal_id
{
public:
  Init_ActuatorMove_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActuatorMove_SendGoal_Request_goal goal_id(::interfaces::action::ActuatorMove_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ActuatorMove_SendGoal_Request_goal(msg_);
  }

private:
  ::interfaces::action::ActuatorMove_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::ActuatorMove_SendGoal_Request>()
{
  return interfaces::action::builder::Init_ActuatorMove_SendGoal_Request_goal_id();
}

}  // namespace interfaces


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_ActuatorMove_SendGoal_Response_stamp
{
public:
  explicit Init_ActuatorMove_SendGoal_Response_stamp(::interfaces::action::ActuatorMove_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::interfaces::action::ActuatorMove_SendGoal_Response stamp(::interfaces::action::ActuatorMove_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::ActuatorMove_SendGoal_Response msg_;
};

class Init_ActuatorMove_SendGoal_Response_accepted
{
public:
  Init_ActuatorMove_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActuatorMove_SendGoal_Response_stamp accepted(::interfaces::action::ActuatorMove_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_ActuatorMove_SendGoal_Response_stamp(msg_);
  }

private:
  ::interfaces::action::ActuatorMove_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::ActuatorMove_SendGoal_Response>()
{
  return interfaces::action::builder::Init_ActuatorMove_SendGoal_Response_accepted();
}

}  // namespace interfaces


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_ActuatorMove_SendGoal_Event_response
{
public:
  explicit Init_ActuatorMove_SendGoal_Event_response(::interfaces::action::ActuatorMove_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::interfaces::action::ActuatorMove_SendGoal_Event response(::interfaces::action::ActuatorMove_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::ActuatorMove_SendGoal_Event msg_;
};

class Init_ActuatorMove_SendGoal_Event_request
{
public:
  explicit Init_ActuatorMove_SendGoal_Event_request(::interfaces::action::ActuatorMove_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_ActuatorMove_SendGoal_Event_response request(::interfaces::action::ActuatorMove_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ActuatorMove_SendGoal_Event_response(msg_);
  }

private:
  ::interfaces::action::ActuatorMove_SendGoal_Event msg_;
};

class Init_ActuatorMove_SendGoal_Event_info
{
public:
  Init_ActuatorMove_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActuatorMove_SendGoal_Event_request info(::interfaces::action::ActuatorMove_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ActuatorMove_SendGoal_Event_request(msg_);
  }

private:
  ::interfaces::action::ActuatorMove_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::ActuatorMove_SendGoal_Event>()
{
  return interfaces::action::builder::Init_ActuatorMove_SendGoal_Event_info();
}

}  // namespace interfaces


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_ActuatorMove_GetResult_Request_goal_id
{
public:
  Init_ActuatorMove_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::action::ActuatorMove_GetResult_Request goal_id(::interfaces::action::ActuatorMove_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::ActuatorMove_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::ActuatorMove_GetResult_Request>()
{
  return interfaces::action::builder::Init_ActuatorMove_GetResult_Request_goal_id();
}

}  // namespace interfaces


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_ActuatorMove_GetResult_Response_result
{
public:
  explicit Init_ActuatorMove_GetResult_Response_result(::interfaces::action::ActuatorMove_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::interfaces::action::ActuatorMove_GetResult_Response result(::interfaces::action::ActuatorMove_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::ActuatorMove_GetResult_Response msg_;
};

class Init_ActuatorMove_GetResult_Response_status
{
public:
  Init_ActuatorMove_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActuatorMove_GetResult_Response_result status(::interfaces::action::ActuatorMove_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ActuatorMove_GetResult_Response_result(msg_);
  }

private:
  ::interfaces::action::ActuatorMove_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::ActuatorMove_GetResult_Response>()
{
  return interfaces::action::builder::Init_ActuatorMove_GetResult_Response_status();
}

}  // namespace interfaces


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_ActuatorMove_GetResult_Event_response
{
public:
  explicit Init_ActuatorMove_GetResult_Event_response(::interfaces::action::ActuatorMove_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::interfaces::action::ActuatorMove_GetResult_Event response(::interfaces::action::ActuatorMove_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::ActuatorMove_GetResult_Event msg_;
};

class Init_ActuatorMove_GetResult_Event_request
{
public:
  explicit Init_ActuatorMove_GetResult_Event_request(::interfaces::action::ActuatorMove_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_ActuatorMove_GetResult_Event_response request(::interfaces::action::ActuatorMove_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ActuatorMove_GetResult_Event_response(msg_);
  }

private:
  ::interfaces::action::ActuatorMove_GetResult_Event msg_;
};

class Init_ActuatorMove_GetResult_Event_info
{
public:
  Init_ActuatorMove_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActuatorMove_GetResult_Event_request info(::interfaces::action::ActuatorMove_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ActuatorMove_GetResult_Event_request(msg_);
  }

private:
  ::interfaces::action::ActuatorMove_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::ActuatorMove_GetResult_Event>()
{
  return interfaces::action::builder::Init_ActuatorMove_GetResult_Event_info();
}

}  // namespace interfaces


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_ActuatorMove_FeedbackMessage_feedback
{
public:
  explicit Init_ActuatorMove_FeedbackMessage_feedback(::interfaces::action::ActuatorMove_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::interfaces::action::ActuatorMove_FeedbackMessage feedback(::interfaces::action::ActuatorMove_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::ActuatorMove_FeedbackMessage msg_;
};

class Init_ActuatorMove_FeedbackMessage_goal_id
{
public:
  Init_ActuatorMove_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActuatorMove_FeedbackMessage_feedback goal_id(::interfaces::action::ActuatorMove_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ActuatorMove_FeedbackMessage_feedback(msg_);
  }

private:
  ::interfaces::action::ActuatorMove_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::ActuatorMove_FeedbackMessage>()
{
  return interfaces::action::builder::Init_ActuatorMove_FeedbackMessage_goal_id();
}

}  // namespace interfaces

#endif  // INTERFACES__ACTION__DETAIL__ACTUATOR_MOVE__BUILDER_HPP_
