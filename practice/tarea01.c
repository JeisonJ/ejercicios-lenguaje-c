#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Declaracion de funciones a usar.
int suma();
void leerCedula();
void calcularPotencia();
void leerNumero();

int main() {
	int opcion;

	printf("Bienvenido! Elige la opcion que desees y presiona [ENTER].");
	printf("\n");
	printf("1 - Sumar dos numeros");
	printf("\n");
	printf("2 - Leer la cedula de un 'estudiante'");
	printf("\n");
	printf("3 - Calcular la potencia de un numero");
	printf("\n");
	printf("4 - Leer un numero entero cualquiera");
	printf("\n");
	printf("5 - Salir");
	printf("\n\n");
	printf("Seleccione una opcion: ");
	// Leyendo la opcion elegida.
	scanf("%i", &opcion);

	system("cls||clear");

	switch(opcion) {
		case 1:
		printf("El resultado es: %i", suma()) ;
		break;

		case 2:
		leerCedula();
		break;

		case 3:
		calcularPotencia();
		break;

		case 4:
		leerNumero();
		break;

		default:
		printf("Hasta la proxima! \n");
		break;
	}
	//leerNumero();
	//calcularPotencia();
	//leerCedula();
	//printf("Resultado de la prueba: ", calcularPotencia());	
	printf("\n");

	return 0;
}

/*	
 * Funcion que recibe 2 parametros de tipo entero
 * y retorna la suma de los mismos.
 */
int suma() {

	int suma, num1, num2;

	printf("Introduzca el primer numero: ");
    scanf("%i", &num1);

    printf("Introduzca el segundo numero: ");
    scanf("%i", &num2);

	suma = num1 + num2;
	//printf("%i + %i = %i", num1, num2, suma);
	return suma;
}

/*	
 * Funcion que recibe 1 parametro de tipo entero.
 */
void leerCedula() {
	int cedula;

	printf("Buenos dias estudiante! Introduce tu cedula por favor: ");
	scanf("%i", &cedula);
	printf("\n");
	printf("Tu cedula se ha leido con exito, no hay mas por hacer.");
	printf("\n");
	printf("Asi qué, hasta luego portador de la cedula: %i", cedula);
}

void calcularPotencia() {

	double base, exponente, producto;

	printf("Introduzca el numero base: ");
    scanf("%lf", &base);

    printf("Introduzca el exponente: ");
    scanf("%lf",&exponente);

	producto = pow(base, exponente);
	printf("%.1lf^%.1lf = %.2lf", base, exponente, producto);
}

/*	
 * Funcion que recibe 1 parametro de tipo entero
 * y no hace mas nada.
 */
void leerNumero() {
	int numero;

	printf("Buenos dias! Introduce un numero entero por favor: ");
	scanf("%i", &numero);
	printf("\n");
	printf("Tu numero se ha leido con exito.");
	printf("\n");
	printf("Asi qué, te estaremos avisando si el numero: %i sale premiado.", 
		numero);
}