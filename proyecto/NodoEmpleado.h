#ifndef NODOEMPLEADO_H
#define NODOEMPLEADO_H

#include "Empleado.h"

class NodoEmpleado {
private:
	Empleado* dato;       // puntero a la clase base
	NodoEmpleado* siguiente;
	
public:
	// Constructor y Destructor
	NodoEmpleado(Empleado* emp);
	~NodoEmpleado();
	
	// Métodos Getters y Setters
	void setDato(Empleado* emp);
	Empleado* getDato() const;
	
	void setSiguiente(NodoEmpleado* sig);
	NodoEmpleado* getSiguiente() const;
};

#endif
