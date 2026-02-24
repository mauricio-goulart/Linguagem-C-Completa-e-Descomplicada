#include <stdio.h>

/*
Faça  um  programa  que  leia  um  número  inteiro  positivo  N  e  imprima  todos  os  
números naturais de 0 até N em ordem decrescente.
*/

int main()
{
    int n;
    printf("Num: ");
    scanf("%i", &n);

    for (int i = n; i >= 0; i--)
    {
        printf("%i ", i);
    }

    return 0;
    
}