#include <stdio.h>

/*
Escreva um programa que leia um número inteiro e mostre o seu complemento 
bit a bit
*/

int main() {
    int numero, mul, div;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    mul = numero << 1;

    div = numero >> 1;

    printf("\n--- Resultados ---\n");
    printf("Numero original: %d\n", numero);
    printf("Multiplicado por 2 (Bitwise << 1): %d\n", mul);
    printf("Dividido por 2 (Bitwise >> 1): %d\n", div);

    return 0;
}