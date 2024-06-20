#include <iostream>
#include <cmath>
using namespace std;

double calcularArea(double radio){
	
	double pi = M_PI;
	return pi * pow(radio, 2);
}

int main() {
	
	double radio, resultado;
	cout << "Ingrese el radio: ";
		
	cin >> radio;
	
	resultado = calcularArea(radio);
	
	cout << "El radio es: " << resultado;
		
	return 0;
}




