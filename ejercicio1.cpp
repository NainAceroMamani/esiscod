#include <iostream>
using namespace std;

int saldo = 0;

// Funci�n para depositar dinero
void depositar() {
	saldo += 100;
	cout << "Se han depositado 100 unidades. Nuevos saldo: " << saldo << endl;
}

// Funci�n para retirar dinero
void retirar(){
	if(saldo >= 100) {
		saldo -= 100;
		cout << "Se han retirado 100 unidades. Nuevo saldo: " << saldo << endl;
	} else {
		cout << "Saldo insuficiente." << endl;
	}
}

// Funci�n para mostrar el saldo
void mostrarSaldo() {
	cout << "Saldo actual: " << saldo << endl;
}

void menu() {
	int opcion;
	
	do {
		
		cout << "\n--- Cajero Autom�tico ---" << endl;
		cout << "1. Deposito 100" << endl;
		cout << "2. Retirar 100" << endl;
		cout << "3. Mostrar saldo" << endl;
		cout << "4. Salir" << endl;
		cout << "Seleccionar una opci�n: ";
		
		cin >> opcion;
		
		switch (opcion) {
			case 1: 
				depositar();
				break;
			case 2: 
				retirar();
				break;
			case 3: 
				mostrarSaldo();
				break;
			case 4: 
				cout << "Saliendo..." << endl;
				break;
			default: 
				cout << "Opci�n no v�lida. Intente de nuevo." << endl;
		}
		
	} while (opcion != 4);
}

int main() {
	
	menu();
	return 0;
}
