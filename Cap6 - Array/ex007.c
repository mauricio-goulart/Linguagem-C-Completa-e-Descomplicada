#include <stdio.h>

/*
Faça um programa que receba do usuário um vetor X com 10 posições. Em segui-
da deverão ser impressos o maior e o menor elemento desse vetor
*/

int main()
{

    int vet[10], maior, menor;

    for (int i = 0; i < 10; i++)
    {
        printf("N[%i] = ", i+1);
        scanf("%i", &vet[i]);

        if (i == 0)
        {
            maior = vet[i];
            menor = vet[i];
        }

        if (vet[i] > maior)
        {
            maior = vet[i];
        }

        if (vet[i] < menor)
        {
            menor = vet[i];
        }

    }


    printf("Maior = [%i]\nMenor = [%i]\n", maior, menor);
    

    return 0;

}