#include <stdio.h>

/*
Escreva um programa que leia um número inteiro, maior ou igual a zero, do usuá-
rio. Imprima o enésimo termo da sequência de Fibonacci. Essa sequência começa 
no termo de ordem zero, e, a partir do segundo termo, seu valor é dado pela soma 
dos dois termos anteriores. Alguns termos dessa sequência são: 0, 1, 1, 2, 3, 5, 8, 
13, 21, 34.
*/

int main()
{

    int n;
    int t1 = 0, t2 = 1, pTermo;

    printf("Qual termo: ");
    scanf("%i", &n);

    for (int i = 1; i <= n; i++)
    {
        printf(" %i ", t1);

        pTermo = t1 + t2;

        t1 = t2;
        t2 = pTermo;
    }
    
    return 0;

}