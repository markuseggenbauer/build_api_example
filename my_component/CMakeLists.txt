me_add_interface_unit(
  my_component
  PUBLIC_HEADER_DIR inc
  PUBLIC_HEADERS my_component.hpp)

me_add_implementation_unit(
  my_component_impl
  SOURCE_DIR src
  SOURCES my_component_impl.cpp
  SOURCE_DEPENDS my_component)

find_package(GTest)

me_add_unit(
  my_component_mock
  PUBLIC_HEADER_DIR inc_mock
  PUBLIC_HEADERS my_component_mock.hpp
  PUBLIC_HEADER_DEPENDS my_component
                        GTest::gmock
  SOURCE_DIR src_mock
  SOURCES my_component_mock.cpp)
