cmake_minimum_required(VERSION 3.15)

project(platdetect)

add_library(platdetect INTERFACE)

target_include_directories(platdetect INTERFACE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
)
