#include <stdio.h>

/*
Faça um programa que leia cinco valores e os armazene em um vetor. Em seguida, 
mostre todos os valores lidos juntamente com a média dos valores.
*/

int main()
{

    int v[5];
    float med = 0;


    for (int i = 0; i < 5; i++)
    {
        printf("N[%i]: ", i + 1);
        scanf("%i", &v[i]);
    }


    printf("Valores: ");

    for (int i = 0; i < 5; i++)
    {
        printf(" %i ", v[i]);
        med = med + v[i];
    }

    printf("\nMedia: [%.2f]", med/5.0);
    


    
    return 0;
}