cmake_minimum_required(VERSION 3.11)

project(home_db)

add_subdirectory(raylib-5.0)
add_subdirectory(raygui)

add_executable(home_db main.cpp)

target_link_libraries(home_db PUBLIC raylib)

