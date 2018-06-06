#include <stdio.h>

// Funciones a usar.
int suma();

int main() {
	
	int num1, num2;
	printf("Ingrese el primer valor: ");
	scanf("%i", &num1);
	
	printf("Ingrese el segundo valor: ");
	scanf("%i", &num2);

	// Llamando a la funcion.
	printf("El resultado de la suma de %i + %i es: %i", 
		num1, num2, suma(num1, num2));
	printf("\n");

	return 0;
}

int suma(int num1, int num2) {
	int suma = num1 + num2;
	return suma;
}