#include <stdio.h>

int main() {
	// Entre corchetes cuanto almacenara.
	/*int array[4] = {3,1,4,9};	
	printf("%i\n", array[2]);*/

	int size;
	printf("Elija el tamano del arreglo: ");
	printf("\n");
	scanf("%i",&size);

	int age[size];
	for (int i = 0; i < size; i++) {
		printf("Ingrese el valor: %i \n", i+1);
		printf("\n");
		scanf("%i", &age[i]);
	}

	printf("los valores ingresados en el arreglo son:\n");
	for (int i = 0; i < size; i++) {
		printf("%i - ", age[i]);
	}
	printf("\n");
	
	return 0;
}