#include <stdio.h>

/*
Faça um programa para verificar se determinado número inteiro lido é divisível 
por 3 ou 5, mas não simultaneamente pelos dois
*/

int main()
{

    int n;
    printf("Num: ");
    scanf("%i", &n);

    if (n % 3 == 0 && n % 5 != 0) 
    {
        printf("Atende: Divisivel so por 3\n");
    }
    else if (n % 5 == 0 && n % 3 != 0)
    {
        printf("Atende: Divisivel so por 5\n");
    }
    return 0;

}