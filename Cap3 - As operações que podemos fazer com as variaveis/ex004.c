#include <stdio.h>

/*
Leia quatro valores do tipo float. Calcule e exiba a média aritmética desses valores. 
*/

int main()
{
    float n1,n2,n3,n4;
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    printf("Media aritmetica: %.2f", ((n1 + n2 + n3 + n4) / 4));
}