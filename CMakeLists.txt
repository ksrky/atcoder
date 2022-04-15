#cmake_minimum_required(VERSION 3.20)
project(atcoder)

set(CMAKE_CXX_STANDARD 14)
set(CONTEST_DIR abc)
set(CONTEST_NAME abc233)

add_executable(exp experiment/exp.cpp)
add_executable(a ${CONTEST_DIR}/${CONTEST_NAME}/a.cpp)
add_executable(b ${CONTEST_DIR}/${CONTEST_NAME}/b.cpp)
add_executable(c ${CONTEST_DIR}/${CONTEST_NAME}/c.cpp)
add_executable(d ${CONTEST_DIR}/${CONTEST_NAME}/d.cpp)
add_executable(e ${CONTEST_DIR}/${CONTEST_NAME}/e.cpp)
add_executable(f ${CONTEST_DIR}/${CONTEST_NAME}/f.cpp)
