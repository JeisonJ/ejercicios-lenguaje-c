#include <stdio.h>
#include <stdlib.h> // Incluye srand() y rand().
#include <time.h>   // Incluye time().

char matriz[2][7];
char letras[] = "ABCDEFGHIJKLMN";

void llenarMatriz();
void imprimirMatriz();
int  sizeVector();

int main() {

	printf("\nLlenando e imprimiendo matriz de caracteres");
	printf("\n\n");

	llenarMatriz(matriz);
	imprimirMatriz(matriz);

	return 0;
}

void llenarMatriz(char matriz[][7]) {
	srand(time(0));
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 7; j++) {
			matriz[i][j] = letras[rand()%sizeVector(letras)];
		}
	}
}

void imprimirMatriz(char matriz[][7]) {
	srand(time(0));
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 7; j++) {
			printf("%c \t", matriz[i][j]);
		}
		printf("\n");
	}
}

/**
 * Funcion que permite calcular el tamaño de un vector
 * y retornar su valor.
 * Recibe como parametro un vector de tipo char.
 */
int sizeVector(char vector[]) {
	int size = sizeof(letras) - 1;
	return size; 
}
