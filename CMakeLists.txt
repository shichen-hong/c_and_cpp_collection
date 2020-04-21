cmake_minimum_required(VERSION 3.12)
set(This c_and_cpp)
project(${This} C CXX)
set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

set(Source
    main.cpp
)
# set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/build)
add_executable(${This} ${Source})