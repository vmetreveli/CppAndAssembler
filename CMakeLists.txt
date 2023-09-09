set(CMAKE_CXX_COMPILER g++)
cmake_minimum_required(VERSION 3.26)
project(untitled1)

set(CMAKE_CXX_STANDARD 23)
# Specify the C++ compiler (GCC)


add_executable(untitled1 main.cpp)

# Add the assembly language source file
add_library(assembly_code OBJECT main_.asm)

# Link the assembly library to the C++ executable
target_link_libraries(untitled1 PRIVATE $<TARGET_OBJECTS:assembly_code>)
