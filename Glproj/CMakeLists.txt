cmake_minimum_required(VERSION 3.0.0)

project(OPENGL_proj VERSION 2137)
cmake_policy(SET CMP0072 NEW)

find_package(OpenGL REQUIRED)

add_executable(OPENGL_proj 

    src/main.cpp
    src/glad.h
    src/glad.c
)

target_link_libraries(OPENGL_proj 
    glfw
    OpenGL::GL
)