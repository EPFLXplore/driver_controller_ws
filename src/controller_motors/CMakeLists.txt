cmake_minimum_required(VERSION 3.0.2)
project(controller_motors)


find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
  sensor_msgs
  message_filters
)


catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES sync
#  CATKIN_DEPENDS roscpp rospy std_msgs
#  DEPENDS system_lib
)


include_directories(
# include
  ${catkin_INCLUDE_DIRS}
  ${PROJECT_SOURCE_DIR}/include
)

message(STATUS "DIR : --------->  ${PROJECT_SOURCE_DIR}")


add_executable(controller_node src/controller_motors.cpp)

target_link_libraries(controller_node ${catkin_LIBRARIES} 
                      ${PROJECT_SOURCE_DIR}/lib/libethercatcpp-core_ethercatcpp-core.so 
                      ${PROJECT_SOURCE_DIR}/lib/libethercatcpp-epos_ethercatcpp-epos.so 
                      ${PROJECT_SOURCE_DIR}/lib/libpid-os-utilities_pid-signal-manager.so 
                      ${PROJECT_SOURCE_DIR}/lib/libsoem.a )

# add_dependencies(controller_node beginner_tutorials_generate_messages_cpp)