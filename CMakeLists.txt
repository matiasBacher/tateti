cmake_minimum_required(VERSION 3.15)
project (tateti)

add_executable(tateti main.cpp)

add_subdirectory(lib)

target_link_libraries(tateti juego jugador tablero)