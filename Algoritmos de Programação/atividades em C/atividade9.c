#include <stdio.h>
#include <locale.h>
//9. Todo restaurante, embora por lei não possa obrigar o cliente a pagar, cobra 10% de comissão para o garçom. Escreva um algoritmo que leia o valor gasto pelo cliente em um restaurante e mostre o valor da gorjeta e o valor total a ser pago.

int main(){
    setlocale(LC_ALL, "portuguese");

    float valorGasto, valorGorgeta, valorTotal;

    printf("Quanto você gastou no restaurante? ");
    scanf("%f", &valorGasto);

    valorGorgeta = valorGasto * 0.1;
    valorTotal = valorGasto + valorGorgeta;

    printf("O valor total que você deve pagar é R$%f, sendo que R$%f é a taxa do garçom", valorTotal, valorGorgeta);

    return 0;
}