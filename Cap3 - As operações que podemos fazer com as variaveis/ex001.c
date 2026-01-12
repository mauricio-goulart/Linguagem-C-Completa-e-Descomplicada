#include <stdio.h>

/*
Faça um programa que leia um número inteiro e retorne seu antecessor e seu su-
cessor
*/

int main()
{
    int n;

    printf("Numero: ");
    scanf("%d", &n);

    int a, s;

    a = n - 1;
    s = n + 1;

    printf("\n==============================================\n");
    printf("Antecessor: \t%i    ||  Sucessor: \t%i\n",a , s);

}