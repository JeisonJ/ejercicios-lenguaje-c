#include <stdio.h>

int main() {
	
	int binario[100], i=0, j=0, numero;
      printf("\n");
      printf("dame un numero: ");
      scanf("%d",&numero);
      printf("\n");

      for(i=100;i>0;i--)
      {
           binario[i]=numero%2;
           numero=numero/2;
      }
      for(i=1;i<=100;i++)
      {
           if(binario[i]==1)
           {
                for(j=i;j<=100;j++)
                {
                     printf("%d",binario[j]);
                     printf("\n\n");
                }
                break;
           }
      }	

	return 0;
}