// Ingresar los lados del triangulo rectangulo y calcular su hip, sup y per

/* datos.......... Lado1, Lado2
rta............... sup, hip y per
proceso........... sup = Lado1*Lado2/2
                   hip = raiz de la suma de los lados
                   per = Lado1 + Lado2 + hip*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int lado1, lado2;
    float hip, per, sup;

    printf("Ingresa el primer lado ");
    scanf("%i", &lado1);

    printf("Ingresa el segundo lado ");
    scanf("%i", &lado2);

    sup = (lado1*lado2)/2;
    hip = sqrt(pow(lado1,2)+pow(lado2,2));
    per = lado1 + lado2 + hip;

    printf("La superficie del triangulo es %0.2f \n", sup);
    printf("La diagonal del triangulo es %0.2f \n", hip);
    printf("El perimetro del triangulo es %0.2f \n", per);

    return 0;
}