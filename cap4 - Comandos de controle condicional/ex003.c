#include <stdio.h>

/*
Faça um programa que leia um número inteiro e verifique se esse número é par 
ou ímpar.
*/

int main()
{
    int n1;

    scanf("%d", &n1);

    if (n1%2 == 0)
    {
        printf("[%d] par", n1);
    }
    else
    {
        printf("[%d] impar", n1);
    }
    
}