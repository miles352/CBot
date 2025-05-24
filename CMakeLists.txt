cmake_minimum_required(VERSION 3.28)
project(CBot)

set(CMAKE_CXX_STANDARD 26)

find_package(OpenSSL REQUIRED)

add_executable(CBot 
src/main.cpp 
src/MicrosoftAuth.cpp
)

target_link_libraries(CBot OpenSSL::SSL OpenSSL::Crypto)
target_include_directories(CBot PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)

enable_testing()
add_subdirectory(tests)