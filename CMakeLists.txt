cmake_minimum_required(VERSION 3.5)
project(console_menu)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES src/Menu.cpp src/MenuItem.cpp include/MenuExceptions.hpp src/ConsoleUtils.cpp)
add_library(consoleMenu SHARED ${SOURCE_FILES})
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

set(UTIL_TEST tests/utilTest.cpp)
add_executable(utilTest ${UTIL_TEST})
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(utilTest consoleMenu)