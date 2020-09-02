//Ingresar los lados de un rectangulo y calcular su diag, sup y per

/* Datos......... lado1, lado2
resultado........ diag, sup, per
proceso.......... sup = lado1 * lado2
                  diag = raiz cuadrada de la suma de los dos lados elevados al cuadrado
                  per = lado1 + lado2 * 2*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int lado1, lado2;
    float sup, diag, per;

    printf("Ingresa el primer lado ");
    scanf("%i", &lado1);

    printf("Ingresa el segundo lado ");
    scanf("%i", &lado2);

    sup = lado1 * lado2;
    diag = sqrt (pow(lado1,2)+pow(lado2,2));
    per = (lado1 + lado2 * 2);

    printf("La superficie del rectangulo es %0.2f \n", sup);
    printf("La diagonal principal del rectangulo es %0.2f \n", diag);
    printf("El perimetro del rectangulo es %0.2f \n", per);

    return 0;
}