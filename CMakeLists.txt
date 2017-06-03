cmake_minimum_required(VERSION 2.8.7)
project(ImageViewer)

find_package(OpenCV REQUIRED)

include_directories( ${OpenCV_INCLUDE_DIRS} )

add_executable( Tests/Tests Tests/Tests.cpp )