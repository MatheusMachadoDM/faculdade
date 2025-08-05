#include <stdio.h>
//2.Escreva um algoritmo que leia horas, minutos e segundos do teclado e apresente o tempo total em segundos.

int main(){

    int horas, minutos, segundos, resultado;

    printf("Digite uma quantidade de horas: ");
    scanf("%d", horas);

    printf("Digite uma quantidade de minutos: ");
    scanf("%d", minutos);

    printf("Digite uma quantidade de segundos: ");
    scanf("%d", segundos);

    resultado = horas * 3600 + minutos * 60 + segundos;

    printf("O total de segundos é %d", resultado);

    return 0;
}