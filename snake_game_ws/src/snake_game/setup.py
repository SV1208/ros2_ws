from setuptools import find_packages, setup

package_name = 'snake_game'

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
            "turtle_spawner = snake_game.turtle_spawner:main",
            "turtle_controller = snake_game.turtle_controller:main",
            "turtle_follower = snake_game.turtle_follower:main",
        ],
    },
)
