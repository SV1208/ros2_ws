cmake_minimum_required(VERSION 3.8)
project(activity1_cpp_pkg)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(example_interfaces REQUIRED)
find_package(std_srvs REQUIRED)
find_package(activity1_interfaces REQUIRED)

add_executable(number_publisher src/number_publisher_cpp_node_file.cpp)
ament_target_dependencies(number_publisher rclcpp example_interfaces)

add_executable(number_counter src/number_counter_cpp_node_file.cpp)
ament_target_dependencies(number_counter rclcpp example_interfaces std_srvs)

add_executable(led_panel src/led_panel_node)
ament_target_dependencies(led_panel rclcpp activity1_interfaces)

add_executable(battery src/battery_node)
ament_target_dependencies(battery rclcpp activity1_interfaces)


install(TARGETS
  number_publisher
  number_counter
  led_panel
  battery
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()
