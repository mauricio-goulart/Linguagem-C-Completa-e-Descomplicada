#include <stdio.h>

/*
Uma empresa vende o mesmo produto para quatro diferentes estados. Cada es-
tado possui uma taxa diferente de imposto sobre o produto. Faça um programa 
em que o usuário entre com o valor e o estado de destino do produto e o pro-
grama retorne o preço final do produto acrescido do imposto do estado em que 
ele será vendido. Se o estado digitado não for válido, mostrará uma mensagem 
de erro.
    Estado MG SP RJ MS
    Imposto 7% 12% 15% 8%

*/

int main()
{
    int sel;
    float pre;

    printf("MG[0] SP[1] RJ[2] MS[3]");
    scanf("%d %f", &sel, &pre);

    switch (sel)
    {
    case 0:
        printf("Valor = [%d]", pre + (pre * 0.07));
        break;
    
    case 1:
        printf("Valor = [%d]", pre + (pre * 0.12));
        break;

    case 2:
        printf("Valor = [%d]", pre + (pre * 0.15));
        break;

    case 3:
        printf("Valor = [%d]", pre + (pre * 0.08));
        break;
    
    default:
        printf("Estado invalido");
        break;
    }
    
}