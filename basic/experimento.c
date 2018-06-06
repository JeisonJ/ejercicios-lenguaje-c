#include <stdio.h>
#include <stdlib.h> // Incluye srand() y rand().
#include <time.h>   // Incluye time().

char matriz[2][7];
char letras[] = "ABCDEFGHIJKLMN";

int main() {

	int contador = 1;
	int aleatorio, g;
	
	srand(time(0));
	for (int i = 0; i < 2; i++) {
		
		g = i;
		aleatorio = rand()%contador;

		for (int j = 0; j < 7; j++) {
			if (aleatorio == matriz[i][j]) {
				j = j--;
			}

			while(aleatorio != matriz[i][j]) {
				matriz[i][j] = aleatorio;
				printf("%i\t", matriz[i][j]);
			}			
		}

		printf("\n");
	}
	return 0;
}