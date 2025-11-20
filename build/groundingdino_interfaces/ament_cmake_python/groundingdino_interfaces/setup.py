from setuptools import find_packages
from setuptools import setup

setup(
    name='groundingdino_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('groundingdino_interfaces', 'groundingdino_interfaces.*')),
)
