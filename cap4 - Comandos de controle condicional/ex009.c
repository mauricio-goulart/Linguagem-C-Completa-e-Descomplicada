#include <stdio.h>

/*
Faça  um  programa  que  leia  a  altura  e  o  peso  de  uma  pessoa.  De  acordo  com  a  
tabela a seguir, verifique e mostre qual a classificação dessa pessoa.

Altura      Peso
            <60     60-90   >90
<1.20       A        D      G
1.20-1.70   B        E      H
>1.70       C        F      I   
*/


int main()
{
    
    float altura,peso;

    printf("Altura e Peso: ");
    scanf("%f %f", &altura, &peso); 

    if (altura < 1.20)
    {
        if (peso < 60)
        {
            printf("A\n");
        }
        else if (peso >= 60 && peso <= 90)
        {
            printf("D\n");
        }
        else
        {
            printf("G\n");
        }
        
    }
    else if (altura >= 1.20 && altura <= 1.70)
    {
        if (peso < 60)
        {
            printf("B\n");
        }
        else if (peso >= 60 && peso <= 90)
        {
            printf("E\n");
        }
        else
        {
            printf("H\n");
        }
        
    }
    else if (altura > 1.70)
    {
        if (peso < 60)
        {
            printf("C\n");
        }
        else if (peso >= 60 && peso <= 90)
        {
            printf("F\n");
        }
        else
        {
            printf("I\n");
        }
        
    }
    

    return 0;
}