cmake_minimum_required(VERSION 3.20)
project(MyModernCppChallenges)

message(STATUS "C++ Compiler: ${CMAKE_CXX_COMPILER}")
message(STATUS "C++ Compiler Version: ${CMAKE_CXX_COMPILER_VERSION}")
message(STATUS "C++ Compiler ID: ${CMAKE_CXX_COMPILER_ID}")

# set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG "${CMAKE_BINARY_DIR}/${CMAKE_CXX_COMPILER_ID}_Debug")
# set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE "${CMAKE_BINARY_DIR}/${CMAKE_CXX_COMPILER_ID}_Release")

set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -Wall -Wextra")      # Debug flags
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -Wall -O3") 
# message(STATUS "C++ Debug flags: ${CMAKE_CXX_FLAGS_DEBUG}")
# message(STATUS "C++ Release flags: ${CMAKE_CXX_FLAGS_RELEASE}")

# Additional compiler flags
# if(CMAKE_BUILD_TYPE STREQUAL "Debug")
#     message(STATUS "Building Debug version")
# elseif(CMAKE_BUILD_TYPE STREQUAL "Release")
#     message(STATUS "Building Release version")
# endif()

# Add each top-level project directory
add_subdirectory(src)