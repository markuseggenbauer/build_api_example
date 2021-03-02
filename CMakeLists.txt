cmake_minimum_required(VERSION 3.16)

project(build_api_example)

list(
    APPEND
    CMAKE_MODULE_PATH
    ${CMAKE_BINARY_DIR}
)

find_package(build_api)
include(me_build_api)

me_find_package(me_std)
me_find_package(
    GTest
    COMPONENTS
        gtest
        gtest_main
        gmock
        gmock_main
)

add_subdirectory(my_component)
add_subdirectory(my_using_component)
add_subdirectory(my_program)

include(CTest)
