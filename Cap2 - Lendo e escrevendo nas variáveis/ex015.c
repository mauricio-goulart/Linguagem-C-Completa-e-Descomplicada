#include <stdio.h>

/*
Escreva um programa que leia três variáveis: char, int e float. Em seguida, imprima-
as de três maneiras diferentes: separadas por espaços, por uma tabulação horizontal e 
uma em cada linha. Use um único comando printf() para cada operação de escrita 
das três variáveis.
*/

int main()
{
    char c;
    int n;
    float f;

    scanf("%c %i %f", &c, &n, &f);

    printf("\n%c %d %f\n", c, n, f);

    printf("\n%c\t%d\t%f\n", c, n, f);

    printf("\n%c\n%d\n%f\n", c, n, f);
}