#include <stdio.h>

/*

Escreva um programa que leia do teclado um vetor de 10 posições. Escreva na tela 
quantos valores pares foram armazenados nesse vetor.

*/

int main()
{

    int vet[10], par = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("N[%i] = ", i+1);
        scanf("%i", &vet[i]);

        
        if (vet[i] % 2 == 0)
        {
            par++;
        }

    
    }
    

    printf("Quantidade de par = [%i]\n", par);

    return 0;

}