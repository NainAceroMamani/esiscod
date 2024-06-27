#include <iostream>
using namespace std;

int main(){
	int n, sum = 0;
	
	cout << "Ingrese el número de elementos: ";
	cin >> n;
	
	int arr[n];
	
	cout << "Ingrese los elementos del arreglo:" << endl;
	for(int i = 0; i < n; i++){
		cin >> arr[i];
		sum += arr[i];
	}
	
	double promedio = (double) sum / n;
	cout << "El promedio es: " << promedio << endl;
	
	cout << "Elementos menores al promedio: ";
	for(int i = 0; i<n ; i++) {
		if(arr[i] < promedio) {
			cout << arr[i] << " ";
		}
	}
	
	cout<< endl;
	
	return 0;
}
