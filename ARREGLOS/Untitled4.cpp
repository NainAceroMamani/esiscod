#include <iostream>
using namespace std;

int sumarArreglo(int arr[], int tam)
{
	int suma = 0;
	for(int i=0; i<tam; i++) {
		suma += arr[i];
	}
	
	return suma;
}

int main(){
	
	int arreglo[] = {5, 8, 6, 4, 5};
	
	int tam = sizeof(arreglo) / sizeof(arreglo[0]);
	
	cout<<"La suma de los elementos es: " << sumarArreglo(arreglo, tam) << endl;
	
	return 0;
}
