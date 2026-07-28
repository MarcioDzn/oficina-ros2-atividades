// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:action/ActuatorMove.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interfaces/action/actuator_move.hpp"


#ifndef INTERFACES__ACTION__DETAIL__ACTUATOR_MOVE__STRUCT_HPP_
#define INTERFACES__ACTION__DETAIL__ACTUATOR_MOVE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interfaces__action__ActuatorMove_Goal __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__action__ActuatorMove_Goal __declspec(deprecated)
#endif

namespace interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ActuatorMove_Goal_
{
  using Type = ActuatorMove_Goal_<ContainerAllocator>;

  explicit ActuatorMove_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->samples = 0l;
      this->loops = 0l;
    }
  }

  explicit ActuatorMove_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->samples = 0l;
      this->loops = 0l;
    }
  }

  // field types and members
  using _names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _names_type names;
  using _amplitudes_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _amplitudes_type amplitudes;
  using _periods_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _periods_type periods;
  using _offsets_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _offsets_type offsets;
  using _phases_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _phases_type phases;
  using _samples_type =
    int32_t;
  _samples_type samples;
  using _loops_type =
    int32_t;
  _loops_type loops;

  // setters for named parameter idiom
  Type & set__names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->names = _arg;
    return *this;
  }
  Type & set__amplitudes(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->amplitudes = _arg;
    return *this;
  }
  Type & set__periods(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->periods = _arg;
    return *this;
  }
  Type & set__offsets(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->offsets = _arg;
    return *this;
  }
  Type & set__phases(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->phases = _arg;
    return *this;
  }
  Type & set__samples(
    const int32_t & _arg)
  {
    this->samples = _arg;
    return *this;
  }
  Type & set__loops(
    const int32_t & _arg)
  {
    this->loops = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::action::ActuatorMove_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::action::ActuatorMove_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::action::ActuatorMove_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::action::ActuatorMove_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::action::ActuatorMove_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::ActuatorMove_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::action::ActuatorMove_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::ActuatorMove_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::action::ActuatorMove_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::action::ActuatorMove_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__action__ActuatorMove_Goal
    std::shared_ptr<interfaces::action::ActuatorMove_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__action__ActuatorMove_Goal
    std::shared_ptr<interfaces::action::ActuatorMove_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActuatorMove_Goal_ & other) const
  {
    if (this->names != other.names) {
      return false;
    }
    if (this->amplitudes != other.amplitudes) {
      return false;
    }
    if (this->periods != other.periods) {
      return false;
    }
    if (this->offsets != other.offsets) {
      return false;
    }
    if (this->phases != other.phases) {
      return false;
    }
    if (this->samples != other.samples) {
      return false;
    }
    if (this->loops != other.loops) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActuatorMove_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActuatorMove_Goal_

// alias to use template instance with default allocator
using ActuatorMove_Goal =
  interfaces::action::ActuatorMove_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace interfaces


#ifndef _WIN32
# define DEPRECATED__interfaces__action__ActuatorMove_Result __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__action__ActuatorMove_Result __declspec(deprecated)
#endif

namespace interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ActuatorMove_Result_
{
  using Type = ActuatorMove_Result_<ContainerAllocator>;

  explicit ActuatorMove_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit ActuatorMove_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::action::ActuatorMove_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::action::ActuatorMove_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::action::ActuatorMove_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::action::ActuatorMove_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::action::ActuatorMove_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::ActuatorMove_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::action::ActuatorMove_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::ActuatorMove_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::action::ActuatorMove_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::action::ActuatorMove_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__action__ActuatorMove_Result
    std::shared_ptr<interfaces::action::ActuatorMove_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__action__ActuatorMove_Result
    std::shared_ptr<interfaces::action::ActuatorMove_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActuatorMove_Result_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActuatorMove_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActuatorMove_Result_

// alias to use template instance with default allocator
using ActuatorMove_Result =
  interfaces::action::ActuatorMove_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace interfaces


#ifndef _WIN32
# define DEPRECATED__interfaces__action__ActuatorMove_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__action__ActuatorMove_Feedback __declspec(deprecated)
#endif

namespace interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ActuatorMove_Feedback_
{
  using Type = ActuatorMove_Feedback_<ContainerAllocator>;

  explicit ActuatorMove_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ActuatorMove_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _names_type names;
  using _current_positions_type =
    std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>>;
  _current_positions_type current_positions;

  // setters for named parameter idiom
  Type & set__names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->names = _arg;
    return *this;
  }
  Type & set__current_positions(
    const std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>> & _arg)
  {
    this->current_positions = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::action::ActuatorMove_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::action::ActuatorMove_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::action::ActuatorMove_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::action::ActuatorMove_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::action::ActuatorMove_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::ActuatorMove_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::action::ActuatorMove_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::ActuatorMove_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::action::ActuatorMove_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::action::ActuatorMove_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__action__ActuatorMove_Feedback
    std::shared_ptr<interfaces::action::ActuatorMove_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__action__ActuatorMove_Feedback
    std::shared_ptr<interfaces::action::ActuatorMove_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActuatorMove_Feedback_ & other) const
  {
    if (this->names != other.names) {
      return false;
    }
    if (this->current_positions != other.current_positions) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActuatorMove_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActuatorMove_Feedback_

// alias to use template instance with default allocator
using ActuatorMove_Feedback =
  interfaces::action::ActuatorMove_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace interfaces


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "interfaces/action/detail/actuator_move__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interfaces__action__ActuatorMove_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__action__ActuatorMove_SendGoal_Request __declspec(deprecated)
#endif

namespace interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ActuatorMove_SendGoal_Request_
{
  using Type = ActuatorMove_SendGoal_Request_<ContainerAllocator>;

  explicit ActuatorMove_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit ActuatorMove_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    interfaces::action::ActuatorMove_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const interfaces::action::ActuatorMove_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::action::ActuatorMove_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::action::ActuatorMove_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::action::ActuatorMove_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::action::ActuatorMove_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::action::ActuatorMove_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::ActuatorMove_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::action::ActuatorMove_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::ActuatorMove_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::action::ActuatorMove_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::action::ActuatorMove_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__action__ActuatorMove_SendGoal_Request
    std::shared_ptr<interfaces::action::ActuatorMove_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__action__ActuatorMove_SendGoal_Request
    std::shared_ptr<interfaces::action::ActuatorMove_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActuatorMove_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActuatorMove_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActuatorMove_SendGoal_Request_

// alias to use template instance with default allocator
using ActuatorMove_SendGoal_Request =
  interfaces::action::ActuatorMove_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace interfaces


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interfaces__action__ActuatorMove_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__action__ActuatorMove_SendGoal_Response __declspec(deprecated)
#endif

namespace interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ActuatorMove_SendGoal_Response_
{
  using Type = ActuatorMove_SendGoal_Response_<ContainerAllocator>;

  explicit ActuatorMove_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit ActuatorMove_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::action::ActuatorMove_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::action::ActuatorMove_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::action::ActuatorMove_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::action::ActuatorMove_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::action::ActuatorMove_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::ActuatorMove_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::action::ActuatorMove_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::ActuatorMove_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::action::ActuatorMove_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::action::ActuatorMove_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__action__ActuatorMove_SendGoal_Response
    std::shared_ptr<interfaces::action::ActuatorMove_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__action__ActuatorMove_SendGoal_Response
    std::shared_ptr<interfaces::action::ActuatorMove_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActuatorMove_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActuatorMove_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActuatorMove_SendGoal_Response_

// alias to use template instance with default allocator
using ActuatorMove_SendGoal_Response =
  interfaces::action::ActuatorMove_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interfaces__action__ActuatorMove_SendGoal_Event __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__action__ActuatorMove_SendGoal_Event __declspec(deprecated)
#endif

namespace interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ActuatorMove_SendGoal_Event_
{
  using Type = ActuatorMove_SendGoal_Event_<ContainerAllocator>;

  explicit ActuatorMove_SendGoal_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit ActuatorMove_SendGoal_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<interfaces::action::ActuatorMove_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<interfaces::action::ActuatorMove_SendGoal_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<interfaces::action::ActuatorMove_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<interfaces::action::ActuatorMove_SendGoal_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<interfaces::action::ActuatorMove_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<interfaces::action::ActuatorMove_SendGoal_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<interfaces::action::ActuatorMove_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<interfaces::action::ActuatorMove_SendGoal_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::action::ActuatorMove_SendGoal_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::action::ActuatorMove_SendGoal_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::action::ActuatorMove_SendGoal_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::action::ActuatorMove_SendGoal_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::action::ActuatorMove_SendGoal_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::ActuatorMove_SendGoal_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::action::ActuatorMove_SendGoal_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::ActuatorMove_SendGoal_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::action::ActuatorMove_SendGoal_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::action::ActuatorMove_SendGoal_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__action__ActuatorMove_SendGoal_Event
    std::shared_ptr<interfaces::action::ActuatorMove_SendGoal_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__action__ActuatorMove_SendGoal_Event
    std::shared_ptr<interfaces::action::ActuatorMove_SendGoal_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActuatorMove_SendGoal_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActuatorMove_SendGoal_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActuatorMove_SendGoal_Event_

// alias to use template instance with default allocator
using ActuatorMove_SendGoal_Event =
  interfaces::action::ActuatorMove_SendGoal_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace interfaces

namespace interfaces
{

namespace action
{

struct ActuatorMove_SendGoal
{
  using Request = interfaces::action::ActuatorMove_SendGoal_Request;
  using Response = interfaces::action::ActuatorMove_SendGoal_Response;
  using Event = interfaces::action::ActuatorMove_SendGoal_Event;
};

}  // namespace action

}  // namespace interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interfaces__action__ActuatorMove_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__action__ActuatorMove_GetResult_Request __declspec(deprecated)
#endif

namespace interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ActuatorMove_GetResult_Request_
{
  using Type = ActuatorMove_GetResult_Request_<ContainerAllocator>;

  explicit ActuatorMove_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit ActuatorMove_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::action::ActuatorMove_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::action::ActuatorMove_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::action::ActuatorMove_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::action::ActuatorMove_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::action::ActuatorMove_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::ActuatorMove_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::action::ActuatorMove_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::ActuatorMove_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::action::ActuatorMove_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::action::ActuatorMove_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__action__ActuatorMove_GetResult_Request
    std::shared_ptr<interfaces::action::ActuatorMove_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__action__ActuatorMove_GetResult_Request
    std::shared_ptr<interfaces::action::ActuatorMove_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActuatorMove_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActuatorMove_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActuatorMove_GetResult_Request_

// alias to use template instance with default allocator
using ActuatorMove_GetResult_Request =
  interfaces::action::ActuatorMove_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace interfaces


// Include directives for member types
// Member 'result'
// already included above
// #include "interfaces/action/detail/actuator_move__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interfaces__action__ActuatorMove_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__action__ActuatorMove_GetResult_Response __declspec(deprecated)
#endif

namespace interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ActuatorMove_GetResult_Response_
{
  using Type = ActuatorMove_GetResult_Response_<ContainerAllocator>;

  explicit ActuatorMove_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit ActuatorMove_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    interfaces::action::ActuatorMove_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const interfaces::action::ActuatorMove_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::action::ActuatorMove_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::action::ActuatorMove_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::action::ActuatorMove_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::action::ActuatorMove_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::action::ActuatorMove_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::ActuatorMove_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::action::ActuatorMove_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::ActuatorMove_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::action::ActuatorMove_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::action::ActuatorMove_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__action__ActuatorMove_GetResult_Response
    std::shared_ptr<interfaces::action::ActuatorMove_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__action__ActuatorMove_GetResult_Response
    std::shared_ptr<interfaces::action::ActuatorMove_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActuatorMove_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActuatorMove_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActuatorMove_GetResult_Response_

// alias to use template instance with default allocator
using ActuatorMove_GetResult_Response =
  interfaces::action::ActuatorMove_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace interfaces


// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interfaces__action__ActuatorMove_GetResult_Event __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__action__ActuatorMove_GetResult_Event __declspec(deprecated)
#endif

namespace interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ActuatorMove_GetResult_Event_
{
  using Type = ActuatorMove_GetResult_Event_<ContainerAllocator>;

  explicit ActuatorMove_GetResult_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit ActuatorMove_GetResult_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<interfaces::action::ActuatorMove_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<interfaces::action::ActuatorMove_GetResult_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<interfaces::action::ActuatorMove_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<interfaces::action::ActuatorMove_GetResult_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<interfaces::action::ActuatorMove_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<interfaces::action::ActuatorMove_GetResult_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<interfaces::action::ActuatorMove_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<interfaces::action::ActuatorMove_GetResult_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::action::ActuatorMove_GetResult_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::action::ActuatorMove_GetResult_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::action::ActuatorMove_GetResult_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::action::ActuatorMove_GetResult_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::action::ActuatorMove_GetResult_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::ActuatorMove_GetResult_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::action::ActuatorMove_GetResult_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::ActuatorMove_GetResult_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::action::ActuatorMove_GetResult_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::action::ActuatorMove_GetResult_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__action__ActuatorMove_GetResult_Event
    std::shared_ptr<interfaces::action::ActuatorMove_GetResult_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__action__ActuatorMove_GetResult_Event
    std::shared_ptr<interfaces::action::ActuatorMove_GetResult_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActuatorMove_GetResult_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActuatorMove_GetResult_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActuatorMove_GetResult_Event_

// alias to use template instance with default allocator
using ActuatorMove_GetResult_Event =
  interfaces::action::ActuatorMove_GetResult_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace interfaces

namespace interfaces
{

namespace action
{

struct ActuatorMove_GetResult
{
  using Request = interfaces::action::ActuatorMove_GetResult_Request;
  using Response = interfaces::action::ActuatorMove_GetResult_Response;
  using Event = interfaces::action::ActuatorMove_GetResult_Event;
};

}  // namespace action

}  // namespace interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "interfaces/action/detail/actuator_move__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interfaces__action__ActuatorMove_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__action__ActuatorMove_FeedbackMessage __declspec(deprecated)
#endif

namespace interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ActuatorMove_FeedbackMessage_
{
  using Type = ActuatorMove_FeedbackMessage_<ContainerAllocator>;

  explicit ActuatorMove_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit ActuatorMove_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    interfaces::action::ActuatorMove_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const interfaces::action::ActuatorMove_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::action::ActuatorMove_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::action::ActuatorMove_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::action::ActuatorMove_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::action::ActuatorMove_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::action::ActuatorMove_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::ActuatorMove_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::action::ActuatorMove_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::action::ActuatorMove_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::action::ActuatorMove_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::action::ActuatorMove_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__action__ActuatorMove_FeedbackMessage
    std::shared_ptr<interfaces::action::ActuatorMove_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__action__ActuatorMove_FeedbackMessage
    std::shared_ptr<interfaces::action::ActuatorMove_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActuatorMove_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActuatorMove_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActuatorMove_FeedbackMessage_

// alias to use template instance with default allocator
using ActuatorMove_FeedbackMessage =
  interfaces::action::ActuatorMove_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace interfaces

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace interfaces
{

namespace action
{

struct ActuatorMove
{
  /// The goal message defined in the action definition.
  using Goal = interfaces::action::ActuatorMove_Goal;
  /// The result message defined in the action definition.
  using Result = interfaces::action::ActuatorMove_Result;
  /// The feedback message defined in the action definition.
  using Feedback = interfaces::action::ActuatorMove_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = interfaces::action::ActuatorMove_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = interfaces::action::ActuatorMove_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = interfaces::action::ActuatorMove_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct ActuatorMove ActuatorMove;

}  // namespace action

}  // namespace interfaces

#endif  // INTERFACES__ACTION__DETAIL__ACTUATOR_MOVE__STRUCT_HPP_
