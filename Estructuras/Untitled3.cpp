#include <iostream>
#include <string>
using namespace std;

struct Empleado {
	int id;
	string nombre;
	float salario;
};

int buscarEmpleado(Empleado emp[], int n, int idBuscado) {
	for(int i = 0; i < n; i++) {
		if(emp[i].id == idBuscado) {
			return i;
		}
	}
	
	return -1;
}

int main(){
	
	const int TAM = 5;
	Empleado empleados[TAM] = {
		{101, "Juan Perez", 2500.0},
		{102, "Ana Lopez", 3000.0},
		{103, "Carlos Ruiz", 2800.0},
		{104, "Maria Garcia", 3200.0},
		{105, "Pedro Sanchez", 2700.0},
	};
	
	int idBuscar;
	cout<<"Ingrese el ID del empleado a buscar: ";
	cin>>idBuscar;
	
	int indice = buscarEmpleado(empleados, TAM, idBuscar);
	
	if(indice != -1) {
		cout<<"Empleado encontrado:\n";
		cout<<"Nombre: " << empleados[indice].nombre << endl;
		cout<<"Salario: $"<<empleados[indice].salario << endl;
	} else {
		cout<<"Empleado no encontrado.\n";
	}

	return 0;
}

