cmake_minimum_required(VERSION 3.20)
project(atcoder)

set(CMAKE_CXX_STANDARD 14)
set(CONTEST_NAME abc190)

add_executable(main main.cpp)
add_executable(a ${CONTEST_NAME}/a.cpp)
add_executable(b ${CONTEST_NAME}/b.cpp)
add_executable(c ${CONTEST_NAME}/c.cpp)
add_executable(d ${CONTEST_NAME}/d.cpp)
add_executable(e ${CONTEST_NAME}/e.cpp)
add_executable(f ${CONTEST_NAME}/f.cpp)
