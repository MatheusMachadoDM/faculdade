#include <stdio.h>
//5. Escreva um algoritmo que leia uma temperatura em graus Celsius e a apresente convertida em graus Fahrenheit.

int main(){

    int c;
    float f;

    printf("Quantos graus celcius está no momento? ");
    scanf("%d", &c);

    f = c * 1.8 + 32;

    printf("%d graus em fahrenheit é %f", c, f); 

    return 0;
}