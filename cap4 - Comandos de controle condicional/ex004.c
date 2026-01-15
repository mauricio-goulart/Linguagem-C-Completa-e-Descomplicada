#include <stdio.h>

/*

Faça um programa que leia o salário de um trabalhador e o valor da prestação de 
um empréstimo. Se a prestação:
    For maior que 20% do salário, imprima: “Empréstimo não concedido.” •
    Caso contrário, imprima: “Empréstimo concedido.” •

*/

int main()
{
    float sal,pre;

    printf("Salario: ");
    scanf("%f", &sal);
    printf("Prestacao: ");
    scanf("%f", &pre);

    if (pre > (sal * 0.20))
    {
        printf("Emprestimo nao concedido");
    }
    else
    {
        printf("Emprestimo concedido");
    }
    
}