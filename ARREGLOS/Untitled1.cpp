#include <iostream>
using namespace std;

int main(){
	
	int n; // total de elementos a ingresar
	int arreglo[20]; // Arreglo de 20 elementos
	int i; // variable de control de estructura for
	
	cout << "INICIO: Datos del arreglo" << endl << endl;
	cout << "Valores actuales del arreglo:" << endl;
	
	for(i = 0; i < 20; i++){
		cout << "Elemento[" << i << "]=\t" << arreglo[i] << endl;
	}
	
	cout<< endl;
	system("PAUSE");
	cout<< endl;
	
	cout << "\nLLENADO DEL ARREGLO" << endl;
	cout << "Cuantos elementos tendra el arreglo (max 20)";
	cin >> n;
	
	if ((n > 0) && (n <= 20)) {
		cout << "\nIngreso de los " << n << " elementos al arreglo: " << endl;
		for (i = 0; i < n; i++) {
			cout << "Ingrese Elemento [" << i + 1 << "]: ";
			cin >> arreglo[i];
		}
		
		cout<< endl;
		system("PAUSE");
		cout<< endl;
		
		cout << "\nELEMENTOS DEL ARREGLO" << endl;
		for(i = 0; i < n; i++){
			cout << "Elemento[" << i + 1 << "] = " << arreglo[i] << endl;
		}
	} else {
		cout << "*** ERROR: Entrada no valida ***";
	}
	
	cout<< endl;
	system("PAUSE");
	cout<< endl;
	
	return 0;
}
