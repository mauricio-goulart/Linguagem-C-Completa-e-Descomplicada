#include <stdio.h>

/*
Elabore  um  programa  que  peça  ao  usuário  para  digitar  10  valores.  Some  esses  
valores e apresente o resultado na tela.
*/

#define quan 10

int main()
{

    int n;
    int s = 0;

    for (int i = 0; i < quan; i++)
    {
        printf("N[%i] = ", i+1);
        scanf("%i", &n);

        s = s + n;
    }
    
    printf("Soma = [%i]\n", s);

    return 0;

}