// Encabezados de la biblioteca estandar.
#include <stdio.h>

/* Directiva que uno crea, la buscara en
 * la carpeta donde se encuentra el archivo.
 */
//#include "nombre del archivo"

// Macro - Constante con aires de funciones.
#define CUBO(a) a*a*a
#define PI 3.1416

int main() {

	int suma;
	suma = PI + 3;
	printf("PI mas 3 da un total de: %d \n", suma);

	int a = 3;
	printf("El cubo de la variable a es: %d \n", CUBO(a));

	return 0;
} 