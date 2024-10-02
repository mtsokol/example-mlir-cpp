cmake_minimum_required(VERSION 3.30)
project(MLIR_example)
set(CMAKE_CXX_STANDARD 17)

include_directories($ENV{CONDA_PREFIX}/include)
link_directories($ENV{CONDA_PREFIX}/lib)

add_executable(example example.cpp)
target_link_libraries(
    example
    MLIRIR
    LLVMSupport
    LLVMDemangle
    MLIRSupport
    )
