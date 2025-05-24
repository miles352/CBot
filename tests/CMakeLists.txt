add_executable(tests tests.cpp)

target_include_directories(tests PUBLIC ${CMAKE_SOURCE_DIR}/src)

add_test(NAME test COMMAND tests)