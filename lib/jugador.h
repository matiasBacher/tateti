#ifndef classJugador
#define classJugador

#include "tablero.h"

class jugador
{
private:
    int juegosGanados;
    unsigned int IdJugador;
    char ficha;
    tablero *tableroJuego;
public:
    jugador(char, tablero &, unsigned int);
    bool hacerJugada(int, int); //pone el puntero en una casilla del tablero
    char devolverFicha (); // devuelve la ficha elegida por el jugador
    void sumarVictoria ();
    int devolverVictorias();
};

#endif // DEBUG
