#include <stdio.h>

/*
Faça um algoritmo que leia um número positivo e imprima seus divisores. Exem-
plo: os divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66.
*/

int main()
{

    int n;
    printf("Numero: ");
    scanf("%i", &n);

    printf("Divisores de [%i] =", n);

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf(" %i, ", i);
        }
        
    }
    
    return 0;

}