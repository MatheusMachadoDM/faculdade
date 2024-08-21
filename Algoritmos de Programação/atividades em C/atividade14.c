#include <stdio.h>
#include <locale.h>
//14. Antes do racionamento de energia ser decretado, quase ninguém falava em quilowatts; mas, agora, todos incorporaram essa palavra em seu vocabulário. Sabendo-se que 100 quilowatts de energia custa um sétimo do salário mínimo, escreva um algoritmo que receba o valor do salário mínimo e a quantidade de quilowatts gasta por uma residência e mostre na tela: a) o valor em reais de cada quilowatt e b) o valor total a ser pago.

int main(){
    setlocale(LC_ALL, "portuguese");

    float salarioMin, qwGastos, valorPago, valorQW;

    printf("Quanto é o sálario mínimo? ");
    scanf("%f", &salarioMin);

    printf("Quantos quilowatts sua residencia gastou? ");
    scanf("%f", &qwGastos);

    valorQW = salarioMin / 700;
    valorPago = qwGastos * valorQW;

    printf("O valor de cada quilowatt é R$%f e o total que deve ser pago é R$%f", valorQW, valorPago);

    return 0;
}