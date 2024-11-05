# Collect all .cpp files in this directory
file(GLOB SOURCES "*.cpp")

# Loop through each source file to create an executable
foreach(SOURCE_FILE ${SOURCES})
    # Extract the file name without extension to use as the executable name
    get_filename_component(EXEC_NAME ${SOURCE_FILE} NAME_WE)
    
    # Define an executable for each source file
    add_executable(${EXEC_NAME} ${SOURCE_FILE})
    target_compile_features(${EXEC_NAME} PRIVATE cxx_std_20)        
endforeach()
