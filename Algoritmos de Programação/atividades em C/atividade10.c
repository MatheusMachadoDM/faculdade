#include <stdio.h>
#include <locale.h>
//10. Um vendedor de uma loja de sapatos recebe como pagamento 20% de comissão sobre as vendas do mês e R$ 5,00 por cada par de sapatos vendido. Escreva um algoritmo que, dado o valor total das vendas do mês e o número de sapatos vendidos, mostre qual será o salário do vendedor naquele mês.

int main(){
    setlocale(LC_ALL, "portuguese");

    float vendasMes, salario;
    int numeroSapatos;

    printf("Quantos sapatos foram vendidos durante o mês? ");
    scanf("%d", &numeroSapatos);

    printf("Qual o valor total de vendas no mês? ");
    scanf("%f", &vendasMes);

    salario = vendasMes * 0.2 + (5 * numeroSapatos);

    printf("Seu salário nesse mês será de R$%f", salario);
    return 0;
}