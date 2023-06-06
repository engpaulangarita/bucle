/* Programa: �rea de una circunferencia (Soluci�n 1) */

#include <stdio.h>

int main()
{
    float area, radio;

    printf( "\n   Introduzca radio: " );
    scanf( "%f", &radio );

    area = 3.141592 * radio * radio;

    printf( "\n   El %crea de la circunferencia es: %.2f", 160, area );

    printf( "\n\n   Pulse una tecla para salir..." );
    getchar(); /* Pausa */
   
    return 0;
}
