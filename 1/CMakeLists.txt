cmake_minimum_required(VERSION 2.0)

project(BookTest)

set(SOURCE BookTest.cpp Book.cpp Book.hpp)

add_executable(${PROJECT_NAME} ${SOURCE})