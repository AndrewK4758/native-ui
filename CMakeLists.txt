cmake_minimum_required(VERSION 4.1.2)
project(QtGridExample)

set(CMAKE_CXX_STANDARD 23)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

if(CMAKE_SYSTEM_NAME STREQUAL "Linux")
    message(STATUS "Configuring for Linux")
    include_directories(/usr/lib)
elseif(CMAKE_SYSTEM_NAME STREQUAL "Windows")
    # Add your path to QT libs here
    message(STATUS "Configuring for Windows")
endif ()

find_package(Qt6 REQUIRED COMPONENTS Widgets)

add_executable(QtGridExample main.cpp)

target_link_libraries(QtGridExample PRIVATE Qt6::Widgets)