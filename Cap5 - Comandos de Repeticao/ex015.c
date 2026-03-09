#include <stdio.h>

/*
Elabore um programa que faça a leitura de vários números inteiros até que se digi-
te um número negativo. O programa tem de retornar o maior e o menor número 
lido.
*/

int main()
{

    int maior, menor, n, c = 0;

    do
    {

        printf("N[%i] = ", c + 1);
        scanf("%i", &n);

        if (c == 0)
        {
            maior = n;
            menor = n;
        }

        if (n > maior)
        {
            maior = n;
        }
        else if (n < menor && n >= 0)
        {
            menor = n;
        }

        c++;
        
    } while (n >= 0);

    printf("Menor = [%i]\nMaior = [%i]\n", menor, maior);

    return 0;
}