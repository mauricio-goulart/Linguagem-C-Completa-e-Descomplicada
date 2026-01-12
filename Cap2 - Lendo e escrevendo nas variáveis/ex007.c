#include <stdio.h>

/*
Elabore um programa que leia um caractere e depois o imprima como um valor 
inteiro
*/

int main()
{
    char c;
    int n;

    scanf("%c", &c);

    n = c;

    printf("%c = %i", c,n);
}