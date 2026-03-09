#include <stdio.h>

/*
Faça um programa que receba do usuário dois arrays, A e B, com 10 números in-
teiros cada. Crie um novo array C calculando C = A − B. Mostre na tela os dados 
do array C.
*/

int main()
{

    int a[10], b[10], c[10];

    for (int i = 0; i < 10; i++)
    {
        printf("A[%i] = ", i+1);
        scanf("%i", &a[i]);

    }

    for (int i = 0; i < 10; i++)
    {
        printf("B[%i] = ", i+1);
        scanf("%i", &b[i]);

    }
    
    for (int i = 0; i < 10; i++)
    {
        c[i] = a[i] - b[i];
    }

    printf("Vetor C = ");

    for (int i = 0; i < 10; i++)
    {
        printf("%i, ", c[i]);
    }

    printf("\n");
    
    return 0;
}