#include "seleccion.h"

seleccion::seleccion(string pNombre, int pGanados, int pPerdidos, int pEmpatados, int pAnotado, string pGol){

    nombre = pNombre;
    partiGanados = pGanados;
    partiPerdidos = pPerdidos;
    partiEmpate = pEmpatados;
    golAnotado = pAnotado;
    golJugador = pGol;

}

string seleccion::getNombre(){
    return nombre;
}

int seleccion::getPartiGanados(){
    return partiGanados;
}

int seleccion::getPartiPerdidos(){
    return partiPerdidos;
}

int seleccion::getPartiEmpate(){
    return partiEmpate;
}

int seleccion::getGolAnotado(){
    return golAnotado;
}

string seleccion::getGoljugador(){
    return golJugador;
}

//////
void seleccion::setNombre(string pNombre){
    nombre = pNombre;
}

void seleccion::setPartiGanados(int pGanados){
    partiGanados = pGanados;
}

void seleccion::setPartiPerdidos(int pPerdidos){
    partiPerdidos = pPerdidos;
}

void seleccion::setPartiEmpate(int pEmpatados){
    partiEmpate = pEmpatados;
}

void seleccion::setGolAnotado(int pAnotado){
    golAnotado = pAnotado;
}

void seleccion::setGolJugador(string pGol){
    golJugador = pGol;
}

void seleccion::toString(){
    cout<<"Nombre->"<<nombre<<" ,Partidos Ganados->"<<partiGanados<< " ,Partidos Perdidos->"<<partiPerdidos;
    cout <<" ,Partidos Empatados->"<<partiEmpate<< " ,Goles Anotados->"<<golAnotado<< " ,Gol del Jugador->"<<golJugador<<endl;
}

string seleccion::tS(){
     cout<<"Nombre->"<<nombre<<" ,Partidos Ganados->"<<partiGanados<< " ,Partidos Perdidos->"<<partiPerdidos;
    cout <<" ,Partidos Empatados->"<<partiEmpate<< " ,Goles Anotados->"<<golAnotado<< " ,Gol del Jugador->"<<golJugador<<endl;
}