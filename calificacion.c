#include <stdio.h>

int main() {
	
	int nota;
	printf("Introduzca la nota obtenida: ");
	scanf("%i", &nota);
	printf("\n");

	if (nota >=1 && nota <= 4) {
		
		printf("Su calificacion en letras es: E \n");

	} else if (nota >=4 && nota <= 8) {
		
		printf("Su calificacion en letras es: D \n");

	} else if (nota >=9 && nota <= 12) {
		
		printf("Su calificacion en letras es: C \n");

	} else if (nota >=13 && nota <= 16) {
		
		printf("Su calificacion en letras es: B \n");

	} else if (nota >=17 && nota <= 20) {
		
		printf("Su calificacion en letras es: A \n");

	}

	return 0;
}