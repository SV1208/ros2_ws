from setuptools import find_packages
from setuptools import setup

setup(
    name='activity1_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('activity1_interfaces', 'activity1_interfaces.*')),
)
