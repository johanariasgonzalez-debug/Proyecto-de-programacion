#include "Empleado.h"

Empleado::Empleado(string _id, string _nombre, double _salarioBase) {
	id = _id;
	nombre = _nombre;
	salarioBase = _salarioBase;
}

Empleado::~Empleado() {}

string Empleado::getId() const { return id; }
string Empleado::getNombre() const { return nombre; }
double Empleado::getSalarioBase() const { return salarioBase; }

void Empleado::setId(string _id) { id = _id; }
void Empleado::setNombre(string _nombre) { nombre = _nombre; }
void Empleado::setSalarioBase(double _salarioBase) { salarioBase = _salarioBase; }
