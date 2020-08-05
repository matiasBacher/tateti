#include "juego.h"

juego::juego(char fichaJugador1, char fichaJugador2)
{
    this->tableroJuego= new tablero (3,3);
    this->jugadores[0]= new jugador(fichaJugador1, *tableroJuego, 0);
    this->jugadores[1]= new jugador(fichaJugador2, *tableroJuego, 1);
    this->turno=0;
    this->ronda=0;
}

juego::~juego()
{
    delete [] tableroJuego;
    delete [] jugadores[0];
    delete [] jugadores[1];
}

bool juego::concidenciaLineal(int jFila, int jColumna, int modo)
{
    bool retorno =true;
    int *primerValor;
    int *segundoValor;
    int i=0;

    char fFicha=tableroJuego->obtenerFicha(jFila,jColumna);
    if (modo==0)
    {
        primerValor=&i;
        segundoValor=&jColumna;
    }
    else if (modo==1)
    {
        primerValor=&jFila;
        segundoValor=&i;
    }
    else if (modo>1)
    {
        primerValor=&i;
        segundoValor=&i;
    }
    
    if (modo==3)
    {
        i=2;
        for ( ; i >= 0 && retorno; i--)
        {
            if (tableroJuego->obtenerFicha(*primerValor, *segundoValor)!=fFicha)
            {
                retorno=false;
            }
        }
    }
    else
    {
         for ( ; i < 3 && retorno; i++)
    {

        if (tableroJuego->obtenerFicha(*primerValor, *segundoValor)!=fFicha)
        {
            retorno=false;
        }

    }
    }
    return retorno;    
       
}

char juego::getFicha(int gFila, int gColumna)
{
    char retorno = this->tableroJuego->obtenerFicha(gFila, gColumna);
    return retorno;
}

bool juego::determinarSiGano (int dFila, int dColumna)
{
    bool concidencia=false;

    if (this->concidenciaLineal(dFila, dColumna, 0))
    {
        concidencia=true;
    }
        
    else if (this->concidenciaLineal(dFila, dColumna, 1))
    {
        concidencia=true;
    }

    else if (dFila==dColumna || ((dFila==2)&&(dColumna==0)) || ((dFila==0)&&(dColumna==2)))
    {
        if (this->concidenciaLineal(dFila, dColumna, 2))
        {
            concidencia=true;
        }
        else if (this->concidenciaLineal(dFila, dColumna, 3))
        {
            concidencia=true;
        }
    } 
    return concidencia;    
}

void juego::terminarJuego()
{
    char *nada=0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            this->tableroJuego->ponerFicha(i,j, *nada);
        }
    }
    
}
    

int juego::jugar (int jjFila, int jjColumna)
{
    if (this->ronda>3&&this->turno==1)
    {
        return 3;
    }

    if(!(this->jugadores[this->turno]->hacerJugada(jjFila, jjColumna)))
    {
        return -1;
    }
    if (this->ronda>1&&this->determinarSiGano(jjFila, jjColumna))
    {
        this->ultimoGanador=this->turno;
        this->jugadores[turno]->sumarVictoria();
        this->terminarJuego();
        return this->turno+1;
    }

        ++this->turno;
        if (turno==2)
        {
            this->turno=0;
            ++this->ronda;
        }


    

    return 0;
}

int juego::GetUltimoGanador()
{
    return this->ultimoGanador;
}

int juego::juegosGanados(int JGJugador)
{
    if (JGJugador==3)
    {
        this->juegosGanados(this->GetUltimoGanador());
    }
    else if(JGJugador<2&&JGJugador>-1)
    {
        return this->jugadores[JGJugador]->devolverVictorias();
    }

    
        return -1;
    
        
}

int juego::GetTurno()
{
    return this->turno+1;
}

int juego::getRonda ()
{
    return this->ronda;
}