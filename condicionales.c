// Ingresar un valor y determinar si es positivo, negativo o cero

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int val;

    printf("Ingrese el valor ");
    scanf("%i", &val);

    if(val>0)
        {
            printf("El valor es positivo \n");
        }
    if(val<0)
        {
            printf("El valor es negativo \n");
        }
    if(val==0)
        {
            printf("El valor es cero \n");
        }

    return 0;
}