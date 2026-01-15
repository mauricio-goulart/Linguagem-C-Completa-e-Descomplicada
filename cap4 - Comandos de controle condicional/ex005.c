#include <stdio.h>
#include <math.h>

/*
Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
    O número digitado ao quadrado. 
    A raiz quadrada do número digitado. 
*/

int main()
{
    int n;

    scanf("%d", &n);

    if (n >= 0)
    {
        printf("[%d] ao quadrdo = [%d]\n[%d] raiz quadrada = [%.2f]\n", n, n*n,n, sqrt(n));
    }
    else
    {
        printf("Numero negativo");
    }
    
}