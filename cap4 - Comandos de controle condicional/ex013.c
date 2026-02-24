#include <stdio.h>

/*
Faça um programa que mostre ao usuário um menu com quatro opções de ope-
rações matemáticas (as operações básicas, por exemplo). O usuário escolhe uma 
das  opções,  e  o  seu  programa  pede  dois  valores  numéricos  e  realiza  a  operação,  
mostrando o resultado.
*/

int main()
{

    int n1,n2, i;
    printf("Digite 2 numeros: ");
    scanf("%i %i", &n1, &n2);

    printf("==================================\n");
    printf("\tCalculadora\n");
    printf("\t[1] - Soma\n");
    printf("\t[2] - Sub\n");
    printf("\t[3] - Mult\n");
    printf("\t[4] - Div\n");
    printf("Opcao: ");
    scanf("%i", &i);
    printf("==================================\n");



    switch (i)
    {
    case 1:
        printf("Resultado = %i", n1 + n2);
        break;

    case 2:
        printf("Resultado = %i", n1 - n2);
        break;

    case 3:
        printf("Resultado = %i", n1 * n2);
        break;

    case 4:
        printf("Resultado = %d", (float)n1 / n2);
        break;
    
    default:
        printf("Opcao invalida\n");
        break;
    }

    return 0;

}