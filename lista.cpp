#include "lista.h"

lista::lista(){
   head = NULL;
}

void lista::agregarInicio(Nodo x){
    Nodo* y = new Nodo(x);
    y->setSiguiente(head);
    head = y;
}

void lista::agregarFinal(Nodo x)
{
    Nodo* y = new Nodo(x);
    if(head != NULL){
        Nodo* temp = head;
        while(temp != NULL && temp->getSiguiente() != NULL){
            temp = temp->getSiguiente();
        }
        temp->setSiguiente(y);
        y->setSiguiente(NULL);
    } else {
        y->setSiguiente(head);
        head = y;
    }
}

void lista::agregarDespues(Nodo *&prev, Nodo x){
    Nodo* y = new Nodo(x);
    Nodo* temp = prev->getSiguiente();
    prev->setSiguiente(y);
    y->setSiguiente(temp);
}

void lista::eliminar(Nodo *x){
    Nodo* temp = x;
    if(head == x){
        head = head->getSiguiente();
    } else if(head != NULL) {
        Nodo* temp = head;
        while(temp->getSiguiente() != x ) {
            temp = temp->getSiguiente();
        }
	temp->setSiguiente(temp->getSiguiente()->getSiguiente());    
    }
    delete x;
}

void lista::imprimir(){
    Nodo* temp = head;
    while(temp != NULL){
	temp->getSeleccion().toString();
        temp = temp->getSiguiente();	
    }
    cout << "\n";
}

Nodo* lista::buscarNodo(string nombre){
	Nodo* temp = head;
	while(temp->getSeleccion().getNombre() != nombre){
		temp = temp->getSiguiente();	
	}
	return temp;
}

lista::~lista(){
	
}