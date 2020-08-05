add_library(juego juego.cpp) 
target_include_directories(juego
          INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
          )

add_library(jugador jugador.cpp) 
target_include_directories(jugador
          INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
          )

add_library(tablero tablero.cpp) 
target_include_directories(tablero
            INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
            )