#include "Medico.h"

Medico::Medico(string _id, string _nombre, double _salarioBase, int _guardias, double _pagoGuardia)
	: Empleado(_id, _nombre, _salarioBase) {
	guardiasRealizadas = _guardias;
	pagoPorGuardia = _pagoGuardia;
}

double Medico::calcularSalarioBruto() {
	return salarioBase + (guardiasRealizadas * pagoPorGuardia);
}

double Medico::calcularDeducciones() {
	// Ejemplo: 9.34% CCSS + 5% impuesto
	return calcularSalarioBruto() * 0.1434;
}

double Medico::calcularSalarioNeto() {
	return calcularSalarioBruto() - calcularDeducciones();
}
