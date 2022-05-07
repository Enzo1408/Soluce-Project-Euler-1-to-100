#version minimale de cmake nécessaire
cmake_minimum_required(VERSION 2.6)

#nom du projet
project (Project_Euler)

#positionne la variable
set(CMAKE_C_FLAGS "-std=c99 -g -Wall")

add_executable(project function1_100.c)

target_link_libraries(project PRIVATE m)
