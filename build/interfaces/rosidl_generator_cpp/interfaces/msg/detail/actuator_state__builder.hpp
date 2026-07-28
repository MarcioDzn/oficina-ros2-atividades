// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/ActuatorState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interfaces/msg/actuator_state.hpp"


#ifndef INTERFACES__MSG__DETAIL__ACTUATOR_STATE__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__ACTUATOR_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/actuator_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_ActuatorState_positions
{
public:
  explicit Init_ActuatorState_positions(::interfaces::msg::ActuatorState & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::ActuatorState positions(::interfaces::msg::ActuatorState::_positions_type arg)
  {
    msg_.positions = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::ActuatorState msg_;
};

class Init_ActuatorState_names
{
public:
  Init_ActuatorState_names()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActuatorState_positions names(::interfaces::msg::ActuatorState::_names_type arg)
  {
    msg_.names = std::move(arg);
    return Init_ActuatorState_positions(msg_);
  }

private:
  ::interfaces::msg::ActuatorState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::ActuatorState>()
{
  return interfaces::msg::builder::Init_ActuatorState_names();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__ACTUATOR_STATE__BUILDER_HPP_
