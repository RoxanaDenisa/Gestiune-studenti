cmake_minimum_required(VERSION 3.0)

set(myproject "Tema2")

project(${myproject})

add_subdirectory(src)

add_executable("${PROJECT_NAME}" main.cpp)
set(CMAKE_CXX_FLAGS "-pthread")
target_link_libraries("${PROJECT_NAME}" PRIVATE Student Facultate Universitate Lock)