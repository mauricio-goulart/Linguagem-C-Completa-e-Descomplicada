#include <stdio.h>

/*
Faça um programa que leia 10 inteiros e imprima sua média.
*/

#define quan 10

int main()
{

    int n;
    int s = 0;

    for (int i = 0; i < quan; i++)
    {
        printf("N[%i] = ", i + 1);
        scanf("%i", &n);

        s = s + n;
    }

    printf("Media = [%.2f]\n", (float)s/quan);
    
    return 0;

}