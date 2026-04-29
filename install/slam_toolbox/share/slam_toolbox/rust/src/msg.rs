#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to slam_toolbox__msg__LocalizedLaserScan
/// Single scan from a planar laser range-finder and the pose of the robot

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LocalizedLaserScan {

    // This member is not documented.
    #[allow(missing_docs)]
    pub scan: sensor_msgs::msg::LaserScan,

    /// Scanner pose in robot base_frame
    pub scanner_offset: geometry_msgs::msg::TransformStamped,

    /// Robot base_frame pose in a global (map) frame
    pub pose: geometry_msgs::msg::PoseWithCovarianceStamped,

}



impl Default for LocalizedLaserScan {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::LocalizedLaserScan::default())
  }
}

impl rosidl_runtime_rs::Message for LocalizedLaserScan {
  type RmwMsg = super::msg::rmw::LocalizedLaserScan;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        scan: sensor_msgs::msg::LaserScan::into_rmw_message(std::borrow::Cow::Owned(msg.scan)).into_owned(),
        scanner_offset: geometry_msgs::msg::TransformStamped::into_rmw_message(std::borrow::Cow::Owned(msg.scanner_offset)).into_owned(),
        pose: geometry_msgs::msg::PoseWithCovarianceStamped::into_rmw_message(std::borrow::Cow::Owned(msg.pose)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        scan: sensor_msgs::msg::LaserScan::into_rmw_message(std::borrow::Cow::Borrowed(&msg.scan)).into_owned(),
        scanner_offset: geometry_msgs::msg::TransformStamped::into_rmw_message(std::borrow::Cow::Borrowed(&msg.scanner_offset)).into_owned(),
        pose: geometry_msgs::msg::PoseWithCovarianceStamped::into_rmw_message(std::borrow::Cow::Borrowed(&msg.pose)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      scan: sensor_msgs::msg::LaserScan::from_rmw_message(msg.scan),
      scanner_offset: geometry_msgs::msg::TransformStamped::from_rmw_message(msg.scanner_offset),
      pose: geometry_msgs::msg::PoseWithCovarianceStamped::from_rmw_message(msg.pose),
    }
  }
}


// Corresponds to slam_toolbox__msg__NewNodeEvent

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NewNodeEvent {

    // This member is not documented.
    #[allow(missing_docs)]
    pub new_node_id: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pose: geometry_msgs::msg::Pose,


    // This member is not documented.
    #[allow(missing_docs)]
    pub edge: super::msg::GraphEdge,

}



impl Default for NewNodeEvent {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::NewNodeEvent::default())
  }
}

impl rosidl_runtime_rs::Message for NewNodeEvent {
  type RmwMsg = super::msg::rmw::NewNodeEvent;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        new_node_id: msg.new_node_id,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
        pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(msg.pose)).into_owned(),
        edge: super::msg::GraphEdge::into_rmw_message(std::borrow::Cow::Owned(msg.edge)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      new_node_id: msg.new_node_id,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
        pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(&msg.pose)).into_owned(),
        edge: super::msg::GraphEdge::into_rmw_message(std::borrow::Cow::Borrowed(&msg.edge)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      new_node_id: msg.new_node_id,
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
      pose: geometry_msgs::msg::Pose::from_rmw_message(msg.pose),
      edge: super::msg::GraphEdge::from_rmw_message(msg.edge),
    }
  }
}


// Corresponds to slam_toolbox__msg__LoopClosureEvent

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LoopClosureEvent {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for LoopClosureEvent {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::LoopClosureEvent::default())
  }
}

impl rosidl_runtime_rs::Message for LoopClosureEvent {
  type RmwMsg = super::msg::rmw::LoopClosureEvent;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
    }
  }
}


// Corresponds to slam_toolbox__msg__GraphNode

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GraphNode {

    // This member is not documented.
    #[allow(missing_docs)]
    pub node_id: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pose: geometry_msgs::msg::Pose,

}



impl Default for GraphNode {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::GraphNode::default())
  }
}

impl rosidl_runtime_rs::Message for GraphNode {
  type RmwMsg = super::msg::rmw::GraphNode;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        node_id: msg.node_id,
        pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(msg.pose)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      node_id: msg.node_id,
        pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(&msg.pose)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      node_id: msg.node_id,
      pose: geometry_msgs::msg::Pose::from_rmw_message(msg.pose),
    }
  }
}


// Corresponds to slam_toolbox__msg__GraphEdge

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GraphEdge {

    // This member is not documented.
    #[allow(missing_docs)]
    pub source_id: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_id: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub relative_pose: geometry_msgs::msg::Pose,


    // This member is not documented.
    #[allow(missing_docs)]
    pub covariance: [f64; 9],

}



impl Default for GraphEdge {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::GraphEdge::default())
  }
}

impl rosidl_runtime_rs::Message for GraphEdge {
  type RmwMsg = super::msg::rmw::GraphEdge;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        source_id: msg.source_id,
        target_id: msg.target_id,
        relative_pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(msg.relative_pose)).into_owned(),
        covariance: msg.covariance,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      source_id: msg.source_id,
      target_id: msg.target_id,
        relative_pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(&msg.relative_pose)).into_owned(),
        covariance: msg.covariance,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      source_id: msg.source_id,
      target_id: msg.target_id,
      relative_pose: geometry_msgs::msg::Pose::from_rmw_message(msg.relative_pose),
      covariance: msg.covariance,
    }
  }
}


// Corresponds to slam_toolbox__msg__PoseGraph

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PoseGraph {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub nodes: Vec<super::msg::GraphNode>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub edges: Vec<super::msg::GraphEdge>,

}



impl Default for PoseGraph {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PoseGraph::default())
  }
}

impl rosidl_runtime_rs::Message for PoseGraph {
  type RmwMsg = super::msg::rmw::PoseGraph;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        nodes: msg.nodes
          .into_iter()
          .map(|elem| super::msg::GraphNode::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        edges: msg.edges
          .into_iter()
          .map(|elem| super::msg::GraphEdge::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        nodes: msg.nodes
          .iter()
          .map(|elem| super::msg::GraphNode::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        edges: msg.edges
          .iter()
          .map(|elem| super::msg::GraphEdge::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      nodes: msg.nodes
          .into_iter()
          .map(super::msg::GraphNode::from_rmw_message)
          .collect(),
      edges: msg.edges
          .into_iter()
          .map(super::msg::GraphEdge::from_rmw_message)
          .collect(),
    }
  }
}


