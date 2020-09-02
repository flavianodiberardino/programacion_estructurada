// Ingresar tres valores y sumarlos, se puede sumar de a tres

/* datos...............val1, val2, val3, tot
resultado..............suma
proceso................tot = val1+val2+val3*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int val1, val2, val3, tot;

    printf("Ingresa el primer valor ");
    scanf("%i", &val1);

    printf("Ingresa el segundo valor ");
    scanf("%i", &val2);

    printf("Ingresa el tercer valor ");
    scanf("%i", &val3);

    tot = val1 + val2 + val3;

    printf("La suma de los valores es %i \n", tot);

    return 0;
}