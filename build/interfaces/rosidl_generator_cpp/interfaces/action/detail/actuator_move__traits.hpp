// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:action/ActuatorMove.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interfaces/action/actuator_move.hpp"


#ifndef INTERFACES__ACTION__DETAIL__ACTUATOR_MOVE__TRAITS_HPP_
#define INTERFACES__ACTION__DETAIL__ACTUATOR_MOVE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interfaces/action/detail/actuator_move__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ActuatorMove_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: names
  {
    if (msg.names.size() == 0) {
      out << "names: []";
    } else {
      out << "names: [";
      size_t pending_items = msg.names.size();
      for (auto item : msg.names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: amplitudes
  {
    if (msg.amplitudes.size() == 0) {
      out << "amplitudes: []";
    } else {
      out << "amplitudes: [";
      size_t pending_items = msg.amplitudes.size();
      for (auto item : msg.amplitudes) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: periods
  {
    if (msg.periods.size() == 0) {
      out << "periods: []";
    } else {
      out << "periods: [";
      size_t pending_items = msg.periods.size();
      for (auto item : msg.periods) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: offsets
  {
    if (msg.offsets.size() == 0) {
      out << "offsets: []";
    } else {
      out << "offsets: [";
      size_t pending_items = msg.offsets.size();
      for (auto item : msg.offsets) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: phases
  {
    if (msg.phases.size() == 0) {
      out << "phases: []";
    } else {
      out << "phases: [";
      size_t pending_items = msg.phases.size();
      for (auto item : msg.phases) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: samples
  {
    out << "samples: ";
    rosidl_generator_traits::value_to_yaml(msg.samples, out);
    out << ", ";
  }

  // member: loops
  {
    out << "loops: ";
    rosidl_generator_traits::value_to_yaml(msg.loops, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ActuatorMove_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.names.size() == 0) {
      out << "names: []\n";
    } else {
      out << "names:\n";
      for (auto item : msg.names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: amplitudes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.amplitudes.size() == 0) {
      out << "amplitudes: []\n";
    } else {
      out << "amplitudes:\n";
      for (auto item : msg.amplitudes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: periods
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.periods.size() == 0) {
      out << "periods: []\n";
    } else {
      out << "periods:\n";
      for (auto item : msg.periods) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: offsets
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.offsets.size() == 0) {
      out << "offsets: []\n";
    } else {
      out << "offsets:\n";
      for (auto item : msg.offsets) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: phases
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.phases.size() == 0) {
      out << "phases: []\n";
    } else {
      out << "phases:\n";
      for (auto item : msg.phases) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: samples
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "samples: ";
    rosidl_generator_traits::value_to_yaml(msg.samples, out);
    out << "\n";
  }

  // member: loops
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "loops: ";
    rosidl_generator_traits::value_to_yaml(msg.loops, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ActuatorMove_Goal & msg, bool use_flow_style = false)
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

}  // namespace interfaces

namespace rosidl_generator_traits
{

[[deprecated("use interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces::action::ActuatorMove_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::action::ActuatorMove_Goal & msg)
{
  return interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::action::ActuatorMove_Goal>()
{
  return "interfaces::action::ActuatorMove_Goal";
}

template<>
inline const char * name<interfaces::action::ActuatorMove_Goal>()
{
  return "interfaces/action/ActuatorMove_Goal";
}

template<>
struct has_fixed_size<interfaces::action::ActuatorMove_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::action::ActuatorMove_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::action::ActuatorMove_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ActuatorMove_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
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
  const ActuatorMove_Result & msg,
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

inline std::string to_yaml(const ActuatorMove_Result & msg, bool use_flow_style = false)
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

}  // namespace interfaces

namespace rosidl_generator_traits
{

[[deprecated("use interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces::action::ActuatorMove_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::action::ActuatorMove_Result & msg)
{
  return interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::action::ActuatorMove_Result>()
{
  return "interfaces::action::ActuatorMove_Result";
}

template<>
inline const char * name<interfaces::action::ActuatorMove_Result>()
{
  return "interfaces/action/ActuatorMove_Result";
}

template<>
struct has_fixed_size<interfaces::action::ActuatorMove_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::action::ActuatorMove_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::action::ActuatorMove_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ActuatorMove_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: names
  {
    if (msg.names.size() == 0) {
      out << "names: []";
    } else {
      out << "names: [";
      size_t pending_items = msg.names.size();
      for (auto item : msg.names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: current_positions
  {
    if (msg.current_positions.size() == 0) {
      out << "current_positions: []";
    } else {
      out << "current_positions: [";
      size_t pending_items = msg.current_positions.size();
      for (auto item : msg.current_positions) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ActuatorMove_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.names.size() == 0) {
      out << "names: []\n";
    } else {
      out << "names:\n";
      for (auto item : msg.names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: current_positions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.current_positions.size() == 0) {
      out << "current_positions: []\n";
    } else {
      out << "current_positions:\n";
      for (auto item : msg.current_positions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ActuatorMove_Feedback & msg, bool use_flow_style = false)
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

}  // namespace interfaces

namespace rosidl_generator_traits
{

[[deprecated("use interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces::action::ActuatorMove_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::action::ActuatorMove_Feedback & msg)
{
  return interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::action::ActuatorMove_Feedback>()
{
  return "interfaces::action::ActuatorMove_Feedback";
}

template<>
inline const char * name<interfaces::action::ActuatorMove_Feedback>()
{
  return "interfaces/action/ActuatorMove_Feedback";
}

template<>
struct has_fixed_size<interfaces::action::ActuatorMove_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::action::ActuatorMove_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::action::ActuatorMove_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "interfaces/action/detail/actuator_move__traits.hpp"

namespace interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ActuatorMove_SendGoal_Request & msg,
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
  const ActuatorMove_SendGoal_Request & msg,
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

inline std::string to_yaml(const ActuatorMove_SendGoal_Request & msg, bool use_flow_style = false)
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

}  // namespace interfaces

namespace rosidl_generator_traits
{

[[deprecated("use interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces::action::ActuatorMove_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::action::ActuatorMove_SendGoal_Request & msg)
{
  return interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::action::ActuatorMove_SendGoal_Request>()
{
  return "interfaces::action::ActuatorMove_SendGoal_Request";
}

template<>
inline const char * name<interfaces::action::ActuatorMove_SendGoal_Request>()
{
  return "interfaces/action/ActuatorMove_SendGoal_Request";
}

template<>
struct has_fixed_size<interfaces::action::ActuatorMove_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<interfaces::action::ActuatorMove_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<interfaces::action::ActuatorMove_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<interfaces::action::ActuatorMove_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<interfaces::action::ActuatorMove_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ActuatorMove_SendGoal_Response & msg,
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
  const ActuatorMove_SendGoal_Response & msg,
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

inline std::string to_yaml(const ActuatorMove_SendGoal_Response & msg, bool use_flow_style = false)
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

}  // namespace interfaces

namespace rosidl_generator_traits
{

[[deprecated("use interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces::action::ActuatorMove_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::action::ActuatorMove_SendGoal_Response & msg)
{
  return interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::action::ActuatorMove_SendGoal_Response>()
{
  return "interfaces::action::ActuatorMove_SendGoal_Response";
}

template<>
inline const char * name<interfaces::action::ActuatorMove_SendGoal_Response>()
{
  return "interfaces/action/ActuatorMove_SendGoal_Response";
}

template<>
struct has_fixed_size<interfaces::action::ActuatorMove_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<interfaces::action::ActuatorMove_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<interfaces::action::ActuatorMove_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ActuatorMove_SendGoal_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ActuatorMove_SendGoal_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ActuatorMove_SendGoal_Event & msg, bool use_flow_style = false)
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

}  // namespace interfaces

namespace rosidl_generator_traits
{

[[deprecated("use interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces::action::ActuatorMove_SendGoal_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::action::ActuatorMove_SendGoal_Event & msg)
{
  return interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::action::ActuatorMove_SendGoal_Event>()
{
  return "interfaces::action::ActuatorMove_SendGoal_Event";
}

template<>
inline const char * name<interfaces::action::ActuatorMove_SendGoal_Event>()
{
  return "interfaces/action/ActuatorMove_SendGoal_Event";
}

template<>
struct has_fixed_size<interfaces::action::ActuatorMove_SendGoal_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::action::ActuatorMove_SendGoal_Event>
  : std::integral_constant<bool, has_bounded_size<interfaces::action::ActuatorMove_SendGoal_Request>::value && has_bounded_size<interfaces::action::ActuatorMove_SendGoal_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<interfaces::action::ActuatorMove_SendGoal_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::action::ActuatorMove_SendGoal>()
{
  return "interfaces::action::ActuatorMove_SendGoal";
}

template<>
inline const char * name<interfaces::action::ActuatorMove_SendGoal>()
{
  return "interfaces/action/ActuatorMove_SendGoal";
}

template<>
struct has_fixed_size<interfaces::action::ActuatorMove_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<interfaces::action::ActuatorMove_SendGoal_Request>::value &&
    has_fixed_size<interfaces::action::ActuatorMove_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<interfaces::action::ActuatorMove_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<interfaces::action::ActuatorMove_SendGoal_Request>::value &&
    has_bounded_size<interfaces::action::ActuatorMove_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<interfaces::action::ActuatorMove_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<interfaces::action::ActuatorMove_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interfaces::action::ActuatorMove_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ActuatorMove_GetResult_Request & msg,
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
  const ActuatorMove_GetResult_Request & msg,
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

inline std::string to_yaml(const ActuatorMove_GetResult_Request & msg, bool use_flow_style = false)
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

}  // namespace interfaces

namespace rosidl_generator_traits
{

[[deprecated("use interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces::action::ActuatorMove_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::action::ActuatorMove_GetResult_Request & msg)
{
  return interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::action::ActuatorMove_GetResult_Request>()
{
  return "interfaces::action::ActuatorMove_GetResult_Request";
}

template<>
inline const char * name<interfaces::action::ActuatorMove_GetResult_Request>()
{
  return "interfaces/action/ActuatorMove_GetResult_Request";
}

template<>
struct has_fixed_size<interfaces::action::ActuatorMove_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<interfaces::action::ActuatorMove_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<interfaces::action::ActuatorMove_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "interfaces/action/detail/actuator_move__traits.hpp"

namespace interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ActuatorMove_GetResult_Response & msg,
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
  const ActuatorMove_GetResult_Response & msg,
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

inline std::string to_yaml(const ActuatorMove_GetResult_Response & msg, bool use_flow_style = false)
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

}  // namespace interfaces

namespace rosidl_generator_traits
{

[[deprecated("use interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces::action::ActuatorMove_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::action::ActuatorMove_GetResult_Response & msg)
{
  return interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::action::ActuatorMove_GetResult_Response>()
{
  return "interfaces::action::ActuatorMove_GetResult_Response";
}

template<>
inline const char * name<interfaces::action::ActuatorMove_GetResult_Response>()
{
  return "interfaces/action/ActuatorMove_GetResult_Response";
}

template<>
struct has_fixed_size<interfaces::action::ActuatorMove_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<interfaces::action::ActuatorMove_Result>::value> {};

template<>
struct has_bounded_size<interfaces::action::ActuatorMove_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<interfaces::action::ActuatorMove_Result>::value> {};

template<>
struct is_message<interfaces::action::ActuatorMove_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ActuatorMove_GetResult_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ActuatorMove_GetResult_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ActuatorMove_GetResult_Event & msg, bool use_flow_style = false)
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

}  // namespace interfaces

namespace rosidl_generator_traits
{

[[deprecated("use interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces::action::ActuatorMove_GetResult_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::action::ActuatorMove_GetResult_Event & msg)
{
  return interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::action::ActuatorMove_GetResult_Event>()
{
  return "interfaces::action::ActuatorMove_GetResult_Event";
}

template<>
inline const char * name<interfaces::action::ActuatorMove_GetResult_Event>()
{
  return "interfaces/action/ActuatorMove_GetResult_Event";
}

template<>
struct has_fixed_size<interfaces::action::ActuatorMove_GetResult_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::action::ActuatorMove_GetResult_Event>
  : std::integral_constant<bool, has_bounded_size<interfaces::action::ActuatorMove_GetResult_Request>::value && has_bounded_size<interfaces::action::ActuatorMove_GetResult_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<interfaces::action::ActuatorMove_GetResult_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::action::ActuatorMove_GetResult>()
{
  return "interfaces::action::ActuatorMove_GetResult";
}

template<>
inline const char * name<interfaces::action::ActuatorMove_GetResult>()
{
  return "interfaces/action/ActuatorMove_GetResult";
}

template<>
struct has_fixed_size<interfaces::action::ActuatorMove_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<interfaces::action::ActuatorMove_GetResult_Request>::value &&
    has_fixed_size<interfaces::action::ActuatorMove_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<interfaces::action::ActuatorMove_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<interfaces::action::ActuatorMove_GetResult_Request>::value &&
    has_bounded_size<interfaces::action::ActuatorMove_GetResult_Response>::value
  >
{
};

template<>
struct is_service<interfaces::action::ActuatorMove_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<interfaces::action::ActuatorMove_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interfaces::action::ActuatorMove_GetResult_Response>
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
// #include "interfaces/action/detail/actuator_move__traits.hpp"

namespace interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ActuatorMove_FeedbackMessage & msg,
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
  const ActuatorMove_FeedbackMessage & msg,
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

inline std::string to_yaml(const ActuatorMove_FeedbackMessage & msg, bool use_flow_style = false)
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

}  // namespace interfaces

namespace rosidl_generator_traits
{

[[deprecated("use interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces::action::ActuatorMove_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::action::ActuatorMove_FeedbackMessage & msg)
{
  return interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::action::ActuatorMove_FeedbackMessage>()
{
  return "interfaces::action::ActuatorMove_FeedbackMessage";
}

template<>
inline const char * name<interfaces::action::ActuatorMove_FeedbackMessage>()
{
  return "interfaces/action/ActuatorMove_FeedbackMessage";
}

template<>
struct has_fixed_size<interfaces::action::ActuatorMove_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<interfaces::action::ActuatorMove_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<interfaces::action::ActuatorMove_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<interfaces::action::ActuatorMove_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<interfaces::action::ActuatorMove_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<interfaces::action::ActuatorMove>
  : std::true_type
{
};

template<>
struct is_action_goal<interfaces::action::ActuatorMove_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<interfaces::action::ActuatorMove_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<interfaces::action::ActuatorMove_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // INTERFACES__ACTION__DETAIL__ACTUATOR_MOVE__TRAITS_HPP_
