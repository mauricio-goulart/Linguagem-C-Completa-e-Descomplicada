#include <stdio.h>

/*
Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.
*/

int main()
{

    int c = 0;
    int quan = 0;

    for (int i = 1; quan < 50; i++)
    {
        
        if (i % 2 == 0)
        {
            
            if (quan == 49)
            {
                printf("%i = ", i);
            }
            else
            {
                printf("%i + ", i);
            }


            quan = quan + 1;
            c = c + i;
            
        }

            
    }

        printf("[%i]\n", c);


        return 0;
}