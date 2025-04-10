from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()

    robot_names=["giskard","bb8","daneel","jander","c3po"]
    for robot_name in robot_names:
        robot_news_station_node = Node(
            package="my_cpp_pkg",
            executable="robot_news_station",
            name="robot_news_station_"+robot_name,
            parameters=[
                {'robot_name':robot_name},
            ]
        )
        ld.add_action(robot_news_station_node)

    smartphone_node = Node(
        package="my_cpp_pkg",
        executable="smartphone"
    )
    
    ld.add_action(smartphone_node)
    
    return ld