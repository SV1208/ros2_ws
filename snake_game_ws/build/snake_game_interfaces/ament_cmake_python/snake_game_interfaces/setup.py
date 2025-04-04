from setuptools import find_packages
from setuptools import setup

setup(
    name='snake_game_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('snake_game_interfaces', 'snake_game_interfaces.*')),
)
