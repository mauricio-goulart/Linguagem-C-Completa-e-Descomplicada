#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("\n--- Resultados das Operacoes Bit a Bit ---\n");
    
    printf("%d AND %d ( & ) = %d\n", num1, num2, num1 & num2);

    printf("%d OR  %d ( | ) = %d\n", num1, num2, num1 | num2);
 
    printf("%d XOR %d ( ^ ) = %d\n", num1, num2, num1 ^ num2);

    return 0;
}