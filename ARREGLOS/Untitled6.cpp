#include <iostream>
using namespace std;

// sin usar string.h

char* PonerMayusculas(char cadena[]) {
	int n = 0;
	while(cadena[n] != '\0') {
		n ++;
	}
	
	for (int i = 0; i<n; i++) {
		cadena[i] = toupper(cadena[i]);
	}
	return cadena;
}

int main(){
	
	char miarray[] = "hola a todos";
	cout << PonerMayusculas(miarray);
	
	return 0;
}
