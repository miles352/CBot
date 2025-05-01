cmake_minimum_required(VERSION 3.28)
project(mineCraft)

set(CMAKE_CXX_STANDARD 26)

find_package(OpenSSL REQUIRED)

add_executable(mineCraft main.cpp MicrosoftAuth.cpp)

# add_executable(MicrosoftAuth MicrosoftAuth.cpp)
target_link_libraries(mineCraft OpenSSL::SSL OpenSSL::Crypto)


# add_executable(server server.cpp)