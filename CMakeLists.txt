cmake_minimum_required(VERSION 3.5)

project(Tutorial LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Tutorial main.cpp)

install(TARGETS Tutorial
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
