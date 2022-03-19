cmake_minimum_required(VERSION 3.19)
project(LinuxCProgramming C)

set(CMAKE_C_STANDARD 11)


add_executable(LinuxCProgramming src/1_chapter/1.1_HelloWorld.c src/2_chapter/2.1_HelloWorld.c src/3_chapter/3.1.c
        src/3_chapter/3.4.c src/3_chapter/3.5.c src/3_chapter/3.6.c src/3_chapter/3.7.c src/6_chapter/6.3.c src/7_chapter/7.1.c src/10_chapter/10.1.c)
add_executable(1.1_HelloWorld src/1_chapter/1.1_HelloWorld.c)
add_executable(2.1_HelloWorld src/2_chapter/2.1_HelloWorld.c)
add_executable(3.7 src/3_chapter/3.7.c)