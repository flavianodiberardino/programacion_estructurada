// Ingresar los lados del triangulo, calcular perimetro e imprimirlo

/* datos.......... lado1, lado2, lado3
rta............... per
proceso........... per = lado1 + lado2 + lado3*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int lado1, lado2, lado3;
    float per;

    printf("Ingresa el primer lado ");
    scanf("%i", &lado1);

    printf("Ingresa el segundo lado ");
    scanf("%i", &lado2);

    printf("Ingresa el tercer lado ");
    scanf("%i", &lado3);

    per = lado1 + lado2 + lado3;

    printf("El perimetro del triangulo es %0.2f \n", per);

    return 0;
}