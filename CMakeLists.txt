cmake_minimum_required(VERSION 3.26)

# Set the C++ standard to C++23
set(CMAKE_CXX_STANDARD 23)

# Specify the assembly language format (macho64)
set(CMAKE_ASM_NASM_OBJECT_FORMAT macho64)

# Define your project
project(untitled1)

# Add the main.cpp and main_.asm files to the executable
add_executable(untitled1 main_.asm main.cpp)

# Add the assembly language source file as an OBJECT library
add_library(assembly_code OBJECT main_.asm)

# Set the linker language for untitled1 to CXX (optional, as CMake will do this automatically)
set_target_properties(untitled1 PROPERTIES LINKER_LANGUAGE CXX)

# Link the assembly_code object library to the untitled1 executable
target_link_libraries(untitled1 PRIVATE $<TARGET_OBJECTS:assembly_code>)
