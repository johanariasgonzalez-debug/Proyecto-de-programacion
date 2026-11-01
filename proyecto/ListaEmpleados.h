#ifndef LISTAEMPLEADOS_H
#define LISTAEMPLEADOS_H

#include "NodoEmpleado.h"

class ListaEmpleados {
private:
	NodoEmpleado* cabeza;
	int tamano;
	
public:
	ListaEmpleados();
	~ListaEmpleados();
	
	bool estaVacia() const;
	int getTamano() const;
	
	void agregar(Empleado* nuevoEmpleado); // Inserción dinámica
	bool eliminar(string id);             // Eliminar por ID
	Empleado* obtener(int index) const;   // Obtener por posición
	void mostrar() const;                 // Recorrido polimórfico
};

#endif
