#include <stdio.h>

/*
Faça um programa que preencha um vetor de tamanho 100 com os 100 primeiros 
números naturais que não são múltiplos de 7. Ao final, imprima esse vetor na tela.
*/

int main()
{

    int vet[100], c = 0;


    for (int i = 0; c < 100; i++)
    {
        
        if (i % 7 != 0)
        {
            vet[c] = i;
            c++;
        }
        
    }

    printf("Vet = ");

    for (int i = 0; i < 100; i++)
    {
        printf("%i ", vet[i]);
    }

    printf("\n");
    
    
    
    



    return 0;
}