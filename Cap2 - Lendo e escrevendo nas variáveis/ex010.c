#include <stdio.h>

/*
Elabore um programa que solicite ao usuário entrar com o valor do dia, mês e ano 
(inteiros). Em seguida, imprima os valores lidos separados por uma barra (\). 
*/

int main()
{
    int d, m ,a;

    printf("dd/mm/aa : digite\n");

    scanf("%d %d %d", &d, &m, &a);

    printf("%d/%d/%d = formatado\n", d, m, a);

    return 0;
}