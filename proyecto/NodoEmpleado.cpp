#include "NodoEmpleado.h"

NodoEmpleado::NodoEmpleado(Empleado* emp) {
	dato = emp;
	siguiente = nullptr;
}

NodoEmpleado::~NodoEmpleado() {

	delete dato; 
}

void NodoEmpleado::setDato(Empleado* emp) { dato = emp; }
Empleado* NodoEmpleado::getDato() const { return dato; }

void NodoEmpleado::setSiguiente(NodoEmpleado* sig) { siguiente = sig; }
NodoEmpleado* NodoEmpleado::getSiguiente() const { return siguiente; }
