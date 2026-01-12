#include <stdio.h>

/*
Escreva um programa que leia um número inteiro e depois imprima a mensagem 
“Valor lido:”, seguido do valor inteiro. Use apenas um comando printf().
*/

int main()
{
    int n;
    printf("Digite um numero: ");
    scanf("%i", &n);

    printf("Valor lido: %i", n);

}