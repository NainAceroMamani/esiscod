#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	int cantidad, maximo;
	
	srand(time(0));
	
	cout << "Cantidad de n�meros aleatorios: ";
	cin >> cantidad;
	
	cout << "N�mero m�ximo de n�mero aleatorio: ";
	cin >> maximo;
	
	for(int i = 0; i < cantidad ; i++) {
		cout << rand() % maximo << endl;
	}
	
	return 0;
}




