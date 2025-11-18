cmake_minimum_required(VERSION 3.28)
project(Looker)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE CBot)
