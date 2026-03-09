#include <stdio.h>

/*

 Faça um programa que leia um valor inteiro e positivo N, calcule o mostre o valor 
 E, conforme a fórmula a seguir:
    
    E = 1/1! + 1/2! + 1/3! + ... + 1/n!

*/

int main()
{

    int n; 
    float fat = 1, e = 0;

    printf("N: ");
    scanf("%i", &n);

    for (size_t i = 1; i <= n; i++)
    {
        
        fat = fat * i;
        e = e + (1.0/fat);

    }

    printf("Valor = ", e);

    return 0;
    
}