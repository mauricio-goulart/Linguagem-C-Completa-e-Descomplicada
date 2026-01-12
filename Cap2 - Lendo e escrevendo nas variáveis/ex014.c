#include <stdio.h>

/*
Faça um programa que leia três caracteres do tipo char e depois os imprima um 
em cada linha. Use um único comando printf() para isso.
*/

int main()
{
    char c1, c2, c3;

    scanf("%c %c %c", &c1, &c2, &c3);
    printf("%c\n%c\n%c\n", c1, c2, c3);
}