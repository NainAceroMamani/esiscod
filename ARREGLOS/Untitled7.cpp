#include <iostream>
using namespace std;

// sin usar string.h
// paso por referencia

void PonerMayusculas(char cadena[]) {
	int n = 0;
	while(cadena[n] != '\0') {
		n ++;
	}
	
	for (int i = 0; i<n; i++) {
		cadena[i] = toupper(cadena[i]);
	}
}

int main(){
	
	char miarray[] = "hola a todos";
	PonerMayusculas(miarray);
	
	cout << miarray;
	
	return 0;
}
