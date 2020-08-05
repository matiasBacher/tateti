#ifndef class_juego_h
#define class_juego_h
#include "tablero.h"
#include "jugador.h"

class juego
{
private:
    int ultimoGanador;
    jugador *jugadores[2];
    tablero *tableroJuego;
    int turno;
    int ronda;
    bool concidenciaLineal (int, int, int);
public:

    juego(char, char);
    ~juego();
    int jugar(int, int);
    bool determinarSiGano (int, int);
    void terminarJuego();
    int GetUltimoGanador ();
    int juegosGanados (int);
    char getFicha (int, int);
    int GetTurno ();
    int getRonda ();
};



#endif // !class_juego_h
