#include <stdio.h>

/*
Leia  um  ângulo  em  graus  e  apresente-o  convertido  em  radianos.  A  fórmula  de  
conversão é R = G ∗ π/180, sendo G o ângulo em graus e R em radianos e π = 
3.141592.
*/

#define PI 3.14

int main()
{
    float graus, rad;

    scanf("%f", &graus);

    rad = graus * PI/180;

    printf("Graus: \t%.2f || Rad: \t%.2f", graus, rad);

}