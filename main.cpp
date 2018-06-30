#include <iostream>
using namespace std;
#include "Nodo.h"
#include "seleccion.h"
#include "lista.h"
#include <fstream>
#include <cstring>

void agregarSeleccion();
void listarSeleccion();
//void eliminarSeleccion();
//void abrirArchivo();
lista list;

int main(){
    char opcion;
    bool seguido=true;

    do{
        cout<<"Examen #2"<<endl;
        cout<<"1.Agregar Seleccion: "<<endl;
        cout<<"2.Listar Seleccion: "<<endl;
        cout<<"3.Eliminar Seleccion: "<<endl;
        cout<<"4.Abrir Archivo Binario: "<<endl;
        cout<<"5.Salir: "<<endl;
        cin>>opcion;

        switch(opcion){
            case '1':
            agregarSeleccion();
            break;

            case '2':
            listarSeleccion();
            break;

            case '3':
            //eliminarSeleccion();
            break;

            case '4':
            //abrirArchivo();
            break;

            case '5':
            seguido=false;
            break;
            default:
                cout<<"Fuera de Rango"<<endl;
        }
    }while(seguido==true);
    list.imprimir();
    return 0;
}

//Metodos

void agregarSeleccion(){
    string nombre;
    int pGanados, pPerdidos, pEmpatados, pAnotado;
    string pGol;

    cout<<"Ingrese el nombre de la seleccion a Jugar"<<endl;
    cin>>nombre;
    cout<<"Ingrese los partidos ganados"<<endl;
    cin>>pGanados;
    cout<<"Ingrese los partidos perdidos"<<endl;
    cin>>pPerdidos;
    cout<<"Ingrese los partidos empatados"<<endl;
    cin>>pEmpatados;
    cout<<"Ingrese los goles anotados"<<endl;
    cin>>pAnotado;
    cout<<"Ingrese los goles anotados por el jugador"<<endl;
    cin>>pGol;
    seleccion sele(nombre,pGanados, pPerdidos, pEmpatados, pAnotado,pGol);
    Nodo n(sele);
    list.agregarInicio(n);

    ofstream fsalida("Seleccion.bin",ios::out|ios::binary);
    
}

void listarSeleccion(){
        char opcion;
        cout<<"1.Selecciones más goleadores: "<<endl;
        cout<<"2.Maximos goleadores: "<<endl;
        cout<<"3.Selecciones mas ganadores: "<<endl;
        cin>>opcion;
    
}
