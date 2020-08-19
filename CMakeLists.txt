cmake_minimum_required(VERSION 3.8)

set(This c_and_cpp)

project(${This} C CXX)

set (CMAKE_C_STANDARD 99)
set (CMAKE_CXX_STANDARD 11)
set (CMAKE_POSITION_INDEPENDENT_CODE ON)

enable_testing()

add_subdirectory(googletest)

set(Headers

)
set(Sources
    test1.cpp
    test2.cpp
)

add_library(${This} STATIC ${Sources} ${Headers})
add_executable(${This}_exe ${Sources})
add_subdirectory(test)
