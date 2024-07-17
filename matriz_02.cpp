#include <iostream>
#include <cmath>

using namespace std;

double determinarOrden2(double matriz[2][2]) {
	return matriz[0][0] * matriz[1][1] - matriz[0][1] * matriz[1][0];
}

double obtenerMenorComplementario(double matriz[3][3], int fila, int columna) {
	
	double menor[2][2];
	int mFila = 0, mColumna = 0;
	
	for(int i = 0; i < 3; i++) {
		if(i != fila) {
			for (int j = 0; j < 3; j++) {
				if(j != columna) {
					menor[mFila][mColumna] = matriz[i][j];
					mColumna++;	
				}
			}
			mFila++;
			mColumna = 0;
		}
	}
	return determinarOrden2(menor);
}

double obtenerCofactor(double matriz[3][3], int fila, int columna) {
	double menorComplementario = obtenerMenorComplementario(matriz, fila, columna);
	return pow(-1, fila + columna) * menorComplementario;
}

double determinarOrden3(double matriz[3][3]) {
	double determinante = 0;
	for(int j = 0; j < 3; j++) {
		determinante += matriz[0][j] * obtenerCofactor(matriz, 0, j);
	}
	
	return determinante;
}

/**

**/

void sustituirColumna(double matriz[3][3], double b[3], int columna, double resultado[3][3]) {
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			if(j == columna) {
				resultado[i][j] = b[i];
			} else {
				resultado[i][j] = matriz[i][j];
			}
		}
	}
}

void metodoCramer(double matriz[3][3], double b[3], double soluciones[3]){
	double A1[3][3] , A2[3][3], A3[3][3];
	
	sustituirColumna(matriz, b, 0, A1);
	sustituirColumna(matriz, b, 1, A2);
	sustituirColumna(matriz, b, 2, A3);
	
	double detA = determinarOrden3(matriz);
	
	soluciones[0] = determinarOrden3(A1) / detA;
	soluciones[1] = determinarOrden3(A2) / detA;
	soluciones[2] = determinarOrden3(A3) / detA;
}

int main() {
	double matriz[3][3] = {
		{2, 3, -1},
		{4, -1, 2},
		{1,1,1}
	};
	
	double b[3] = {5, 19, 8};
	double soluciones[3];
	
	metodoCramer(matriz, b, soluciones);
	
	cout << "Soluciones: " << endl;
	for(int i = 0; i < 3; i++) {
		cout << "x" << i + 1<< " = " << soluciones[i] << endl;
	}
	
	return 0;
}

