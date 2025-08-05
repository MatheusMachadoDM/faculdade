#include <stdio.h>
#include <locale.h>
//8.Escreva um algoritmo que pergunte ao usuário a quantidade de km percorridos por um carro alugado e a quantidade de dias pelos quais ele foi alugado. Calcule e mostre o valor a pagar, sabendo que o carro custa R$ 70,00 por dia e R$ 0,15 por km rodado.

int main(){
    setlocale(LC_ALL,"portuguese");

    float kmPercorrido, dias, valorDia, valorKM, valorTotal;

    printf("Quantos quilometros você andou de carro? ");
    scanf("%f", &kmPercorrido);

    printf("Por quantos dias você usou o carro? ");
    scanf("%f", &dias);

    valorDia = 70 * dias;
    valorKM = 0.15 * kmPercorrido;
    valorTotal = valorDia + valorKM;

    printf("O total que você deve pagar é de: R$ %f", valorTotal);

    return 0;
}
