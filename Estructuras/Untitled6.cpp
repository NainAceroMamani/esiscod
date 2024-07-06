#include <iostream>
#include <string>
using namespace std;

struct Estudiante{
	string nombre;
	float calificaciones[3];	
};

int main(){

	Estudiante est;
	
	cout << "Ingrese el nombre del estudiante: ";
	getline(cin, est.nombre);
	for(int i = 0; i < 3; i++) {
		cout<<"Ingrese calificación" << i + 1 << ": ";
		cin >> est.calificaciones[i];
	}
	
	float promedio = 0;
	for(int i = 0; i < 3 ; i++) {
		promedio += est.calificaciones[i];
	}
	promedio /= 3;
	cout << "\nResumen:\n";
	cout << "Nombre: " << est.nombre << endl;
	cout << "Calificaciones: ";
	for(int i = 0; i < 3; i++) {
		cout << est.calificaciones[i] << " ";
	}
	
	cout << "\nPromedio: " << promedio << endl;

	return 0;
}

