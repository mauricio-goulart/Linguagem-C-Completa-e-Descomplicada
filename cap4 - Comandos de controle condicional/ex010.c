#include <stdio.h>

/*
Faça um programa que leia três números inteiros positivos e efetue o cálculo de 
uma das seguintes médias de acordo com um valor numérico digitado pelo usuá-
rio e mostrado na tabela a seguir:

    1   x * y * z

    2   (x + 2 * y + 3 * z) / 6

    3   1 / (1/x) + (1/y) + (1/z)

    4   (x + y + z) / 3 

*/

int main()
{
    int x,y,z,i,r;
    scanf("%i %i %i %i", &x, &y, &z, &i);

    if (i == 1)
    {
        r = x * y * z;
        printf("%i", r);
    }
    else if (i == 2)
    {
        r = (float)(x + 2 * y + 3 * z / 6);
        printf("%i\n", r); 
    }
    else if (i == 3)
    {
        r = (1.0 / (1.0/x) * (1.0/y) * (1.0/z));
        printf("%i\n", r); 
    }
    else if (i == 4)
    {
        r = (float)(x + y + z) / 3;
        printf("%i\n", r);
    }

    return 0;
    
}