#include <stdio.h>

/*
Leia o valor do raio de um círculo. Calcule e imprima a área do círculo correspon-
dente. A área do círculo é A = π * raio2, sendo π = 3.141592.
*/

#define PI 3.14

int main()
{

    float r , r2;

    scanf("%f", &r);

    r2 = r * r;

    printf("Raio = \t%.2f || Diametro = \t%.2f", r, (PI*r2));

}