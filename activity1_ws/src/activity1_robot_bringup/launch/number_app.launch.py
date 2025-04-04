from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()

    remap_number_topic = ("number", "my_number")
    number_publisher_node = Node(
        package="activity1_py_pkg",
        executable="number_publisher",
        name="my_number_publisher", # Remapping Name
        remappings=[
            remap_number_topic, # Remapping topics,
        ],
        parameters=[ # Giving parameters
            {'low':4},
            {'high':5},
            {'freq':5.0},
        ]
    )

    number_counter_node = Node(
        package="activity1_cpp_pkg",
        executable="number_counter",
        name="my_number_counter",
        remappings=[
            remap_number_topic,
            ("number_count","my_number_count"), # Similary you can remap services
        ]

    )

    ld.add_action(number_publisher_node)
    ld.add_action(number_counter_node)

    return ld