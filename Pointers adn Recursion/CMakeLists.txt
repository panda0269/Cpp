cmake_minimum_required(VERSION 3.16)
project(${CMAKE_CURRENT_SOURCE_DIR})
set(CMAKE_CXX_STANDARD 20)

# Collect all .cpp files in this folder
file(GLOB SRC_FILES "*.cpp")

# Create one executable for each .cpp file
foreach(src ${SRC_FILES})
    # Skip build or documentation folders
    if(src MATCHES "cmake-build-debug" OR src MATCHES "build" OR src MATCHES "docs")
        continue()
    endif()

    # Extract filename without extension
    get_filename_component(exec_name ${src} NAME_WE)

    # Replace spaces with underscores for safety
    string(REPLACE " " "_" safe_name ${exec_name})

    # Create an executable
    add_executable(${safe_name} ${src})
endforeach()

# If this folder has nested subfolders, add them here:
# add_subdirectory("NestedFolderName")
