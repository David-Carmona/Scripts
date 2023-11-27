# generated from catkin/cmake/template/pkg.context.pc.in
CATKIN_PACKAGE_PREFIX = ""
PROJECT_PKG_CONFIG_INCLUDE_DIRS = "${prefix}/include;/usr/include/eigen3;/usr/include".split(';') if "${prefix}/include;/usr/include/eigen3;/usr/include" != "" else []
PROJECT_CATKIN_DEPENDS = "message_filters;nav_msgs;rosconsole;roscpp;sparse_bundle_adjustment;sensor_msgs;rviz;tf2;tf2_ros;visualization_msgs;pluginlib;message_runtime;tf2_geometry_msgs;interactive_markers;slam_toolbox_msgs".replace(';', ' ')
PKG_CONFIG_LIBRARIES_WITH_PREFIX = "-lceres_solver_plugin;-ltoolbox_lib;-lslam_toolbox_rviz_plugin;/usr/lib/x86_64-linux-gnu/libboost_system.so;/usr/lib/x86_64-linux-gnu/libboost_serialization.so;/usr/lib/x86_64-linux-gnu/libboost_filesystem.so;/usr/lib/x86_64-linux-gnu/libboost_thread.so;/usr/lib/x86_64-linux-gnu/libboost_chrono.so;/usr/lib/x86_64-linux-gnu/libboost_date_time.so;/usr/lib/x86_64-linux-gnu/libboost_atomic.so;/usr/lib/x86_64-linux-gnu/libpthread.so".split(';') if "-lceres_solver_plugin;-ltoolbox_lib;-lslam_toolbox_rviz_plugin;/usr/lib/x86_64-linux-gnu/libboost_system.so;/usr/lib/x86_64-linux-gnu/libboost_serialization.so;/usr/lib/x86_64-linux-gnu/libboost_filesystem.so;/usr/lib/x86_64-linux-gnu/libboost_thread.so;/usr/lib/x86_64-linux-gnu/libboost_chrono.so;/usr/lib/x86_64-linux-gnu/libboost_date_time.so;/usr/lib/x86_64-linux-gnu/libboost_atomic.so;/usr/lib/x86_64-linux-gnu/libpthread.so" != "" else []
PROJECT_NAME = "slam_toolbox"
PROJECT_SPACE_DIR = "/home/david/traxas_ws/install"
PROJECT_VERSION = "1.1.6"
