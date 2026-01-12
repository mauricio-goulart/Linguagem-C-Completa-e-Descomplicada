#include <stdio.h>

/*
Faça um programa que leia um número real e imprima a quinta parte desse nú-
mero.
*/

int main()
{
    float n;

    printf("Digite um numero: ");
    scanf("%f", &n);

    printf("\n===========================\n");
    printf("Quinta parte do numero: %.2f\n", n / 5);

}