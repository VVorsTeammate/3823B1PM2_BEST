cmake_minimum_required(VERSION 3.10)

project(BEST_3823B1FI3)

set(CMAKE_C_STANDARD_LIBRARIES "${CMAKE_C_STANDARD_LIBRARIES} -lm")

include_directories(utils)

add_subdirectory(1-type)
add_subdirectory(2-if_else_switch)
add_subdirectory(3-loop)
add_subdirectory(4-array)
add_subdirectory(5-pointer)
add_subdirectory(6-functions)
add_subdirectory(7-recursion)
add_subdirectory(8-strings)
add_subdirectory(9-files)

add_executable(sum 0-Begin_Task/test.c)
