/* Una concesionaria de autos desea liquidar el sueldo a cada vendedor
pagando $500 por mes mas un  plus del 10% del precio sobre cada auto
vendido y un valor constante de 50 pesos por cada uno de ellos*/
// Ingresa el valor del vehiculo, cuantos vehiculos vendio y calcula su sueldo e imprimelo
/* Datos............ pagoM, plus, valC, valA, cantV
Resultado........... sueldo
Proceso............. plus = valA * 0.1
                     valC = cantV * 50
                     sueldo = pagoM + plus + valC*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int cantV, valC;
    int pagoM = 500;
    float valA, plus, sueldo;

    printf("Ingrese el valor del vehiculo ");
    scanf("%f", &valA);

    printf("Ingrese la cantidad de vehiculos vendidos ");
    scanf("%i", &cantV);

    plus = valA * 0.1;
    valC = cantV * 50;
    sueldo = pagoM + plus + valC;

    printf("Su sueldo es de %0.2f pesos \n", sueldo);



    return 0;
}