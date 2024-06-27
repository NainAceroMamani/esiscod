// Con el mismo vector del ejercicio 1. 
// Programa que invierte dicho vector imprimiéndolo. 

#include <iostream>
using namespace std;

int main(){
	int i, j, aux, arreglo[] = {10, 12, 99, 40, 55, 61, 10, 17, 12, 28, 19, 60, 10, 56, 36, 41, 19 , 40, 99, 61};
	
	int tam = sizeof(arreglo) / sizeof(arreglo[0]);
	
	for (i=0; i < tam - 1; i++) {
		for (j = i + 1; j < tam; j++) {
			aux = arreglo[i];  
	        arreglo[i] = arreglo[j];  
	        arreglo[j] = aux; 
		}
	}
	
	// Imprime los elementos de arreglo ya invertidos
	for(i = 0; i < tam; i++){
		cout << "Elemento(" << i + 1 << ") = " << arreglo[i] << endl;
	}
	
	return 0;
}
