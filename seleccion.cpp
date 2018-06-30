#include "seleccion.h"
#include <fstream>
#include <iostream>
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

void seleccion::read(ifstream& in){
  int size;
  in.read(reinterpret_cast<char*>(&partiGanados),sizeof(int));

  in.read(reinterpret_cast<char*>(&partiPerdidos),sizeof(int));

  in.read(reinterpret_cast<char*>(&partiEmpate),sizeof(int));

  in.read(reinterpret_cast<char*>(&golAnotado),sizeof(int));

  in.read(reinterpret_cast<char*>(&golJugador),sizeof(int));

  in.read(reinterpret_cast<char*>(&size),sizeof(int));
  char numBuffer[size];
  in.read(numBuffer,size);
  nombre=numBuffer;

  in.read(reinterpret_cast<char*>(&size),sizeof(int));
  char maxGolBuffer[size];
  in.read(numBuffer,size);
  golJugador=numBuffer;
}

void seleccion::write(ofstream& out){
  int size = nombre.size();
  out.write(reinterpret_cast<char*>(&size),sizeof(int));
  out.write(nombre.data(),nombre.size());


  size = golJugador.size();
  out.write(reinterpret_cast<char*>(&size),sizeof(int));
  out.write(golJugador.data(),golJugador.size());

  out.write(reinterpret_cast<char*>(&partiGanados),sizeof(int));

  out.write(reinterpret_cast<char*>(&partiPerdidos),sizeof(int));

  out.write(reinterpret_cast<char*>(&partiEmpate),sizeof(int));


  out.write(reinterpret_cast<char*>(&golAnotado),sizeof(int));

  out.write(reinterpret_cast<char*>(&golJugador),sizeof(int));

}