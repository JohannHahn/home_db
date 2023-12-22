cmake_minimum_required(VERSION 3.11)

project(home_db)

add_subdirectory(raylib)

add_executable(home_db main.cpp)

target_link_libraries(home_db PUBLIC raylib)

