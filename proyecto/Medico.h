#ifndef MEDICO_H
#define MEDICO_H

#include "Empleado.h"

class Medico : public Empleado {
private:
	int guardiasRealizadas;
	double pagoPorGuardia;
	
public:
	Medico(string _id, string _nombre, double _salarioBase, int _guardias, double _pagoGuardia);
	
	// Sobrescritura de métodos virtuales (Polimorfismo)
	double calcularSalarioBruto() override;
	double calcularDeducciones() override;
	double calcularSalarioNeto() override;
};

#endif
