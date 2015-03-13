#include "marker.hpp"

namespace dr {

/// Creates a spherical marker
visualization_msgs::Marker createSphereMarker(
	std::string frame_id,        ///< The frame id in which the position is defined
	Eigen::Vector3d position,    ///< The position of the marker in frame_id
	double radius,               ///< The radius of the sphere
	std::string ns,              ///< The namespace of the marker
	ros::Duration lifetime,      ///< The lifetime of the marker
	std::array<double, 4> color, ///< The color of the sphere in RGBA
	int id                       ///< The id of this marker
) {
	visualization_msgs::Marker marker;
	marker.header.frame_id = frame_id;
	marker.header.stamp    = ros::Time::now();
	marker.id              = id;
	marker.pose.position.x = position.x();
	marker.pose.position.y = position.y();
	marker.pose.position.z = position.z();
	marker.color.r         = color[0];
	marker.color.g         = color[1];
	marker.color.b         = color[2];
	marker.color.a         = color[3];
	marker.scale.x         = radius;
	marker.scale.y         = radius;
	marker.scale.z         = radius;
	marker.lifetime        = lifetime;
	marker.type            = visualization_msgs::Marker::SPHERE;
	marker.action          = visualization_msgs::Marker::ADD;
	marker.ns              = ns;

	return marker;
}

}