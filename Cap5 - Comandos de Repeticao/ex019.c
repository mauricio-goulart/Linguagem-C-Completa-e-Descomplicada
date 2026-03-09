#include <stdio.h>

/*

Faça um programa que calcule e escreva o valor de S:

    s = 1/1 + 3/2 + 5/3 + 7/4 ... + 99/55 

*/

int main()
{

    int s = 0, aux = 2;

    for (int i = 2; i <= 55; i++)
    {
        if (i % 2 != 0)
        {
            s = ((float)i/aux);
            aux++;
        }
        
    }
    

    return 0;

}