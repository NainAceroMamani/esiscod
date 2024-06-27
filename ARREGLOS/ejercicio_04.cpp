// Programa que lee un vector de N elementos y rota todas sus 
// componentes un lugar hacia su  derecha. Teniendo en cuenta 
// que la última componente se ha de desplazar al primer lugar

#include <iostream>
using namespace std;

int main(){
	
	int i, aux, arreglo[] = {10, 12, 99, 40, 55, 61, 10, 17, 12, 28, 19, 60, 10, 56, 36, 41, 19 , 40, 99, 61};
	
	int tam = sizeof(arreglo) / sizeof(arreglo[0]);
	
	aux = arreglo[tam - 1];
	
	for (i=tam-1; i > 0; i--) {
		arreglo[i] = arreglo[i - 1];
	}
	
	arreglo[0] = aux;
	
	// Imprime los elementos de arreglo
	for(i = 0; i < tam; i++){
		cout << "Elemento(" << i + 1 << ") = " << arreglo[i] << endl;
	}
	
	return 0;
}
