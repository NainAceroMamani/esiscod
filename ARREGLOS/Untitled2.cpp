#include <iostream>
using namespace std;

int main(){
	int n; // total de elementos a ingresar
	int arreglo[20]; // Arreglo de 20 elementos
	int i, j, aux; // variable de control
	
	cout << "PROGRAMA PARA ORDENAR ELEMENTOS DE ARREGLO" << endl;
	cout << "ORDEN ASCENDENTE" << endl << endl;
		
	do {
		cout << "Elementos del arreglo (max 20): ";
		cin >> n;
	} while(n <= 0 || n > 20);
	
	// Pide al usuario el ingreso de los n elementos del arreglo
	cout << "\nIngreso de los " << n << " elementos al arreglo: " << endl;
	for (i = 0; i < n; i++) {
		cout << "Ingrese Elemento (" << i + 1 << "): ";
		cin >> arreglo[i];
	}
	
	// Ordena el arreglo de forma ascendente
	for (i=0; i < n - 1; i++) {
		for (j = i + 1; j < n; j++) {
			if(arreglo[i] > arreglo[j]) {
				aux = arreglo[i];
				arreglo[i] = arreglo[j];
				arreglo[j] = aux;
			}
		}
	}
	
	// Imprime los elementos de arreglo ya ordenado
	cout << "\nArreglo ya ordenado de forma ASCENDENTE" << endl;
	for(i = 0; i < n; i++){
		cout << "Elemento(" << i + 1 << ") = " << arreglo[i] << endl;
	}
	
	cout<< endl;
	system("PAUSE");
	cout<< endl;
	
	return 0;
}
