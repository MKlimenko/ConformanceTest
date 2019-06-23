cmake_minimum_required(VERSION 3.10)
project(conformance LANGUAGES CXX)

add_library(conformance INTERFACE)
target_include_directories(conformance INTERFACE "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>"
                                           $<INSTALL_INTERFACE:include>)
target_compile_features(conformance INTERFACE cxx_std_14)

install(FILES  include/conformance.hpp    DESTINATION include)

enable_testing()
file(GLOB testfiles test/*.cpp)
foreach(testfile ${testfiles})
	file(RELATIVE_PATH target "${CMAKE_CURRENT_SOURCE_DIR}" "${testfile}")
	string(REPLACE .cpp "" target ${target})
	string(REPLACE / "." target ${target})
	add_executable(${target} "${testfile}")
 	add_test(NAME ${target}
			COMMAND ${CMAKE_COMMAND} --build . --target ${target} --config $<CONFIGURATION>
			WORKING_DIRECTORY ${CMAKE_BINARY_DIR})
			
	if (${target} MATCHES "[.]fail")
		set_tests_properties(${target} PROPERTIES WILL_FAIL true)
	endif()
	set_target_properties(${target} PROPERTIES
						EXCLUDE_FROM_ALL TRUE
						EXCLUDE_FROM_DEFAULT_BUILD TRUE)					
endforeach()
