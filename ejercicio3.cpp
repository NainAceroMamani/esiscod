#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double num;
	cout << "Ingrese un n�mero: ";
	cin >> num;
	
	cout << "Valor absoluto: " << fabs(num) << endl;
	cout << "Ra�z cuadrada: " << sqrt(num) << endl;
	cout << "Potencia (n^2): " << pow(num, 2) << endl;
	cout << "Redondeo al entero m�s cercano: " << round(num) << endl;
	cout << "Redondeo hacia arriba: " << ceil(num) << endl;
	cout << "Redondeo hacia abajo: " << floor(num) << endl;
	cout << "Seno: " << sin(num) << endl;
	cout << "Coseno: " << cos(num) << endl;
	cout << "Tangente: " << tan(num) << endl;
	return 0;
}



