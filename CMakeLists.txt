cmake_minimum_required(VERSION 3.7.0)
project(cppchallenger)

if (UNIX)
  message(status "** Setting GCC flags")
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20 -fexceptions -g -Wall")
elseif(WIN32)
  message(status "** Setting MSVC flags")
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /EHsc /std:c++latest")
  
  add_definitions(-D_CRT_SECURE_NO_WARNINGS)
endif()
message(status "** CMAKE_CXX_FLAGS: ${CMAKE_CXX_FLAGS}")

set(INCLUDE_PATH "${CMAKE_SOURCE_DIR}/include")
set(LIBS_PATH "${CMAKE_SOURCE_DIR}/libs")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

add_subdirectory(libs/ZipLib)
add_subdirectory(libs/PDF-Writer)
add_subdirectory(libs/PNGWriter)

add_subdirectory(libs/cryptopp)
# add_subdirectory(/curl)
# add_subdirectory(libs/curlcpp)

add_subdirectory(Chapter01/problem_01)
