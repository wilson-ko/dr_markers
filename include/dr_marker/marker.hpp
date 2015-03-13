#pragma once

#include <dr_eigen/eigen.hpp>
#include <visualization_msgs/Marker.h>

namespace dr {

/// Creates a spherical marker
visualization_msgs::Marker createSphereMarker(
	std::string frame_id,                           ///< The frame id in which the position is defined
	Eigen::Vector3d position,                       ///< The position of the marker in frame_id
	double radius = 0.1,                            ///< The radius of the sphere
	std::string ns = "",                            ///< The namespace of the marker
	ros::Duration lifetime = ros::Duration(0),      ///< The lifetime of the marker
	std::array<double, 4> color = {{ 1, 0, 0, 1 }}, ///< The color of the sphere in RGBA
	int id = 0                                      ///< The id of this marker
);

}