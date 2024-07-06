#include <iostream>
#include <string>
using namespace std;

struct Fecha {
	int dia, mes, anio;
};

struct Persona {
	string nombre;
	Fecha fechaNacimiento;
};

int main(){
	
	Persona persona;
	
	cout<<"Ingrese el nombre: ";
	getline(cin, persona.nombre);
	
	cout<<"Ingrese fecha de nacimiento: \n";
	cout<<"Día: ";
	cin>>persona.fechaNacimiento.dia;
	cout<<"Mes: ";
	cin>>persona.fechaNacimiento.mes;
	cout<<"Año: ";
	cin>>persona.fechaNacimiento.anio;
	
	cout<<"\nDatos de la persona: \n";
	cout<<"Nombre: "<<persona.nombre << endl;
	cout<<"Fecha nacimiento: "
		<< persona.fechaNacimiento.dia << "/"
		<< persona.fechaNacimiento.mes << "/"
		<< persona.fechaNacimiento.anio << endl;
	
	return 0;
}

