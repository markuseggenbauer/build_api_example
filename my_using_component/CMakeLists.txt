me_add_package(
    my_using_component
    PUBLIC_HEADER_DIR inc
    PUBLIC_HEADERS my_using_component.hpp
    PUBLIC_HEADER_DEPENDS my_component
    SOURCE_DIR src
    SOURCES my_using_component.cpp
)
