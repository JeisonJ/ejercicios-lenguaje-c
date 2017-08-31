#include <stdio.h>
#include <stdlib.h> // Incluye srand() y rand().
#include <time.h>   // Incluye time().

char matriz[2][7];
char letras[] = "ABCDEFGHIJKLMN";

int main() {

	int contador = 1;
	
	srand(time(0));
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 7; j++) {
			matriz[i][j] = letras[rand()%contador];
			printf("%c \t", matriz[i][j]);
			contador++;
		}
		printf("\n");
	}
	return 0;
}