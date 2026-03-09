#include <stdio.h>

/*
Escreva um programa que leia 10 números e escreva o menor valor lido e o maior 
valor lido
*/

#define quan 4

int main()
{

    int n;
    int maior, menor = 0;

    for (int i = 0; i < quan; i++)
    {
        printf("N[%i] = ", i + 1);
        scanf("%i", &n);

       if (i == 0)
       {
        maior = n;
        menor = n;
       }
       else
       {

            if (n > maior)
            {
                maior = n;
            }

            if (n < menor)
            {
                menor = n;
            }
            
       }
       
    }

    printf("Maior = [%i]\n", maior);
    printf("Menor = [%i]\n", menor);

    return 0;
    

}