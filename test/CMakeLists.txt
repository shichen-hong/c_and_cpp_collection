cmake_minimum_required(VERSION 3.8)

set (This c_and_cpp_test)

set (Sources
    testTests.cpp
)

add_executable(${This} ${Sources})
target_link_libraries(${This} PUBLIC
    gtest_main
    c_and_cpp
)

add_test(
    NAME ${This}
    COMMAND ${This}
)