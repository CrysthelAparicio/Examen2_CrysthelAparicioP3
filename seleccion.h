#ifndef SELECCION_H
#define SELECCION_H

#include <iostream>
#include <string>

using namespace std;

class seleccion{
    private:
        string nombre;
        int partiGanados;
        int partiPerdidos;
        int partiEmpate;
        int golAnotado;
        string golJugador;

    public:
        seleccion(string,int,int,int,int,string);

        string getNombre();
        int getPartiGanados();
        int getPartiPerdidos();
        int getPartiEmpate();
        int getGolAnotado();
        string getGoljugador();

        void toString();
        string tS();

        void setNombre(string);
        void setPartiGanados(int);
        void setPartiPerdidos(int);
        void setPartiEmpate(int);
        void setGolAnotado(int);
        void setGolJugador(string);

};
#endif