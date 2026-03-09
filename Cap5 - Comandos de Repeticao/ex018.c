#include <stdio.h>

/*
Faça um programa que receba um número inteiro maior do que 1 e verifique se o 
número fornecido é primo ou não
*/

int main()
{
    int n, c = 0;

    printf("Numero: ");
    scanf("%i", &n);

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            c++;
        }
    }

    if (c == 0)
    {
        printf("Numero primo\n");
    }
    else 
    {
        printf("Numero nao primo\n");
    }

    return 0;
}