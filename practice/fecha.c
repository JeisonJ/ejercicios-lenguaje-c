#include <stdio.h>

int main()
{
    int dia_maximo, dia, mes, anio, fecha_correcta;

    printf("\n   Introduzca día: ");
    scanf( "%d", &dia );
    printf("\n   Introduzca mes: ");
    scanf( "%d", &mes );
    printf("\n   Introduzca año: ");
    scanf( "%d", &anio );

    fecha_correcta = 0;

    if ( mes >= 1 && mes <= 12 )
    {
        switch ( mes )
        {
        	// Meses de 31 dias.
            case  1 :
            case  3 :
            case  5 :
            case  7 :
            case  8 :
            case 10 :
            case 12 : dia_maximo = 31;
                      break;

            // Meses de 30 dias.
            case  4 :
            case  6 :
            case  9 :
            case 11 : dia_maximo = 30;
                      break;

            // Meses con 28 dias, salvo en año bisiesto que tiene 29 dias.
            case  2 : if ( anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0 )
                          dia_maximo = 29;
                      else
                          dia_maximo = 28;
        }

        if ( dia >= 1 && dia <= dia_maximo )
            fecha_correcta = 1;
    }

    if ( fecha_correcta )
        printf( "\n   FECHA CORRECTA \n\n" );
    else
        printf( "\n   FECHA INCORRECTA \n\n" );

    //getch(); /* Pausa */

    return 0;
}