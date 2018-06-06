#include <stdio.h>
#include <stdlib.h>

int matriz[3][3];

void menu();
void ingresarValores();
void imprimirMatriz();
void verDiagonal();
void backToMenu();

int main() {
	
	menu();
	// llenarMatriz();
	// imprimirMatriz(matriz);	

	return 0;
}

void menu() {
	int opcion;

	printf("\n\n");
	printf("Programa que llena una matriz con numeros enteros y visualizar\nsu diagonal principal");
	printf("\n\n");
	printf("Aviso! La matriz esta defininida de 3x3.");
	printf("\n");
	printf("1 - Ingresar valores");
	printf("\n");
	printf("2 - Imprimir valores");
	printf("\n");
	printf("3 - Ver diagonal principal");
	printf("\n");
	printf("4 - Salir");
	printf("\n\n");
	printf("Seleccione una opcion: ");
	// Leyendo la opcion elegida.
	scanf("%i", &opcion);

	system("cls||clear");

	switch(opcion) {
		case 1:
		ingresarValores(); backToMenu();
		break;

		case 2:
		imprimirMatriz(matriz); backToMenu();
		break;

		case 3:
		verDiagonal(matriz); backToMenu();
		break;

		default:
		printf("Hasta la proxima! \n");
		break;
	}
	printf("\n");
}

void ingresarValores(){

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {

			printf("Ingrese el valor %i %i: ", i, j);
			scanf("%i", &matriz[i][j]);
			printf("\n");
		}
	}	
}

void imprimirMatriz(int matriz[][3]){

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%i", matriz[i][j]);
			printf("\t");
		}
		printf("\n");
	}
}

void verDiagonal(int matriz[][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {

			if(i == j) {
				printf("%i", matriz[i][j]);
				printf("\t");
			} else {
				matriz[i][j] = 0;
				printf("%i", matriz[i][j]);
				printf("\t");
			}
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