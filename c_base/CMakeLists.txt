cmake_minimum_required(VERSION 2.8)

#SET(OpenCV_DIR "/home/xx/opencv_build/opencv-3.4.4/build")
project(c_base)

## Compile as C++11, supported in ROS Kinetic and newer
add_compile_options(-std=c++11)
#find_package(OpenCV REQUIRED)

include_directories(
  include
  #/usr/include/
)
add_executable(array1  src/array1.c )
target_link_libraries(array1
  # ${OpenCV_LIBS}
 )
