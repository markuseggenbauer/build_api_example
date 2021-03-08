cmake_minimum_required(VERSION 3.16)

project(build_api_example)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_BINARY_DIR}")
list(APPEND CMAKE_PREFIX_PATH "${CMAKE_BINARY_DIR}")

find_program(CONAN_CMD conan)
execute_process(
    COMMAND
        "${CONAN_CMD}" install --generator cmake_find_package --build missing -if
        "${CMAKE_BINARY_DIR}" "."
    WORKING_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}"
)

find_package(me_find_package)
include(me_find_package)

me_find_package(me_build)
include(me_build)

me_find_package(me_std)
me_find_package(GTest COMPONENTS gtest gtest_main gmock gmock_main)

add_subdirectory(my_component)
add_subdirectory(my_using_component)
add_subdirectory(my_program)

include(CTest)
