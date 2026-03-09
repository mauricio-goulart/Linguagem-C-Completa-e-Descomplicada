#include <stdio.h>

/*
Em matemática, o número harmônico designado por Hn define-se como o enési-
mo termo da série harmônica. Ou seja:

hn = 1 + 1/2 + 1/3 ... + 1/n

Apresente um programa que calcule o valor de qualquer Hn.
*/

int main()
{

    int t;
    float hn = 0;

    printf("Qual termo de Hn: ");
    scanf("%i", &t);

    for (int i = 1; i <= t; i++)
    {

        hn = hn + 1.0/i;
        
    }

    printf("Valor Hn = [%.2f]", hn);
    
    return 0;
}