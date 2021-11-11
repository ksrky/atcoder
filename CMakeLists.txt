cmake_minimum_required(VERSION 3.20)
project(atcoder)

set(CMAKE_CXX_STANDARD 14)
set(PROBLEM_NAME abc226)

add_executable(atcoder main.cpp)
add_executable(A ${PROBLEM_NAME}/A.cpp)
add_executable(B ${PROBLEM_NAME}/B.cpp)
add_executable(C ${PROBLEM_NAME}/C.cpp)
add_executable(D ${PROBLEM_NAME}/D.cpp)
add_executable(E ${PROBLEM_NAME}/E.cpp)
add_executable(F ${PROBLEM_NAME}/F.cpp)
