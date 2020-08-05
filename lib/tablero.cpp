#include "tablero.h"

tablero::tablero(int cFilas, int cColumna){
    construirTablero(cFilas, cColumna);
};

void tablero::construirTablero (const int  cFilas, const int cColumna)
{
    filas=cFilas;
    columnas=cColumna;
    casillas=new char**[filas];
    for (int i = 0; i < filas; i++)
    {
        casillas[i]= new char* [columnas];
        for (int j = 0; j < columnas; j++)
        {
            casillas [i][j]=0;
        }
        
    }
    
}


void tablero::ponerFicha (int fila, int columna, char &fichas)
{
    this->casillas[fila][columna]=&fichas;
}
char tablero::obtenerFicha(const int fFila, const int fColumna)
{
    char *punteroCasilla=casillas[fFila][fColumna];

    if (punteroCasilla==0)
    {
     return 0;  
    }
    
    return *punteroCasilla;
}

tablero::~tablero()
{
    for (int i = 0; i < this->filas; i++)
    {
        for (int j = 0; j < this->columnas; j++)
        {
            delete [] this->casillas[i][j];
        }
        delete [] this->casillas[i];
    }
    delete [] casillas;
    
}

int tablero::obtenerFila()
{
    return this->filas;
}

int tablero::obtenerColumna()
{
    return this->columnas;
}