#include <stdio.h>

int main() {
	
	int temperatura;
	printf("Introduzca una temperatura: ");
	scanf("%i", &temperatura);
	printf("\n");

	if (temperatura >=0 && temperatura <= 36) {
		
		printf("[AZUL] - Relativamente fresco \n");

	} else if (temperatura >=37 && temperatura <= 50) {
		
		printf("[AMARILLO] - Esto se esta poniendo caliente \n");

	} else if (temperatura >=51 && temperatura <= 70) {
		
		printf("[NARANJA] - Estas en el rango de fusion del potasio \n");

	} else if (temperatura >=71 && temperatura <= 100) {
		
		printf("[ROJO] - Aun no es suficiente para freir un huevo \n");

	}

	return 0;
}