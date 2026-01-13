#include <stdio.h>

/*
Elabore um programa que leia dois números inteiros e exiba o deslocamento, à 
esquerda e à direita, do primeiro número pelo segundo.
*/

int main()
{
    int n1,n2;
    scanf("%d %d", &n1, &n2);

    printf("Deslocamento << %d || Deslocamento >> %d", (n1 << n2), (n1 >> n2));
}