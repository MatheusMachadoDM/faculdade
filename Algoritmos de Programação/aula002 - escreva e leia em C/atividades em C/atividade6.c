#include <stdio.h>
//6.Escreva um algoritmo que apresente a conversão de um valor em reais para dólar, de acordo com a taxa de câmbio informada pelo usuário.

int main(){

    float real, vDolar, dolar;

    printf("Quantos reais você quer converter? ");
    scanf("%f", &real);

    printf("Qual o valor do dolar em real atualmente? ");
    scanf("%f", &vDolar);

    dolar = real / vDolardolar;

    printf("%f reais são %f dolares", real, dolar);

    return 0;
}