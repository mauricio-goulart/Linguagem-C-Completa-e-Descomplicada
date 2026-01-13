#include <stdio.h>

/*



*/

int main()
{
    int numero, unidade ,dezena, centena, invertido;
    scanf("%d", &numero);

    centena = numero / 100;
    dezena = (numero % 100) / 10;
    unidade = numero % 10;

    invertido = centena + (dezena * 10) + (unidade * 100);

    printf("Invertido = %d", invertido);
}