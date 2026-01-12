#include <stdio.h>

/*
A importância de R$780.000,00 será dividida entre três ganhadores de um con-
curso, sendo que:

 i.   O primeiro ganhador receberá 46% do total.
 ii.  O segundo receberá 32% do total.
 iii. O terceiro receberá o restante.
*/

int main()
{

    float tot, g1, g2, g3;
    
    tot = 780.000;
    g1 = tot * 0.46;
    g2 = tot * 0.32;
    g3 = tot - (g1 + g2);


    printf("g1 = \tR$%f\n",g1);
    printf("g2 = \tR$%f\n",g2);
    printf("g3 = \tR$%f\n",g3);

}