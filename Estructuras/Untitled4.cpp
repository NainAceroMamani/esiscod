#include <iostream>
#include <string>
using namespace std;

struct Producto {
	string nombre;
	float precio;
	int stock;
};

void eliminarProducto(Producto arr[], int &n, int indice) {
	if(indice >= 0 && indice < n) {
		for (int i = indice; i<n - 1; ++i) {
			arr[i] = arr[i+1];
		}
		
		n--;
	} else {
		cout<<"Índice no válido" << endl;
	}
}

int main(){
	const int TAM = 3;
	Producto inventario[TAM] = {
		{"Producto1", 10.0, 5},
		{"Producto2", 20.0, 10},
		{"Producto3", 30.0, 15}
	};
	
	int n = TAM;
	
	int indice;
	cout<<"Ingrese el índice del producto a eliminar (0-2): ";
	cin>>indice;
	eliminarProducto(inventario, n, indice);
	for(int i=0; i < n; ++i) {
		cout<<"Producto: "<<inventario[i].nombre << endl;
		cout<<"Precio: $" << inventario[i].precio << endl;
		cout<<"Stock: " << inventario[i].stock << endl<<endl;
	}

	return 0;
}

