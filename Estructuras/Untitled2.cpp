#include <iostream>
#include <string>
using namespace std;

struct Producto{
	string nombre;
	float precio;
	int stock;
};

int main(){
	
	const int TAM = 3;
	Producto inventario[TAM];
	
	for(int i = 0; i < TAM; i++){
		cout << "Ingrese datos del producto " << i + 1 << ":\n";
		cout<<"Nombre: ";
		if(i>0) cin.ignore(); // Limpiar el buffer solo después del primer ciclo
		getline(cin, inventario[i].nombre);
		
		cout<<"Precio: ";
		cin>>inventario[i].precio;
		cout<<"Stock: ";
		cin>>inventario[i].stock;
	}
	
	cout<<"\nInventario\n";
	for(int i = 0;i < TAM; i++){
		cout<<"Producto " << i+1 << ":\n";
		cout<<"Nombre: "<<inventario[i].nombre << endl;
		cout<<"Precio: $"<<inventario[i].precio << endl;
		cout<<"Stock: "<<inventario[i].stock << endl << endl;
	}
	
	return 0;
}

