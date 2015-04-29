cmake_minimum_required(
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

 


add_executable(
        pass5	
        src/pass5.cpp
        src/inst/instrument.cpp
)


add_executable(
        pass12	
        src/pass12.cpp
        src/inst/instrument.cpp
)


add_executable(
        pass6	
        src/pass6.cpp
        src/inst/instrument.cpp
)


add_executable(
        pass18	
        src/pass18.cpp
        src/inst/instrument.cpp
)


add_executable(
        pass14	
        src/pass14.cpp
        src/inst/instrument.cpp
)


add_executable(
        pass17	
        src/pass17.cpp
        src/inst/instrument.cpp
)


add_executable(
        pass3	
        src/pass3.cpp
        src/inst/instrument.cpp
)


add_executable(
        pass2	
        src/pass2.cpp
        src/inst/instrument.cpp
)


add_executable(
        pass22	
        src/pass22.cpp
        src/inst/instrument.cpp
)


add_executable(
        pass13	
        src/pass13.cpp
        src/inst/instrument.cpp
)


add_executable(
        pass20	
        src/pass20.cpp
        src/inst/instrument.cpp
)


add_executable(
        pass21	
        src/pass21.cpp
        src/inst/instrument.cpp
)


add_executable(
        pass10	
        src/pass10.cpp
        src/inst/instrument.cpp
)


add_executable(
        pass15	
        src/pass15.cpp
        src/inst/instrument.cpp
)


add_executable(
        pass23	
        src/pass23.cpp
        src/inst/instrument.cpp
)


add_executable(
        pass16	
        src/pass16.cpp
        src/inst/instrument.cpp
)


add_executable(
        pass4	
        src/pass4.cpp
        src/inst/instrument.cpp
)


add_executable(
        pass25	
        src/pass25.cpp
        src/inst/instrument.cpp
)


add_executable(
        pass11	
        src/pass11.cpp
        src/inst/instrument.cpp
)


add_executable(
        pass7	
        src/pass7.cpp
        src/inst/instrument.cpp
)


add_executable(
        pass1	
        src/pass1.cpp
        src/inst/instrument.cpp
)


add_executable(
        pass9	
        src/pass9.cpp
        src/inst/instrument.cpp
)


add_executable(
        pass19	
        src/pass19.cpp
        src/inst/instrument.cpp
)


add_executable(
        pass24	
        src/pass24.cpp
        src/inst/instrument.cpp
)


add_executable(
        pass8	
        src/pass8.cpp
        src/inst/instrument.cpp
)


target_link_libraries(
        pass5
        ${catkin_LIBRARIES}
)


target_link_libraries(
        pass12
        ${catkin_LIBRARIES}
)


target_link_libraries(
        pass6
        ${catkin_LIBRARIES}
)


target_link_libraries(
        pass18
        ${catkin_LIBRARIES}
)


target_link_libraries(
        pass14
        ${catkin_LIBRARIES}
)


target_link_libraries(
        pass17
        ${catkin_LIBRARIES}
)


target_link_libraries(
        pass3
        ${catkin_LIBRARIES}
)


target_link_libraries(
        pass2
        ${catkin_LIBRARIES}
)


target_link_libraries(
        pass22
        ${catkin_LIBRARIES}
)


target_link_libraries(
        pass13
        ${catkin_LIBRARIES}
)


target_link_libraries(
        pass20
        ${catkin_LIBRARIES}
)


target_link_libraries(
        pass21
        ${catkin_LIBRARIES}
)


target_link_libraries(
        pass10
        ${catkin_LIBRARIES}
)


target_link_libraries(
        pass15
        ${catkin_LIBRARIES}
)


target_link_libraries(
        pass23
        ${catkin_LIBRARIES}
)


target_link_libraries(
        pass16
        ${catkin_LIBRARIES}
)


target_link_libraries(
        pass4
        ${catkin_LIBRARIES}
)


target_link_libraries(
        pass25
        ${catkin_LIBRARIES}
)


target_link_libraries(
        pass11
        ${catkin_LIBRARIES}
)


target_link_libraries(
        pass7
        ${catkin_LIBRARIES}
)


target_link_libraries(
        pass1
        ${catkin_LIBRARIES}
)


target_link_libraries(
        pass9
        ${catkin_LIBRARIES}
)


target_link_libraries(
        pass19
        ${catkin_LIBRARIES}
)


target_link_libraries(
        pass24
        ${catkin_LIBRARIES}
)


target_link_libraries(
        pass8
        ${catkin_LIBRARIES}
)


set_target_properties(
        pass5	
	PROPERTIES
	COMPILE_FLAGS
	"-g -flto"
	LINK_FLAGS
	"-flto"
)


set_target_properties(
        pass12	
	PROPERTIES
	COMPILE_FLAGS
	"-g -flto"
	LINK_FLAGS
	"-flto"
)


set_target_properties(
        pass6	
	PROPERTIES
	COMPILE_FLAGS
	"-g -flto"
	LINK_FLAGS
	"-flto"
)


set_target_properties(
        pass18	
	PROPERTIES
	COMPILE_FLAGS
	"-g -flto"
	LINK_FLAGS
	"-flto"
)


set_target_properties(
        pass14	
	PROPERTIES
	COMPILE_FLAGS
	"-g -flto"
	LINK_FLAGS
	"-flto"
)


set_target_properties(
        pass17	
	PROPERTIES
	COMPILE_FLAGS
	"-g -flto"
	LINK_FLAGS
	"-flto"
)


set_target_properties(
        pass3	
	PROPERTIES
	COMPILE_FLAGS
	"-g -flto"
	LINK_FLAGS
	"-flto"
)


set_target_properties(
        pass2	
	PROPERTIES
	COMPILE_FLAGS
	"-g -flto"
	LINK_FLAGS
	"-flto"
)


set_target_properties(
        pass22	
	PROPERTIES
	COMPILE_FLAGS
	"-g -flto"
	LINK_FLAGS
	"-flto"
)


set_target_properties(
        pass13	
	PROPERTIES
	COMPILE_FLAGS
	"-g -flto"
	LINK_FLAGS
	"-flto"
)


set_target_properties(
        pass20	
	PROPERTIES
	COMPILE_FLAGS
	"-g -flto"
	LINK_FLAGS
	"-flto"
)


set_target_properties(
        pass21	
	PROPERTIES
	COMPILE_FLAGS
	"-g -flto"
	LINK_FLAGS
	"-flto"
)


set_target_properties(
        pass10	
	PROPERTIES
	COMPILE_FLAGS
	"-g -flto"
	LINK_FLAGS
	"-flto"
)


set_target_properties(
        pass15	
	PROPERTIES
	COMPILE_FLAGS
	"-g -flto"
	LINK_FLAGS
	"-flto"
)


set_target_properties(
        pass23	
	PROPERTIES
	COMPILE_FLAGS
	"-g -flto"
	LINK_FLAGS
	"-flto"
)


set_target_properties(
        pass16	
	PROPERTIES
	COMPILE_FLAGS
	"-g -flto"
	LINK_FLAGS
	"-flto"
)


set_target_properties(
        pass4	
	PROPERTIES
	COMPILE_FLAGS
	"-g -flto"
	LINK_FLAGS
	"-flto"
)


set_target_properties(
        pass25	
	PROPERTIES
	COMPILE_FLAGS
	"-g -flto"
	LINK_FLAGS
	"-flto"
)


set_target_properties(
        pass11	
	PROPERTIES
	COMPILE_FLAGS
	"-g -flto"
	LINK_FLAGS
	"-flto"
)


set_target_properties(
        pass7	
	PROPERTIES
	COMPILE_FLAGS
	"-g -flto"
	LINK_FLAGS
	"-flto"
)


set_target_properties(
        pass1	
	PROPERTIES
	COMPILE_FLAGS
	"-g -flto"
	LINK_FLAGS
	"-flto"
)


set_target_properties(
        pass9	
	PROPERTIES
	COMPILE_FLAGS
	"-g -flto"
	LINK_FLAGS
	"-flto"
)


set_target_properties(
        pass19	
	PROPERTIES
	COMPILE_FLAGS
	"-g -flto"
	LINK_FLAGS
	"-flto"
)


set_target_properties(
        pass24	
	PROPERTIES
	COMPILE_FLAGS
	"-g -flto"
	LINK_FLAGS
	"-flto"
)


set_target_properties(
        pass8	
	PROPERTIES
	COMPILE_FLAGS
	"-g -flto"
	LINK_FLAGS
	"-flto"
)
