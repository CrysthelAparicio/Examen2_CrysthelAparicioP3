#include "Nodo.h"

Nodo::Nodo(seleccion v): s(v){
}

Nodo* Nodo::getSiguiente(){
    return siguiente;
}

void Nodo::setSiguiente(Nodo* x){
    siguiente = x;
}

seleccion Nodo::getSeleccion(){
    return s;
}