cmake_minimum_required(VERSION 3.8)
project(simple_package)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)

add_library(foobar src/foobar.cpp)
target_include_directories(foobar
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

if(BUILD_TESTING)
  find_package(ament_cmake_gtest)
  ament_add_gtest(foobar_test test/test_foobar.cpp)
  target_link_libraries(foobar_test
    foobar
  )
endif()

ament_package()
