#include <stdio.h>

// 3.Escreva um algoritmo que leia um número inteiro e apresente o seu antecessor e o seu sucessor.

int main(){

    int numero;

    printf("Digite um número inteiro: ")/
    scanf("%d", &numero);

    printf("O antecessor de %d é %d e seu sucessor é %d!", numero, numero - 1, numero + 1);

    return 0;
}