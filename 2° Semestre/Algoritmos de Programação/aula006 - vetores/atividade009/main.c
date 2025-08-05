#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*9.Um armaz�m trabalha com 10 mercadorias diferentes identificadas pelos n�meros inteiros de 0 a 9. O
dono do armaz�m anota a quantidade de cada mercadoria vendida durante o m�s. Ele tem uma
tabela que indica para cada mercadoria o pre�o de venda. Escreva um programa que leia a quantidade
vendida de cada produto no final do m�s (armazenando-os em um vetor Q) e o pre�o de venda de 
cada um (armazenado-os em um vetor P). Em seguida, calcule e apresente o faturamento mensal do
armaz�m*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int  i;
	float q[10], p[10], faturamento[10], faturamentoTotal = 0;
	
	for(i = 0; i < 10; i++){
		printf("Quantas vezes o produto %d foi vendido? \n", i);
		scanf("%f", &q[i]);
		
		printf("E qual foi seu pre�o de venda? EX: 5.50\n");
		scanf("%f", &p[i]);
		
		faturamento[i] = q[i] * p[i];
		faturamentoTotal = faturamentoTotal + faturamento[i];
	}
	
	for(i = 0; i < 10; i++){
		printf("A mercadoria %d foi vendida %.0f vezes por %.2f reais faturando R$%.2f\n", i, q[i], p[i], faturamento[i]);
	}
	printf("\nE o faturamento total foi de R$%.2f\n", faturamentoTotal);
	return 0;
}
