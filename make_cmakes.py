#!/usr/bin/env python

import glob


text = '''cmake_minimum_required(
	VERSION
	2.8.3
)
project(
	clang_pass_tests
)
find_package(
	catkin
	REQUIRED
	COMPONENTS
	roscpp
	std_msgs
)
catkin_package(
	CATKIN_DEPENDS
	roscpp
	std_msgs
)
include_directories(
	${catkin_INCLUDE_DIRS}
)

 
'''


addex = '''
add_executable(
        {:s}	
        src/{:s}.cpp
        src/inst/instrument.cpp
)
'''

tll = '''
target_link_libraries(
        {:s}
        {:s}
)
'''

target_props = '''
set_target_properties(
        {:s}	
	PROPERTIES
	COMPILE_FLAGS
	"-g -flto"
	LINK_FLAGS
	"-flto"
)
'''

if __name__ == '__main__':
    tests = []
    for f in glob.glob('src/*.cpp'):
        base = f[f.index('/') + 1 : f.index('.')] 
        tests.append(base)
    print tests
    val = text
    for t in tests:
        val += '\n' + addex.format(t, t)
    for t in tests:
        val += '\n' + tll.format(t, '${catkin_LIBRARIES}')
    for t in tests:
        val += '\n' +  target_props.format(t)
    with open('CMakeLists.txt', 'w') as f:
        f.write(val)


