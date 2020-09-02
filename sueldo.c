// Ingresa el valor de la hora y el tiempo trabajado, calcular su sueldo e imprimirlo

/* Datos............ valh, canth
Resultado........... sueldo
Proceso............. sueldo = valh * canth*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float valh, canth, sueldo;

    printf("Ingrese el valor de la hora ");
    scanf("%f", &valh);

    printf("Ingrese la cantidad de horas trabajadas ");
    scanf("%f", &canth);

    sueldo = valh * canth;

    printf("Su sueldo es de %0.2f pesos \n", sueldo);

    return 0;
}