#include <stdio.h>

/*
Faça um programa que leia dois números inteiros e depois os imprima na ordem 
inversa em que eles foram lidos.
*/

int main()
{
    int n1,n2;

    scanf("%i %i", &n1, &n2);
    printf("%i, %i", n2, n1);
}