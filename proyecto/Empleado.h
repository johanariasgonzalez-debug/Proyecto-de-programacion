#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>
using namespace std;

class Empleado {
protected:
	string id;
	string nombre;
	double salarioBase;
	
public:
	Empleado(string _id, string _nombre, double _salarioBase);
	virtual ~Empleado();
	
	// Getters y Setters
	string getId() const;
	string getNombre() const;
	double getSalarioBase() const;
	
	void setId(string _id);
	void setNombre(string _nombre);
	void setSalarioBase(double _salarioBase);
	
	// Métodos virtuales puros (Obligan a las clases hijas a implementarlos - Polimorfismo)
	virtual double calcularSalarioBruto() = 0;
	virtual double calcularDeducciones() = 0;
	virtual double calcularSalarioNeto() = 0;
};

#endif
