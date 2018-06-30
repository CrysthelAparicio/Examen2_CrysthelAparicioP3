#ifndef NODO_H
#define NODO_H

#include "seleccion.h"

class Nodo{
  private:
    Nodo* siguiente;
    seleccion s;

  public:
    Nodo(seleccion);
    Nodo* getSiguiente();
    void setSiguiente(Nodo*);
    seleccion getSeleccion();
};

#endif