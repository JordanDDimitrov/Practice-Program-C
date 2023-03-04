cmake_minimum_required(VERSION 3.5.1)

project(Practice C)


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
        ${INC_DIR}/is_palindrome.h
        ${INC_DIR}/cmake.h
        ${INC_DIR}/draw_pyramid.h
        ${INC_DIR}/draw_chess_board.h
        ${INC_DIR}/vector/Vector.h
        ${INC_DIR}/vector/Errors.h

        ${SRC_DIR}/main.c

        ${SRC_DIR}/task1.c
        ${SRC_DIR}/task2.c
        ${SRC_DIR}/task3.c
        ${SRC_DIR}/prime_number.c
        ${SRC_DIR}/perfect_number.c
        ${SRC_DIR}/is_palindrome.c
        ${SRC_DIR}/draw_chess_board.c
        ${SRC_DIR}/draw_pyramid.c
        ${SRC_DIR}/cmake.c
        ${SRC_DIR}/vector/Vector.c

)
target_include_directories(
        ${PROJECT_NAME}
        PRIVATE
        ${INC_DIR}
)

target_link_libraries(${PROJECT_NAME} m)
