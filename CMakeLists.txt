# src/CMakeLists.txt
add_library(ops SHARED custom_ops.cpp)

# Set Torch and Python paths
set(Torch_DIR "/home/sravya/libtorch/share/cmake/Torch")
list(APPEND CMAKE_PREFIX_PATH "/home/sravya/libtorch/cmake/Torch")

find_package(Torch REQUIRED)
find_package(Python3 REQUIRED COMPONENTS Development)

# Link libraries
target_link_libraries(ops PRIVATE ${TORCH_LIBRARIES} ${Python3_LIBRARIES})

# Set include directories
target_include_directories(ops PUBLIC 
    ${CMAKE_CURRENT_SOURCE_DIR} 
    ${Python3_INCLUDE_DIRS}
)

set_target_properties(ops PROPERTIES 
    LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/src
)


# Set C++ flags
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${TORCH_CXX_FLAGS}")
