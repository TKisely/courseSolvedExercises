cmake_minimum_required(VERSION 3.7)
project(courseSolvedExercises)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Bear/Bear.cpp Bear/Bear.h Bear/bearMain.h Bunny/Bunny.cpp Bunny/Bunny.h Bunny/bunnyMain.h)
add_executable(courseSolvedExercises ${SOURCE_FILES})