#include <stdio.h>
#include <string.h>

int main() {

	int vector[0];

 printf ("Numero: ");
   scanf ("%[^\n]", vector); // ó gets(vector);
 
   for (i = 0; i < strlen(vector); i++) {
      printf ("%c", vector[i]);
   }
 
  	return 0;
 }