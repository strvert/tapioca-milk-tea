cmake_minimum_required(VERSION 3.1)

project(tapioca-milt-tea)

set (CMAKE_CXX_STANDARD 17)
set (CMAKE_CXX_EXTENSIONS OFF)
set(SOURCE_FILES 
    src/cup.cpp
    src/straw.cpp
    src/contents/content_base.cpp
    src/contents/tapioca.cpp
    )

include_directories(${PROJECT_NAME} include)
add_executable(${PROJECT_NAME} main.cpp ${SOURCE_FILES})
