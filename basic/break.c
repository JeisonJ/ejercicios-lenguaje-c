#include <stdio.h>

int main() {
	
	int i = 0;
	while(i <= 7) {
		if (i == 2) {
			printf("Sali del ciclo al llegar a: %i\n", i);
			break;
		}
		printf("Contando: %i\n", i);

		i++;
	}	

	return 0;
}