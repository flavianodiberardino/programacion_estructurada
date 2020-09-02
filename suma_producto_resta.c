// Ingresa dos valores, calcula su suma, producto y resta del val1 menos val2, imprime los resultados
/* Datos............ val1, val2
Resultado........... suma, prod, resta
Proceso............. suma = val1 + val2
                     prod = val1 * val2
                     resta = val1 - val2*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int val1, val2, suma, prod, resta;

    printf("Ingresa el primer valor ");
    scanf("%i", &val1);

    printf("Ingresa el segundo valor ");
    scanf("%i", &val2);

    suma = val1 + val2;
    prod = val1 * val2;
    resta = val1 - val2;

    printf("La suma de los dos valores es %i \n", suma);
    printf("El producto de los dos valores es %i \n", prod);
    printf("La resta de los dos valores es %i \n", resta);

    return 0;
}