cmake_minimum_required(VERSION 3.16)

project(build_api_example)

include(setup.cmake)

find_package(build_api)
find_package(GTest)
include(CTest)

add_subdirectory(my_component)
add_subdirectory(my_using_component)
add_subdirectory(my_program)
