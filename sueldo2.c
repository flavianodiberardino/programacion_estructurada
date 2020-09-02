// Ingresa el tiempo trabajado y considerando que el valor de la hora es 10 pesos, calcular su sueldo e imprimirlo

/* Datos............ canth, valh
Resultado........... sueldo
Proceso............. sueldo = canth * valh*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int canth, sueldo;
    int valh = 10;

    printf("ingrese la cantidad de horas trabajadas ");
    scanf("%i", &canth);

    sueldo = canth * valh;

    printf("Su sueldo es de %i pesos \n", sueldo);

    return 0;
}