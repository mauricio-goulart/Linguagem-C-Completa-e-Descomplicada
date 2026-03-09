#include <stdio.h>

/*
Faça um programa que leia um vetor de oito posições. Em seguida, leia também dois 
valores  X  e  Y  quaisquer  correspondentes  a  duas  posições  no  vetor.  Seu  programa  
deverá exibir a soma dos valores encontrados nas respectivas posições X e Y.
*/

int main()
{
    int vetor[8];
    int X, Y, soma;

    for (int i = 0; i < 8; i++)
    {
        printf("Digite o valor para a posicao %i: ", i);
        scanf("%i", &vetor[i]);
    }

    printf("Digite o valor de X: ");
    scanf("%i", &X);
    
    printf("Digite o valor de Y: ");
    scanf("%i", &Y);

    soma = vetor[X] + vetor[Y];
    
    printf("A soma dos valores nas posicoes X e Y eh: %i\n", soma);

    return 0;
}