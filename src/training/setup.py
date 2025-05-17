from setuptools import find_packages, setup

package_name = 'training'

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
    maintainer='ram',
    maintainer_email='sairamd1905@gmail.com',
    description='Simple PubSub and client-service package using custom interfaces',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'talker = training.publisher_member_function:main',
            'listener = training.subscriber_member_function:main',
        ],
    },
)
