#include "jugador.h"

jugador::jugador(char fichaC, tablero &tableroC, unsigned int idJugadorC)
: ficha(fichaC), tableroJuego(&tableroC), IdJugador(idJugadorC)
{
    this->juegosGanados=0;
}

bool jugador::hacerJugada(int jFila, int jColumna)
{
    if(jFila <3 && jColumna <3 && jFila >=0 && jColumna>=0 && tableroJuego->obtenerFicha(jFila,jColumna)==0  )
    {
        tableroJuego->ponerFicha(jFila, jColumna, this->ficha);
        return true;
    }
    else
    {
       return false; 
    }
}
char jugador::devolverFicha ()
{
    return this->ficha;
}

void jugador::sumarVictoria()
{
    this->juegosGanados=this->juegosGanados+1;
}

int jugador::devolverVictorias()
{
    return this->juegosGanados;
}