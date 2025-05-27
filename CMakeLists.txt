cmake_minimum_required(VERSION 3.28)
project(CBot)

set(CMAKE_CXX_STANDARD 26)

find_package(OpenSSL REQUIRED)
find_package(ZLIB REQUIRED)


add_executable(CBot 
src/main.cpp 
src/MicrosoftAuth.cpp
src/NetworkHandler.cpp
)

target_include_directories(CBot PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)

target_link_libraries(CBot 
OpenSSL::SSL 
OpenSSL::Crypto
ZLIB::ZLIB
)


enable_testing()
add_subdirectory(tests)