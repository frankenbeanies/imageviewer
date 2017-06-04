cmake_minimum_required(VERSION 2.8.7)
project(ImageViewer)

find_package(OpenCV REQUIRED)

include_directories( ${OpenCV_INCLUDE_DIRS} )

add_executable( Tests/Tests Tests/Tests.cpp
    App/Validate.cpp )
add_executable( App/ImageViewer App/ImageViewer.cpp
    App/FileDialog.cpp
    App/Validate.cpp)

target_link_libraries( App/ImageViewer ${OpenCV_LIBS})
target_link_libraries( Tests/Tests ${OpenCV_LIBS})