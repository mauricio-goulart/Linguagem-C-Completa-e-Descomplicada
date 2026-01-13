#include <stdio.h>

/*
Escreva um programa que leia um número inteiro e mostre o seu complemento 
bit a bit.
*/

int main()
{
    int n, complemento;
    
    scanf("%d", &n);

    complemento = ~n;

    printf("Complemento bit a bit: %d",complemento);
}