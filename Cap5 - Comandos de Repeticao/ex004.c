#include <stdio.h>

/*
Faça  um  programa  que  determine  e  mostre  os  cinco  primeiros  múltiplos  de  3  
considerando números maiores que 0
*/

int main()
{
    int n = 1;
    int c = 0;

    while (c < 5)
    {
        if (n % 3 == 0)
        {
            printf("%i ", n);
            c++;
        }

        n++;

    }
    
    return 0;

}