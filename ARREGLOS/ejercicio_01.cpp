// 1. Programa que dado 20 números enteros sobre un vector 
// y obtiene e imprime cuáles son el mayor y 
// el menor número almacenados y cuántas veces se repiten ambos.

#include <iostream>
using namespace std;

int contador(int arreglo[], int tam, int numero) {
	int i, contador = 0;
	
	for (i=0; i<tam; i++){
		if (numero == arreglo[i]){
			contador++;
		}
	}
	
	return contador;
}

int main(){
	
	int i, j, aux;
	
	// mayor 99 - 2
	// menor 10 - 3
	
	int arreglo[] = {10, 12, 99, 40, 55, 61, 10, 17, 12, 28, 19, 60, 10, 56, 36, 41, 19 , 40, 99, 61};
	
	int tam = sizeof(arreglo) / sizeof(arreglo[0]);
	
	// Ordena el arreglo de forma ascendente
	for (i=0; i < tam - 1; i++) {
		for (j = i + 1; j < tam; j++) {
			if(arreglo[i] > arreglo[j]) {
				aux = arreglo[i];
				arreglo[i] = arreglo[j];
				arreglo[j] = aux;
			}
		}
	}
	
	int menor = arreglo[0];
	int mayor = arreglo[tam-1];
	
	int total_menor = contador(arreglo, tam, menor);
	int total_mayor = contador(arreglo, tam, mayor);
	
	cout << "El número mayor es: " << mayor << " y se repite " << total_mayor << " veces" << endl;
	cout << "El número menor es: " << menor << " y se repite " << total_menor << " veces" << endl;
	
	return 0;
}
