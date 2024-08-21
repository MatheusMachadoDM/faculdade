#include <stdio.h>

//4. Escreva um algoritmo que leia a nota de três provas de um aluno, calcule e escreva a média final deste aluno. Considere que a média é ponderada e que o peso das provas é 2 para a primeira prova, 3 para a segunda prova e 5 para a terceira prova.

int main(){

    float n1, n2, n3, mp;

    printf("Digite sua primeira nota: ");
    scanf("%f", &n1);

    printf("Digite sua segunda nota: ");
    scanf("%f", &n2);

    printf("Digite sua terceira nota: ");
    scanf("%f", &n3);

    mp = (n1 * 2 + n2 * 3 + n3 * 5) /10;

    printf("Sua média é %f", mp);
    return 0;
}