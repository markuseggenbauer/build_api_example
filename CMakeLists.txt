cmake_minimum_required(VERSION 3.16)

project(build_api_example)

include(package_bootstrap.cmake)

me_find_package(me_build)
include(me_build)

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
