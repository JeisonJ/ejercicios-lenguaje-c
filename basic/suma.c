#include <stdio.h>

int main() {

	int numeroUno;
	int numeroDos;
	int resultado;

	printf("Ingrese el primer valor \n");
	scanf("%d", &numeroUno);
	printf("Ingrese el segundo valor \n");
	scanf("%d", &numeroDos);

	resultado = numeroUno + numeroDos;

	printf("La sumatoria de los numeros ingresados es:%d \n", resultado);

	return 0;
}