#include <stdio.h>

/*
Faça um programa que preencha um vetor com 10 números reais. Em seguida, 
calcule e mostre na tela a quantidade de números negativos e a soma dos números 
positivos desse vetor
*/

int main()
{

    int vet[10], s = 0, n = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("N[%i] = ", i+1);
        scanf("%i", &vet[i]);

        if (vet[i] < 0)
        {
            n++;
        }
        else
        {
            s = s + vet[i];
        }

    }


    printf("Soma = %i\nNegativos = %i\n", s, n);

}