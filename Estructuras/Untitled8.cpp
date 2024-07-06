#include <iostream>
#include <string>
using namespace std;

struct Producto {
	string nombre;
	float precio;
};

struct Venta {
	int idVenta;
	string producto;
	int cantidad;
	float precioTotal;
};

struct Venta2 {
	int idVenta;
	Producto producto;
	int cantidad;
	float precioTotal;
};

int main(){
	
	Venta venta = { 101, "producto1", 200, 150 };
	
	Producto producto = { "producto2", 200 };
	
	Venta2 venta2 = {
		101, producto, 200, 150
	};
	
	cout << venta.producto << endl;
	
	cout << venta2.producto.nombre;
	
	return 0;
}

