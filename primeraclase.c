/* INGRESE EL LEGAJO, CANTIDA DE HORAS TRABAJADAS Y EL VALOR DE LA HORA, CALCULE SU SUELDO*/

/*DATOS...............LEGAJO, CANTIDAD DE HORAS Y EL VALOR DE LA HORA
  RTA.................SUELDO
  PROCESOS............SUELDO= CANTIDAD DE HORAS X VALOR DE LA HORA*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int legajo,ch;  // CantDeHoras
    float vh, sueldo;

    printf("ingrese el legajo del empleado\n");
    scanf("%i", &legajo);
    printf("Ingrese la cantidad de horas trabajadas\n");
    scanf("%i", &ch);
    printf("Ingrese el valor de la hora\n");
    scanf("%f", &vh);

    sueldo = ch * vh;

    printf("el legajo %i cobrara %0.0f pesos\n", legajo, sueldo);

    return 0;
}