#include <stdio.h>

/*

Escreva um programa que leia um número inteiro positivo N e em seguida impri-
ma N linhas do chamado triângulo de Floyd:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21

*/

int main()
{

    int n;
    int num = 1;

    printf("N de linhas: ");
    scanf("%i", &n);

    for (int j = 1; j <= n; j++)
    {

        for (int i = 1; i <= j; i++)
        {
            printf(" \t%i ", num);
            num++;
        }

        printf("\n");
        
    }

    return 0;
}