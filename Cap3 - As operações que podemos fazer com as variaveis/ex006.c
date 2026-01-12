#include <stdio.h>

/*
Leia uma velocidade em km/h (quilômetros por hora) e apresente convertida em 
m/s (metros por segundo). A fórmula de conversão é M = K/36, sendo K a veloci-
dade em km/h e M em m/s.
*/

int main()
{
    float km,ms;

    scanf("%d", &km);

    ms = km/3.6;
    
    printf("m/s: %d", ms);
}