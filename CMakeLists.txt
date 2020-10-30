#
# Copyright © 2020 Maxim Morozov. All rights reserved.
#
# Created by Maxim Morozov on 30/10/2020.
#
# cpu-cache-line-size
#
# CMakeLists.txt
#

cmake_minimum_required(VERSION 2.8)

project(cpu-cache-line-size CXX)

set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_SKIP_RPATH TRUE)
set(CMAKE_INSTALL_PREFIX ${CMAKE_SOURCE_DIR})

set(APPLICATION_INSTALL_DIR bin)
set(APPLICATION_SOURCE_DIR src)
set(APPLICATION_SOURCES ${APPLICATION_SOURCE_DIR}/main.cpp)

add_executable(${PROJECT_NAME} ${APPLICATION_SOURCES})

install(TARGETS ${PROJECT_NAME} RUNTIME DESTINATION ${APPLICATION_INSTALL_DIR})
