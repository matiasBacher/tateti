#include <iostream>
#include <iomanip>
#include "juego.h"
using namespace std;

int main(int argc, char const *argv[])
{
    juego miJuego('O', 'X');
    int estado=0;
    int seguirJugando = 0;

    do
    {
        
    
        do 
        {   
            for (int i = 0; i < 5; i++)
            {   
                if (!(i%2==1))
                {
                    for (int j = 0; j < 3; j++)
                    {
                        char ficha = miJuego.getFicha(i/2,j)==0?' ':miJuego.getFicha(i/2,j);
                        cout<<ficha;

                        if (j<2)
                        {
                            cout<<" | ";    
                        }
                        else
                        {
                            cout<<endl;
                        }
                    }
                }
                else 
                {
                    cout<<setw(9)<<setfill('_')<<'_'<<endl;
                }
            }

                if (miJuego.getRonda()>4)
                {
                    estado=3;
                    continue;
                }

                cout<<"\n\nJugador "<<miJuego.GetTurno()<<endl;
                cout<<"Realice su jugada ingresando la fila y la columna"<<endl;

                int fila, columna;

                cin>>fila;
                cin>>columna;

                estado= miJuego.jugar(--fila, --columna);
                if (estado==-1)
                {
                    cout<<"\njugada no valida\n";
                }

                cout<<endl;
                

        } while (estado<1);

        if (estado<3)
        {
            cout<<"\n\nFelicidades Jugador: " << (miJuego.GetUltimoGanador()+1)<<endl;
        }
        else
        {
            cout <<"\n\nJuego Empatado"<<endl;
        }
        
        cout<<"jugador 1 gano: " <<miJuego.juegosGanados(0)<<" veces"<<endl;
        cout<<"jugador 2 gano: " <<miJuego.juegosGanados(1)<<" veces"<<endl;

        
        cout<<"\n\nDesea jugar otra partida?\nSi : 1 No : cualquier valor\n";
        cin>>seguirJugando;


    } while (seguirJugando==1);
}


