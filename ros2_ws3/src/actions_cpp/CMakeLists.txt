cmake_minimum_required(VERSION 3.8)
project(actions_cpp)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(my_robot_interfaces REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(example_interfaces REQUIRED)

add_executable(count_until_server src/count_until_server.cpp)
ament_target_dependencies(count_until_server rclcpp rclcpp_action my_robot_interfaces)

add_executable(count_until_server_queue_goal src/count_until_server_queue_goal.cpp)
ament_target_dependencies(count_until_server_queue_goal rclcpp rclcpp_action my_robot_interfaces)

add_executable(count_until_client src/count_until_client.cpp)
ament_target_dependencies(count_until_client rclcpp rclcpp_action my_robot_interfaces)

add_executable(move_robot_server src/move_robot_server.cpp)
ament_target_dependencies(move_robot_server rclcpp rclcpp_action my_robot_interfaces)

add_executable(move_robot_client src/move_robot_client.cpp)
ament_target_dependencies(move_robot_client rclcpp rclcpp_action my_robot_interfaces example_interfaces)


install(TARGETS 
  count_until_client
  count_until_server
  count_until_server_queue_goal
  move_robot_server
  move_robot_client
  DESTINATION lib/${PROJECT_NAME}/
  )

ament_package()
