// Ingrese el valor de dos enteros e imprima la suma
/* Datos............ val1, val2
Resultado........... suma
Proceso............. suma = val1 + val2*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int val1, val2, suma;

    printf("Ingresa el primer valor ");
    scanf("%i", &val1);

    printf("Ingresa el segundo valor ");
    scanf("%i", &val2);

    suma = val1 + val2;

    printf("El resultado de la suma es %i \n", suma);

    return 0;
}