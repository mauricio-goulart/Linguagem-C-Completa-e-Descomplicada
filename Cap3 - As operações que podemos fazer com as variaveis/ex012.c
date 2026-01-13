#include <stdio.h>

/*
Leia a altura e o raio de um cilindro circular e imprima o volume desse cilindro. 
O volume de um cilindro circular é calculado por meio da seguinte fórmula:
    V = π * raio2 * altura,
    em que π = 3.141592
*/

#define PI 3.14

int main()
{
    float a,r,r2;

    scanf("%f %f", &a, &r);

    r2 = r * r;

    printf("Volume: %f", (PI * r2 * a));

}