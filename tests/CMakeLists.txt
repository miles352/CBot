cmake_minimum_required(VERSION 3.28)
project(tests)

add_executable(${PROJECT_NAME} tests.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE CBot)


add_test(NAME test COMMAND tests)