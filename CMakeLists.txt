cmake_minimum_required(VERSION 3.10)
project(ConformanceTest LANGUAGES CXX)

add_library(ConformanceTest INTERFACE)
target_compile_features(ConformanceTest INTERFACE cxx_std_11)

install(FILES  include/ConformanceTest.hpp    DESTINATION include)

enable_testing()
file(GLOB testfiles test/*.cpp)
foreach(testfile ${testfiles})
	file(RELATIVE_PATH target "${CMAKE_CURRENT_SOURCE_DIR}" "${testfile}")
	string(REGEX MATCH "c\\+\\+[0-9][0-9]" stanard ${target})
	string(REGEX MATCH "[0-9][0-9]" stanard ${stanard})
	
	string(REPLACE .cpp "" target ${target})
	string(REPLACE test/ "" target ${target})
	add_executable(${target} "${testfile}")
 	add_test(NAME ${target}
			COMMAND ${CMAKE_COMMAND} --build . --target ${target} --config $<CONFIGURATION>
			WORKING_DIRECTORY ${CMAKE_BINARY_DIR})
			
	if (${target} MATCHES "[.]fail")
		set_tests_properties(${target} PROPERTIES WILL_FAIL true)
	endif()
	set_target_properties(${target} PROPERTIES
						EXCLUDE_FROM_ALL TRUE
						EXCLUDE_FROM_DEFAULT_BUILD TRUE
						CXX_STANDARD ${stanard}
						CXX_STANDARD_REQUIRED ON)
endforeach()
