cmake_minimum_required(VERSION 3.1)

project(tapioca-milt-tea)

set (CMAKE_CXX_STANDARD 17)
set (CMAKE_CXX_EXTENSIONS OFF)
add_executable(${PROJECT_NAME} main.cpp)
link_directories(src)
target_include_directories(${PROJECT_NAME} PRIVATE include)
