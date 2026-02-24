#include <stdio.h>
#include <math.h>

/*

Faça um programa que leia os coeficientes de uma equação do segundo grau. Em 
seguida,  calcule  e  mostre  as  raízes  dessa  equação,  lembrando  que  as  raízes  são  
calculadas como em que Δ = b2 – 4 * a * c e ax2 + bx + c = 0 representa uma equação do segundo 
grau. A variável a tem de ser diferente de zero. Caso seja igual, imprima a mensa-
gem “Não é equação de segundo grau”. Do contrário, imprima:

Se  • Δ < 0, não existe real. Imprima a mensagem “Não existe raiz”.
Se  • Δ = 0 existe uma raiz real. Imprima a raiz e a mensagem “Raiz única”.
Se  • Δ > 0, existem duas raízes reais. Imprima as raízes

*/

int main()
{
    
    int a,b,c;
    float d,x1,x2;

    printf("Digite A,B,C da equacao: ");
    scanf("%i %i %i", &a, &b, &c);

    d = (b*b) - (4 * a * c);

    if (d > 0)
    {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);

        printf("Existe duas raizes: %.2f %.2f\n", x1, x2);
    }
    else if (d == 0)
    {
        x1 = (-b / (2.0 * a));
        printf("Existe uma raiz real: %.2f", x1);
    }
    else
    {
        printf("Nao existe raiz.");
    }

    return 0;

}