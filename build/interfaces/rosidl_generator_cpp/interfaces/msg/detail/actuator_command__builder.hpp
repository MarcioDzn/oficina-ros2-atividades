// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/ActuatorCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interfaces/msg/actuator_command.hpp"


#ifndef INTERFACES__MSG__DETAIL__ACTUATOR_COMMAND__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__ACTUATOR_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/actuator_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_ActuatorCommand_goals
{
public:
  explicit Init_ActuatorCommand_goals(::interfaces::msg::ActuatorCommand & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::ActuatorCommand goals(::interfaces::msg::ActuatorCommand::_goals_type arg)
  {
    msg_.goals = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::ActuatorCommand msg_;
};

class Init_ActuatorCommand_names
{
public:
  Init_ActuatorCommand_names()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActuatorCommand_goals names(::interfaces::msg::ActuatorCommand::_names_type arg)
  {
    msg_.names = std::move(arg);
    return Init_ActuatorCommand_goals(msg_);
  }

private:
  ::interfaces::msg::ActuatorCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::ActuatorCommand>()
{
  return interfaces::msg::builder::Init_ActuatorCommand_names();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__ACTUATOR_COMMAND__BUILDER_HPP_
