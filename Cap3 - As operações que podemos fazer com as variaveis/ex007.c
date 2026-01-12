#include <stdio.h>

/*
Faça um programa que leia um valor em reais e a cotação do dólar. Em seguida, 
imprima o valor correspondente em dólares.
*/

int main()
{
    float r, cot;
    scanf("%f %f", &r, &cot);

    printf("Reais = \t%.2f || Dolar = \t%.2f", r, r*cot);

}