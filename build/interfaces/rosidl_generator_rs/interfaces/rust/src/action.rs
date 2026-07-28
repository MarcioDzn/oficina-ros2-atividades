
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to interfaces__action__ActuatorMove_Goal

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ActuatorMove_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub names: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub amplitudes: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub periods: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub offsets: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub phases: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub samples: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub loops: i32,

}



impl Default for ActuatorMove_Goal {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ActuatorMove_Goal::default())
  }
}

impl rosidl_runtime_rs::Message for ActuatorMove_Goal {
  type RmwMsg = super::action::rmw::ActuatorMove_Goal;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        names: msg.names
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        amplitudes: msg.amplitudes.into(),
        periods: msg.periods.into(),
        offsets: msg.offsets.into(),
        phases: msg.phases.into(),
        samples: msg.samples,
        loops: msg.loops,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        names: msg.names
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        amplitudes: msg.amplitudes.as_slice().into(),
        periods: msg.periods.as_slice().into(),
        offsets: msg.offsets.as_slice().into(),
        phases: msg.phases.as_slice().into(),
      samples: msg.samples,
      loops: msg.loops,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      names: msg.names
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      amplitudes: msg.amplitudes
          .into_iter()
          .collect(),
      periods: msg.periods
          .into_iter()
          .collect(),
      offsets: msg.offsets
          .into_iter()
          .collect(),
      phases: msg.phases
          .into_iter()
          .collect(),
      samples: msg.samples,
      loops: msg.loops,
    }
  }
}


// Corresponds to interfaces__action__ActuatorMove_Result

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ActuatorMove_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for ActuatorMove_Result {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ActuatorMove_Result::default())
  }
}

impl rosidl_runtime_rs::Message for ActuatorMove_Result {
  type RmwMsg = super::action::rmw::ActuatorMove_Result;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to interfaces__action__ActuatorMove_Feedback

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ActuatorMove_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub names: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_positions: Vec<i16>,

}



impl Default for ActuatorMove_Feedback {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ActuatorMove_Feedback::default())
  }
}

impl rosidl_runtime_rs::Message for ActuatorMove_Feedback {
  type RmwMsg = super::action::rmw::ActuatorMove_Feedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        names: msg.names
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        current_positions: msg.current_positions.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        names: msg.names
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        current_positions: msg.current_positions.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      names: msg.names
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      current_positions: msg.current_positions
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to interfaces__action__ActuatorMove_FeedbackMessage

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ActuatorMove_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::action::ActuatorMove_Feedback,

}



impl Default for ActuatorMove_FeedbackMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ActuatorMove_FeedbackMessage::default())
  }
}

impl rosidl_runtime_rs::Message for ActuatorMove_FeedbackMessage {
  type RmwMsg = super::action::rmw::ActuatorMove_FeedbackMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        feedback: super::action::ActuatorMove_Feedback::into_rmw_message(std::borrow::Cow::Owned(msg.feedback)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        feedback: super::action::ActuatorMove_Feedback::into_rmw_message(std::borrow::Cow::Borrowed(&msg.feedback)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      feedback: super::action::ActuatorMove_Feedback::from_rmw_message(msg.feedback),
    }
  }
}






// Corresponds to interfaces__action__ActuatorMove_SendGoal_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ActuatorMove_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::action::ActuatorMove_Goal,

}



impl Default for ActuatorMove_SendGoal_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ActuatorMove_SendGoal_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ActuatorMove_SendGoal_Request {
  type RmwMsg = super::action::rmw::ActuatorMove_SendGoal_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        goal: super::action::ActuatorMove_Goal::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        goal: super::action::ActuatorMove_Goal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      goal: super::action::ActuatorMove_Goal::from_rmw_message(msg.goal),
    }
  }
}


// Corresponds to interfaces__action__ActuatorMove_SendGoal_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ActuatorMove_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for ActuatorMove_SendGoal_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ActuatorMove_SendGoal_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ActuatorMove_SendGoal_Response {
  type RmwMsg = super::action::rmw::ActuatorMove_SendGoal_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accepted: msg.accepted,
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
    }
  }
}


// Corresponds to interfaces__action__ActuatorMove_GetResult_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ActuatorMove_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,

}



impl Default for ActuatorMove_GetResult_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ActuatorMove_GetResult_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ActuatorMove_GetResult_Request {
  type RmwMsg = super::action::rmw::ActuatorMove_GetResult_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
    }
  }
}


// Corresponds to interfaces__action__ActuatorMove_GetResult_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ActuatorMove_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::action::ActuatorMove_Result,

}



impl Default for ActuatorMove_GetResult_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ActuatorMove_GetResult_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ActuatorMove_GetResult_Response {
  type RmwMsg = super::action::rmw::ActuatorMove_GetResult_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        result: super::action::ActuatorMove_Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
        result: super::action::ActuatorMove_Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      result: super::action::ActuatorMove_Result::from_rmw_message(msg.result),
    }
  }
}






