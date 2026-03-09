#include <stdio.h>

/*
Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e im-
prima sua média
*/

#define quan 4

int main()
{
    int s = 0;
    int n;

    for (int i = 0; i < quan; i++)
    {
        
        printf("N[%i] = ", i + 1);
        scanf("%i", &n);

        while (n < 0)
        {
            printf("Digite um valor positivo: ");
            scanf("%i", &n);
        }

        s = s + n;

    }

    printf("Media: %i\n", s/quan);
    
    
   
    return 0;

}