cmake_minimum_required(VERSION 3.14)
project(tests)

FILE(GLOB SOURCES *.cpp)

include_directories(../src)

add_executable(
  tests
  ${SOURCES}
)
target_link_libraries(
  tests
  GTest::gtest_main
  library1
)

include(GoogleTest)
enable_testing()

gtest_discover_tests(tests)
