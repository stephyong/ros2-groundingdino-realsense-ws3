int32 id
string class_label

# 2D bounding box in full image coordinates (pixels)
int32 x_min
int32 y_min
int32 x_max
int32 y_max

# Depth of the center point along camera Z-axis (metres)
float32 depth

# 3D coordinates of the detection center in camera frame
geometry_msgs/Point camera_point

# 3D pose of the detection center in world frame
geometry_msgs/PoseStamped pose

# Optional: 3D coordinates of bounding box corners in camera frame
geometry_msgs/Point camera_xy_min
geometry_msgs/Point camera_xy_max