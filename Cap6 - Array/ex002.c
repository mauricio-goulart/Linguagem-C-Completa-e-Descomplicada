#include <stdio.h>

/*
Crie um programa que leia do teclado seis valores inteiros e em seguida mostre na 
tela os valores lidos na ordem inversa.
*/

int main()
{
    int vet[6];

    for (int i = 0; i < 6; i++)
    {
        printf("N[%i]: ", i + 1);
        scanf("%i", &vet[i]);
    }

    printf("Ordem Inversa: ");

    for (int i = 5; i >= 0; i--)
    {
        printf(" %i, ", vet[i]);
    }
    
    
    return 0;

}