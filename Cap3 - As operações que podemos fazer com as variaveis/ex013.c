#include <stdio.h>
#include <math.h>

/*
Sejam a e b os catetos de um triângulo cuja hipotenusa h é obtida pela equação: 
    h = √a^2 + b^2
Faça  um  programa  que  leia  os  valores  de  a  e  b,  e  calcule  o  valor  da  hipotenusa  
através da fórmula dada. Imprima o resultado
*/

int main()
{
    double a,b,a2,b2,h;

    scanf("%f %f", &a, &b);

    a2 = a*a;
    b2 = b*b;
    h = sqrt(a2+b2);

    printf("H = %.2f", h);

    

}