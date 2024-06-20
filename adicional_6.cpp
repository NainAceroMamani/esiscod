#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	int selecciona, numero;
	
	srand(time(0));
	
    printf("Selecciona una opcion: 1)Piedra 2)Papel 3)Tijera ");
    cin >> selecciona;

	numero = (rand()%2)+1;
	
	if(selecciona==2 && numero==1) {
		cout << "Ganaste";
	} else if(selecciona==3 && numero==2) {
		cout << "Ganaste";
	} else if(selecciona==1 && numero==3) {
		cout << "Ganaste";
	} else if(selecciona==numero){
		cout << "Empate";
	} else {
    	cout << "Perdiste";
	}

	return 0;
}

