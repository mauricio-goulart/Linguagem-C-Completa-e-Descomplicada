#include <stdio.h>

/*
Escreva um programa que leia um número inteiro e calcule a soma de todos os 
divisores desse número, com exceção dele próprio. Exemplo: a soma dos divisores 
do número 66 é 1 + 2 + 3 + 6 + 11 + 22 + 33 = 78
*/

int main()
{

    int n;
    int s = 0;
    printf("Numero: ");
    scanf("%i", &n);

    printf("Divisores de [%i] =", n);

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {

            if (i == n)
            {
                printf(" %i =", i);
            }
            else
            {
                printf(" %i, ",i);
            }

            s = s + i;
            


        }


        
    }

    printf(" %i", s - n);
    
    return 0;

}