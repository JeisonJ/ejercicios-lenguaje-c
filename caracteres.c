#include <stdio.h>

char matriz[2][7];
char letras[] = "ABCDEFGHIJKLMN";

int main() {
	
	/*for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 7; ++j) {
			printf("%i", matriz[i][j]);
			printf("\t");
		}
		printf("\n");
	}*/
	matriz[0][0] = letras[1] -1;
	printf("%c\n", matriz[0][0]);

	return 0;
}