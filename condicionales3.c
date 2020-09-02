// Ingresar tres valores, calcular su promedio e indicar cual/es son mayor que el promedio

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int val1, val2, val3;
    float promedio;

    printf("Ingrese el valor 1 \n");
    scanf("%i", &val1);
      printf("Ingrese el valor 2 \n");
    scanf("%i", &val2);
      printf("Ingrese el valor 3 \n");
    scanf("%i", &val3);

    promedio = (val1 + val2 + val3)/3;

    if(val1>promedio)
        {
            printf("El valor 1 es mayor al promedio \n");
        }
    if(val2>promedio)
        {
            printf("El valor 2 es mayor al promedio \n");
        }
    if(val3>promedio)
        {
            printf("El valor 3 es mayor a promedio \n");
        }

    return 0;
}