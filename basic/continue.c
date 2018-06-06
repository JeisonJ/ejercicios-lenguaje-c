#include <stdio.h>

int main() {
	
	int i = 0;
	while(i <= 7) {
		
		i++;
		if (i == 2) {
			printf("Salte el ciclo al llegar a: %i\n", i);
			continue;
		}
		printf("Contando: %i\n", i);

	}	

	return 0;
}