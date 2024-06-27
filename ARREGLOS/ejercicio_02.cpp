// Con el mismo vector del ejercicio 1. 
// Programa que calcula e imprime las sumas 
// de las componentes de índice par y las de índice impar.

#include <iostream>
using namespace std;

int main(){
	
	int i,suma_par = 0,suma_impar = 0, arreglo[] = {10, 12, 99, 40, 55, 61, 10, 17, 12, 28, 19, 60, 10, 56, 36, 41, 19 , 40, 99, 61};
	
	int tam = sizeof(arreglo) / sizeof(arreglo[0]);
	
	for (i=0; i<tam; i++){
		if(i % 2 == 0) {
			// par
			suma_par += arreglo[i];
		} else {
			// impar
			suma_impar += arreglo[i];
		}
	}
	
	cout << "La suma de los componenets del índice par es: " << suma_par << endl;
	cout << "La suma de los componenets del índice impar es: " << suma_impar << endl;
	
	return 0;
}
