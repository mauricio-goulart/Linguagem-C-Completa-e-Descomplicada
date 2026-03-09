#include <stdio.h>

/*
Escreva  um  programa  que  leia  certa  quantidade  de  números,  imprima  o  maior  
deles e quantas vezes o maior número foi lido. A quantidade de números a serem 
lidos deve ser fornecida pelo usuário.
*/

int main()
{
    int qtd, numero, maior;
    int contagem = 0; 

    printf("Quantos numeros voce deseja ler? ");
    scanf("%i", &qtd);

    if (qtd <= 0) 
    {
        printf("A quantidade precisa ser maior que zero.\n");
        return 0; 
    }

    for (int i = 0; i < qtd; i++)
    {
        printf("Digite o numero %i: ", i + 1);
        scanf("%i", &numero);

        if (i == 0) 
        {
            maior = numero;
            contagem = 1;
        }
        else 
        {
            if (numero > maior) 
            {
                maior = numero; 
                contagem = 1;   
            }
            else if (numero == maior) 
            {
                contagem++; 
            }
        }
    }

    printf("\nO maior numero lido foi: [%i]\n", maior);
    printf("Ele apareceu [%i] vez(es).\n", contagem);

    return 0;
}