#include "ListaEmpleados.h"
#include <iostream>

using namespace std;

ListaEmpleados::ListaEmpleados() {
	cabeza = nullptr;
	tamano = 0;
}

ListaEmpleados::~ListaEmpleados() {
	NodoEmpleado* actual = cabeza;
	while (actual != nullptr) {
		NodoEmpleado* siguiente = actual->getSiguiente();
		delete actual; // esto libera el nodo y el empleado si el destructor del nodo hace delete dato
		actual = siguiente;
	}
}

bool ListaEmpleados::estaVacia() const {
	return cabeza == nullptr;
}

int ListaEmpleados::getTamano() const {
	return tamano;
}

// inserción dinámica al final de la lista
void ListaEmpleados::agregar(Empleado* nuevoEmpleado) {
	NodoEmpleado* nuevoNodo = new NodoEmpleado(nuevoEmpleado);
	
	if (estaVacia()) {
		cabeza = nuevoNodo;
	} else {
		NodoEmpleado* actual = cabeza;
		while (actual->getSiguiente() != nullptr) {
			actual = actual->getSiguiente();
		}
		actual->setSiguiente(nuevoNodo);
	}
	tamano++;
}

// eliminar un nodo buscando por ID
bool ListaEmpleados::eliminar(string id) {
	if (estaVacia()) return false;
	
	NodoEmpleado* actual = cabeza;
	NodoEmpleado* anterior = nullptr;
	
	// Si el elemento a eliminar es la cabeza
	if (actual->getDato()->getId() == id) {
		cabeza = cabeza->getSiguiente();
		delete actual;
		tamano--;
		return true;
	}
	
	while (actual != nullptr && actual->getDato()->getId() != id) {
		anterior = actual;
		actual = actual->getSiguiente();
	}
	
	if (actual == nullptr) return false; // No se encontró
	
	anterior->setSiguiente(actual->getSiguiente());
	delete actual;
	tamano--;
	return true;
}

//llama a los métodos virtuales de cada clase hija
void ListaEmpleados::mostrar() const {
	NodoEmpleado* actual = cabeza;
	while (actual != nullptr) {
		actual = actual->getSiguiente();
	}
}
