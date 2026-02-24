#include <stdio.h>

/*
Usando o comando switch, escreva um programa que leia um inteiro entre 1 e 7 
e imprima o dia da semana correspondente a esse número. Isto é, domingo, se 1, 
segunda-feira, se 2, e assim por diante.
*/

int main()
{
    int n;
    printf("Num: ");
    scanf("%i", &n);

    switch (n)
    {
    case 1:
        printf("Dom\n");
        break;

    case 2:
        printf("Seg\n");
        break;

    case 3:
        printf("Ter\n");
        break;

    case 4:
        printf("Qua\n");
        break;

    case 5:
        printf("Qui\n");
        break;

    case 6:
        printf("Sex\n");
        break;

    case 7:
        printf("Sab\n");
        break;

    default:
        printf("Num invalido");
        break;
    }

    return 0;
}