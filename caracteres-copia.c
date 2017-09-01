#include <stdio.h>
#include <stdlib.h>

#define FILAS 2
#define COLUMNAS 7

char matriz[FILAS][COLUMNAS];
char letras[] = "ABCDEFGHIJKLMN";

void menu();
void llenarMatriz();
void imprimirMatriz();
void backToMenu();

int main() {
	
	menu();

	return 0;
}

void llenarMatriz(char vector[]) {
	/**
	 * Contador se encargará de determinar la posicion en 
	 * el vector, para así poder imprimir el caracter en la
	 * posicion que se ubique.
	 */
	int contador = 0;

	for (int i = 0; i < FILAS; i++) {
		for (int j = 0; j < COLUMNAS; j++) {
			matriz[i][j] = letras[contador];
			contador++;
		}
	}
}

/**
 * Funcion que permite imprimir una matriz dada, recibiendo 
 * como parametro un vector de caracteres.
 *
 */
void imprimirMatriz(char vector[]) {

	for (int i = 0; i < FILAS; i++) {
		for (int j = 0; j < COLUMNAS; j++) {
			printf("%c \t", matriz[i][j]);
		}
		printf("\n");
	}

}

void backToMenu() {
	int opcion;

	printf("\n");
	do {
		printf("\nPresione el Numero: 0 para ir al menu: ");
		scanf("%i", &opcion);
		
	} while (opcion != 0);
		
	system("cls||clear");
	menu();
	
}

void menu(){
	int opcion;

	printf("\n\n");
	printf("Programa que llena una matriz con caracteres de la A a la N");
	printf("\n");
	printf("1 - Iniciar el llenado de la matriz automaticamente");
	printf("\n");
	printf("2 - Visualizar vector");
	printf("\n");
	printf("0 - Salir");
	printf("\n\n");
	printf("Seleccione una opcion: ");
	// Leyendo la opcion elegida.
	scanf("%i", &opcion);

	system("cls||clear");

	switch(opcion) {
		case 1:
		llenarMatriz(letras); backToMenu();
		break;

		case 2:
		imprimirMatriz(letras); backToMenu();
		break;

		default:
		printf("Hasta la proxima! \n");
		break;
	}
	printf("\n");
}


