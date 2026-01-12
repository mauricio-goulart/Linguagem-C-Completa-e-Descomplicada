#include <stdio.h>

/*
Leia  um  valor  que  represente  uma  temperatura  em  graus  Celsius  e  apresente-a  
convertida em graus Fahrenheit. A fórmula de conversão é:  F = C ∗ (9.0/5.0) + 
32.0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius
*/

int main()
{
    float c;

    scanf("%f", &c);

    printf("Celsius: \t%.2f ||  Fahrenheit: \t%.2f", c, (c * (9.0/5.0) + 32));

}