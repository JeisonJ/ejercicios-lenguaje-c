#include <stdio.h>

int main() {
	
	int opcion;

	printf("Ingrese un numero del 1 al 3 \n");	
	scanf("%i", &opcion);

	switch(opcion) {
		case 1:
		printf("Elegiste el primer caso\n");
		break;

		case 2:
		printf("Elegiste el segundo caso\n");
		break;

		case 3:
		printf("Elegiste el tercer caso\n");
		break;

		default:
		printf("No se ha encontrado tu caso\n");
		break;
	}

	return 0;
}