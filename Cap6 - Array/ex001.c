#include <stdio.h>

/*
Crie um programa que leia do teclado seis valores inteiros e em seguida mostra na 
tela os valores lidos.
*/

int main()
{

    int vet[6];

    for (int i = 0; i < 6; i++)
    {
        printf("N[%i] = ", i + 1);
        scanf("%i", &vet[i]);
    }

    printf("Valores Lidos:");

    for (int i = 0; i < 6; i++)
    {
        printf(" %i, ", vet[i]);
    }
    
    



    return 0;

}