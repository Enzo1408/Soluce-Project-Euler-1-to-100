cmake_minimum_required(VERSION 3.10)

# set the project name
project(Project_Euler)

add_executable(project function1_100.c)

target_link_libraries(project PRIVATE m)
