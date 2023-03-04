cmake_minimum_required(VERSION 3.5.1)

project(untitled C)


set(INC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include)
set(SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)

#generate project binary
add_executable(
    ${PROJECT_NAME}
        ${INC_DIR}/task1.h
        ${INC_DIR}/task2.h
        ${INC_DIR}/task3.h
        ${INC_DIR}/prime_number.h
        ${INC_DIR}/perfect_number.h

        ${SRC_DIR}/main.c
        ${SRC_DIR}/task1.c
        ${SRC_DIR}/task2.c
        ${SRC_DIR}/task3.c
        ${SRC_DIR}/prime_number.c
        ${SRC_DIR}/perfect_number.c
)
target_include_directories(
        ${PROJECT_NAME}
        PRIVATE
        ${INC_DIR}
)
