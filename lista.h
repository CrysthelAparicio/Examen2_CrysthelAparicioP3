#ifndef LISTA_H
#define LISTA_H

#include "Nodo.h"

#include <iostream>
#include <string>
using namespace std;

class lista{
  private:
    Nodo* head;
  public:
    lista();
    void agregarInicio(Nodo x);
    void agregarFinal(Nodo x);
    void agregarDespues(Nodo *&prev, Nodo x);
    void eliminar(Nodo *x);
    void imprimir();
    Nodo* buscarNodo(string);
    ~lista();
  	
};

#endif