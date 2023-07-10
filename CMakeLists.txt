cmake_minimum_required(VERSION 3.10)

project(riscv_isa_level_simulation)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ./RV64I)

file(GLOB_RECURSE SIM_SRC ${PROJECT_SOURCE_DIR}/src/*.cpp)

include_directories(${PROJECT_SOURCE_DIR}/include/)
include_directories(${PROJECT_SOURCE_DIR}/include/instruction/)
include_directories(${PROJECT_SOURCE_DIR}/include/memory/)
include_directories(${PROJECT_SOURCE_DIR}/include/register/)
include_directories(${PROJECT_SOURCE_DIR}/include/log/)

add_library(riscvsim SHARED ${SIM_SRC})

enable_testing()
# test 1: test ADD instruction
add_executable(Test_ADD ${PROJECT_SOURCE_DIR}/test/unittest/test_ADD.cpp)
target_link_libraries(Test_ADD riscvsim)
add_test(NAME test_add COMMAND ./RV64I/Test_ADD)



