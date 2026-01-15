#include <stdio.h>
#include <ctype.h>

/*
Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre 
seu peso ideal, utilizando as seguintes fórmulas (em que “h” corresponde à altura):
    Homens: (72,7 * h) – 58 •
    Mulheres: (62,1 * h) – 44,7 •
*/

int main()
{
    char s;
    float h;

    scanf("%c %f", &s, &h);

    s = tolower(s);

    if (s == 'h')
    {
        printf("Ideal = [%.2f]", (72.7 * h) - 58);
    }
    else
    {
        printf("Ideal = [%.2f]", (62.1 * h) - 44.7);
    }
    
}