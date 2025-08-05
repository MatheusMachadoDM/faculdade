#include <stdio.h>
#include <locale.h>
/*Escreva um algoritmo que solicite do usuário o valor de um saque em caixa eletrônico, sendo que estarão disponíveis cédulas de 5, 10, 20, 50 e 100. O algoritmo deve apresentar a menor quantidade de cédulas possível de acordo com o saque. Exemplos:

400,00: 4 cédulas de 100, 0 cédulas de 50, 0 cédulas de 20, 0 cédulas de 10 e 0 cédulas de 5.

350,00: 3 cédulas de 100, 1 cédulas de 50, 0 cédulas de 20, 0 cédulas de 10 e 0 cédulas de 5.

385,00: 3 cédulas de 100, 1 cédula de 50, 1 cédula de 20, 1 cédula de 10 e 1 cédula de 5.*/

int main(){
    setlocale(LC_ALL, "portuguese");

    int valor, restante, nota100, nota50, nota20, nota10, nota5;

    printf("Qual o valor do saque que você deseja realizar? ");
    scanf("%d", &valor);

    nota100 = (valor - valor % 100) / 100;
    restante = valor % 100;

    nota50 = (restante - restante % 50) / 50;
    restante = restante % 50;

    nota20 = (restante - restante % 20) / 20;
    restante = restante % 20;

    nota10 = (restante - restante % 10) / 10;
    restante = restante % 10;

    nota5 = (restante - restante % 5) / 5;
    restante = restante % 5;

    printf("Sacando esse valor, você receberá %d notas de cem, %d notas de cinquenta, %d notas de vinte, %d notas de dez e %d notas de cinco.", nota100, nota50, nota20, nota10, nota5);
    return 0;
}