#include <stdio.h>

/*
Faça um programa que leia dois valores do tipo float. Use um único comando de 
leitura para isso. Em seguida, imprima os valores lidos na ordem inversa em que eles 
foram lidos. 
*/

int main()
{
    float n1,n2;
    scanf("%f %f", &n1, &n2);

    printf("Valores: %f %f", n2, n1);
}