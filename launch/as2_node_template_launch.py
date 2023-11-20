""" Launch as2_node_template node"""
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration, EnvironmentVariable, PathJoinSubstitution
from launch import LaunchDescription


def generate_launch_description():
    """Entrypoint"""

    default_config_file = PathJoinSubstitution([
        FindPackageShare('as2_node_template'),
        'config', 'config_default.yaml'
    ])

    return LaunchDescription([
        DeclareLaunchArgument('namespace',
                              default_value=EnvironmentVariable(
                                  'AEROSTACK2_SIMULATION_DRONE_ID'),
                              description='Drone namespace'),
        DeclareLaunchArgument('config_file',
                              default_value=default_config_file,
                              description='as2_node_template configuration file'),
        Node(
            package="as2_node_template",
            executable="as2_node_template_node",
            name="as2_node_template",
            namespace=LaunchConfiguration('namespace'),
            output="screen",
            emulate_tty=True,
            parameters=[
                LaunchConfiguration('config_file'),
            ]
        )
    ])
