#include <stdio.h>

int main() {
	
	int numero, d1, d2, d3, d4;
	printf("Introduzca un numero de 3 digitos para su desgloce: ");
	scanf("%i", &numero);
	printf("\n");

	d1 = numero / 100; // Obteniendo la centena.
	d2 = numero % 100; // Obteniendo el residuo.
	d3 = d2 / 10;	   // Obteniendo la decena.
	d4 = d2 % 10;	   // Obteniendo el residuo.

	printf("Usted a indroducido la cantidad de: %i \n", numero);
	printf("Y su desgloce es: %i - %i - %i", d1,d3,d4);
	printf("\n\n");
	
	return 0;
}