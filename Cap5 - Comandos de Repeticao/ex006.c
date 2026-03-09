#include <stdio.h>

/*
Faça um programa que mostre uma contagem regressiva na tela, iniciando em 10 
e terminando em 0. Mostre uma mensagem “FIM!” após a contagem.
*/

int main()
{

    for (int i = 10; i >= 0; i--)
    {

        if (i == 0)
        {
            printf(" %i ... FIM", i);
        }
        else
        {
            printf(" %i ", i);
        }
        
    }
    

    return 0;

}