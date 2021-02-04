me_add_implementation_unit(
  my_program_main
  SOURCES main.cpp
  SOURCE_DEPENDS my_using_component)

me_add_executable(
  my_program
  CONTAINS
    my_program_main
    my_using_component
    my_component_impl)

me_add_library(
  my_program_library
  CONTAINS my_using_component
           my_component_impl)

me_add_executable(
  my_program_from_lib
  CONTAINS my_program_main
           my_program_library)
