#!/bin/bash

# Define the compilers and build types you want to use
compilers=("icx;icpx" "gcc;g++")
build_types=("Debug" "Release")

# Create the build directory if it doesn't exist
mkdir -p build

# Loop over compilers
for compiler in "${compilers[@]}"; do
    IFS=';' read -r C_COMPILER CXX_COMPILER <<< "$compiler"
    
    # Loop over build types
    for build_type in "${build_types[@]}"; do
        echo "Building with $C_COMPILER in $build_type mode..."
        
        # Create build directory for each compiler and build type
        build_dir="build/${C_COMPILER}_${build_type}"
        mkdir -p "$build_dir"

        # Run CMake
        cd "$build_dir"
        cmake -DCMAKE_C_COMPILER="$C_COMPILER" -DCMAKE_CXX_COMPILER="$CXX_COMPILER" -DCMAKE_BUILD_TYPE="$build_type" ../../
        
        # Build the project
        cmake --build .

        # Return to the root directory
        cd - || exit
    done
done
