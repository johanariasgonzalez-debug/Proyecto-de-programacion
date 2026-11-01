#include <iostream>
#include <string>

#include "ListaEmpleados.h"
#include "Medico.h"
#include "Enfermero.h"
#include "Administrador.h"

using namespace std;

int main() {

	//llamar aquí a la función de carga automática desde archivos de texto al iniciar
	
	
	int opcion = 0;
	
	do {
		cout << "\n=========================================\n";
		cout << "    SISTEMA DE PLANILLA HOSPITALARIA     \n";
		cout << "=========================================\n";
		cout << "1. Registrar Nuevo Empleado\n";
		cout << "2. Mostrar Lista de Empleados\n";
		cout << "3. Calcular y Ver Salarios\n";
		cout << "4. Guardar Datos en Archivo de Texto\n"; // <--- Base para tu compañero
		cout << "5. Salir\n";
		cout << "Seleccione una opcion: ";
		cin >> opcion;
		
		// limpiar el buffer de entrada para evitar errores
		cin.ignore();
		
		switch (opcion) {
		case 1: {
			cout << "\n--- REGISTRAR EMPLEADO ---\n";
			string nombre, id, puesto;
			int tipoEmpleado = 0;
			
			cout << "Ingrese Cedula: ";
			getline(cin, id);
			cout << "Ingrese Nombre: ";
			getline(cin, nombre);
			
			cout << "Seleccione el tipo de empleado:\n";
			cout << "1. Medico\n";
			cout << "2. Enfermero\n";
			cout << "3. Administrativo\n";
			cout << "Opcion: ";
			cin >> tipoEmpleado;
			cin.ignore();
			//
			// Aquí instancia la clase hija correspondiente según la opción
			//

			if (tipoEmpleado == 1) {
				//
				// para pedir datos específicos de médico y crear:
				//

				cout << "[Funcion simulada] Medico agregado correctamente.\n";
			} 
			else if (tipoEmpleado == 2) {
				// Empleado* nuevo = new Enfermero(id, nombre, ...);
				// listaEmpleados.agregar(nuevo);
				cout << "[Funcion simulada] Enfermero agregado correctamente.\n";
			} 
			else if (tipoEmpleado == 3) {
				// Empleado* nuevo = new Administrativo(id, nombre, ...);
				// listaEmpleados.agregar(nuevo);
				cout << "[Funcion simulada] Administrativo agregado correctamente.\n";
			} 
			else {
				cout << "Opcion de tipo invalida.\n";
			}
			break;
		}
		case 2: {
			cout << "\n--- LISTA DE EMPLEADOS REGISTRADOS ---\n";
			//
			// Aquí llamar al método de mostrar de tu lista de empleados.
			// listaEmpleados.mostrar();
			//
			cout << "[Funcion simulada] Mostrando empleados de la lista...\n";
			break;
		}
		case 3: {
			cout << "\n--- CALCULO DE SALARIOS ---\n";
			string idBuscado;
			cout << "Ingrese la cedula del empleado para calcular salario: ";
			getline(cin, idBuscado);
			
			
			
			
			cout << "[Funcion simulada] Calculando salario bruto y neto para el empleado...\n";
			break;
		}
		case 4: {
			cout << "\n--- GUARDAR DATOS EN ARCHIVO DE TEXTO ---\n";
			//
			//Implementar la funcion de guardado
			//
			
			cout << "[Espacio reservado] Los datos seran guardados en el archivo por el modulo de persistencia.\n";
			break;
		}
		case 5:
			cout << "\nSaliendo del sistema de planilla. ¡Hasta luego!\n";
			break;
		default:
			cout << "\nOpcion invalida. Intente de nuevo.\n";
		}
		
	} while (opcion != 5);
	
	return 0;
}
