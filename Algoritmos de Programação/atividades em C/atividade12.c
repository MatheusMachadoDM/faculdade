#include <stdio.h>
#include <.h>
//Escreva um algoritmo que leia dois números inteiros e faça a troca de valores entre eles, apresentando as variáveis com seus valores trocados.

int main(){
    setlocale(LC_ALL, "portuguese");

    int n1, n2;

    printf("Digite um número: ");
    scanf("%d", &n1);

    printf("Digite outro número: ");
    scanf("%d", &n2);

    printf("O primeiro número que você digitou foi %d e o segundo foi %d!", n2, n1);
    return 0;
}