#[link(name = "interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__interfaces__action__ActuatorMove_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to interfaces__action__ActuatorMove_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct ActuatorMove_SendGoal;

impl rosidl_runtime_rs::Service for ActuatorMove_SendGoal {
    type Request = ActuatorMove_SendGoal_Request;
    type Response = ActuatorMove_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__interfaces__action__ActuatorMove_SendGoal() }
    }
}




#[link(name = "interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__interfaces__action__ActuatorMove_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to interfaces__action__ActuatorMove_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct ActuatorMove_GetResult;

impl rosidl_runtime_rs::Service for ActuatorMove_GetResult {
    type Request = ActuatorMove_GetResult_Request;
    type Response = ActuatorMove_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__interfaces__action__ActuatorMove_GetResult() }
    }
}






#[link(name = "interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_action_type_support_handle__interfaces__action__ActuatorMove() -> *const std::ffi::c_void;
}

// Corresponds to interfaces__action__ActuatorMove
#[allow(missing_docs, non_camel_case_types)]
pub struct ActuatorMove;

impl rosidl_runtime_rs::Action for ActuatorMove {
  // --- Associated types for client library users ---
  /// The goal message defined in the action definition.
  type Goal = ActuatorMove_Goal;

  /// The result message defined in the action definition.
  type Result = ActuatorMove_Result;

  /// The feedback message defined in the action definition.
  type Feedback = ActuatorMove_Feedback;

  // --- Associated types for client library implementation ---
  /// The feedback message with generic fields which wraps the feedback message.
  type FeedbackMessage = super::action::ActuatorMove_FeedbackMessage;

  /// The send_goal service using a wrapped version of the goal message as a request.
  type SendGoalService = super::action::ActuatorMove_SendGoal;

  /// The generic service to cancel a goal.
  type CancelGoalService = action_msgs::srv::rmw::CancelGoal;

  /// The get_result service using a wrapped version of the result message as a response.
  type GetResultService = super::action::ActuatorMove_GetResult;

  // --- Methods for client library implementation ---
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_action_type_support_handle__interfaces__action__ActuatorMove() }
  }

  fn create_goal_request(
    goal_id: &[u8; 16],
    goal: super::action::rmw::ActuatorMove_Goal,
  ) -> super::action::rmw::ActuatorMove_SendGoal_Request {
   super::action::rmw::ActuatorMove_SendGoal_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
      goal,
    }
  }

  fn split_goal_request(
    request: super::action::rmw::ActuatorMove_SendGoal_Request,
  ) -> (
    [u8; 16],
   super::action::rmw::ActuatorMove_Goal,
  ) {
    (request.goal_id.uuid, request.goal)
  }

  fn create_goal_response(
    accepted: bool,
    stamp: (i32, u32),
  ) -> super::action::rmw::ActuatorMove_SendGoal_Response {
   super::action::rmw::ActuatorMove_SendGoal_Response {
      accepted,
      stamp: builtin_interfaces::msg::rmw::Time {
        sec: stamp.0,
        nanosec: stamp.1,
      },
    }
  }

  fn get_goal_response_accepted(
    response: &super::action::rmw::ActuatorMove_SendGoal_Response,
  ) -> bool {
    response.accepted
  }

  fn get_goal_response_stamp(
    response: &super::action::rmw::ActuatorMove_SendGoal_Response,
  ) -> (i32, u32) {
    (response.stamp.sec, response.stamp.nanosec)
  }

  fn create_feedback_message(
    goal_id: &[u8; 16],
    feedback: super::action::rmw::ActuatorMove_Feedback,
  ) -> super::action::rmw::ActuatorMove_FeedbackMessage {
    let mut message = super::action::rmw::ActuatorMove_FeedbackMessage::default();
    message.goal_id.uuid = *goal_id;
    message.feedback = feedback;
    message
  }

  fn split_feedback_message(
    feedback: super::action::rmw::ActuatorMove_FeedbackMessage,
  ) -> (
    [u8; 16],
   super::action::rmw::ActuatorMove_Feedback,
  ) {
    (feedback.goal_id.uuid, feedback.feedback)
  }

  fn create_result_request(
    goal_id: &[u8; 16],
  ) -> super::action::rmw::ActuatorMove_GetResult_Request {
   super::action::rmw::ActuatorMove_GetResult_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
    }
  }

  fn get_result_request_uuid(
    request: &super::action::rmw::ActuatorMove_GetResult_Request,
  ) -> &[u8; 16] {
    &request.goal_id.uuid
  }

  fn create_result_response(
    status: i8,
    result: super::action::rmw::ActuatorMove_Result,
  ) -> super::action::rmw::ActuatorMove_GetResult_Response {
   super::action::rmw::ActuatorMove_GetResult_Response {
      status,
      result,
    }
  }

  fn split_result_response(
    response: super::action::rmw::ActuatorMove_GetResult_Response
  ) -> (
    i8,
   super::action::rmw::ActuatorMove_Result,
  ) {
    (response.status, response.result)
  }
}


