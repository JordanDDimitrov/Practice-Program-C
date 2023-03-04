cmake_minimum_required(VERSION 3.5.1)

project(untitled C)


set(INC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include)
set(SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)

#generate project binary
add_executable(
    ${PROJECT_NAME}
        ${INC_DIR}/task2.h
        ${INC_DIR}/task1.h
        ${SRC_DIR}/main.c
        ${SRC_DIR}/task1.c
        ${SRC_DIR}/task2.c
        src/task3.c include/task3.h src/prime_number.c include/prime_number.h fdsfsd.h src/perfect_number.c src/perfect_number.h)

target_include_directories(
        ${PROJECT_NAME}
        PRIVATE
        ${INC_DIR}
)
