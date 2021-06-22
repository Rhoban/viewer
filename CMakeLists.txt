cmake_minimum_required(VERSION 3.16.3)
project(rhoban_viewer)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")

# Declare a C++ library
add_library(rhoban_viewer
  src/rhoban_viewer/color.cpp
  src/rhoban_viewer/viewer.cpp
)
target_include_directories(rhoban_viewer PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
)

target_link_libraries(rhoban_viewer PUBLIC
  sfml-graphics
  sfml-window
  sfml-system
  GL
  GLU
  Eigen3::Eigen
)
