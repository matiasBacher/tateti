#ifndef classTablero
#define classTablero



class tablero
{
private:
    char *** casillas;
    int columnas;
    int filas;
    void construirTablero(const int, const int);

public:
    tablero(int, int);
    ~tablero();
    void ponerFicha (int, int, char&);
    char obtenerFicha(const int, const int);
    int obtenerColumna();
    int obtenerFila();
};
#endif