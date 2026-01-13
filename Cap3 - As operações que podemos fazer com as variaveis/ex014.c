#include <stdio.h>

/*
Faça um programa que converta uma letra maiúscula em letra minúscula. Use a 
tabela ASCII para isso.
*/

int main()
{
    char c, c2;

    scanf("%c", &c);

    c2 = c + 32;

    printf("%c\n", c2);

}