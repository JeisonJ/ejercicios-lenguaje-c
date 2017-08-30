#include <stdio.h>

int matriz [4][4];

int main() {
	
	int fila, columna;

	for (fila = 0; fila < 4; fila++) { // Ciclo para la fila.
	
		for (columna = 0; columna < 4; columna++) { // Ciclo para la columna.
		
			if (fila == columna) {
				matriz[fila][columna] = 1;
			}

			if (fila < columna && fila > columna) {
				matriz[fila][columna] = 0;
			}
		}		
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; ++j) {
			printf("%i", matriz[i][j]);
			printf("\t");
		}
		printf("\n");
	}

	return 0;
}