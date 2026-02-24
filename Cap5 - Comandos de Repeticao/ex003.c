#include <stdio.h>

/*
Faça um programa que leia um número inteiro N e depois imprima os N primei-
ros números naturais ímpares.
*/

int main()
{

    int n;
    printf("Num: ");
    scanf("%i", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            if (i == n)
            {
                printf("%i ...", i);
            }
            else
            {
                printf("%d -> ", i);
            }
            
        }

       
    }
    
    return 0;

}