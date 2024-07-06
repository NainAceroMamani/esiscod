#include <iostream>
#include <string>
using namespace std;

struct Punto {
	float x,y;
};

Punto crearPunto(float x, float y) {
	Punto p;
	
	p.x = x;
	p.y = y;
	
	return p;
}

Punto sumaPuntos(Punto p1, Punto p2) {
	Punto resultado;
	
	resultado.x = p1.x + p2.x;
	resultado.y = p1.y + p2.y;
	
	return resultado;
}

void mostrarPunto(Punto p) {
	cout << "(" << p.x << ", " << p.y << ")";
}

int main(){
	
	Punto p1 = crearPunto(3.0, 4.0);
	Punto p2 = crearPunto(1.0, 2.0);
	
	cout << "Punto 1: ";
	mostrarPunto(p1);
	cout << endl;
	
	cout << "Punto 2: ";
	mostrarPunto(p2);
	cout << endl;
	
	Punto suma = sumaPuntos(p1, p2);
	cout<<"Suma de puntos: ";
	mostrarPunto(suma);
	cout << endl;
	return 0;
}

