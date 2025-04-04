from setuptools import find_packages, setup

package_name = 'activity1_py_pkg'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='robomaven',
    maintainer_email='learningcourses245@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],   
    entry_points={
        'console_scripts': [
            "number_publisher = activity1_py_pkg.number_publisher_node_file:main", # Here 'number_publisher' is the executable name
            "robot_news_station = activity1_py_pkg.my_first_node:main",
            "number_counter = activity1_py_pkg.number_counter_node_file:main",
            "led_panel = activity1_py_pkg.led_panel_node:main",
            "battery = activity1_py_pkg.battery_node:main",
        ],
    },
)
