#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*15. Uma frutaria est� vendendo frutas com a seguinte tabela de pre�os:

				At� 5 Kg			Acima de 5 Kg
	Morango		R$ 6.50 por Kg		R$ 6.20 por Kg
	Ma��		R$ 3.80 por Kg		R$ 3.50 por Kg
	
Se o cliente comprar mais de 10 kg em frutas ou se o valor total da compra ultrapassar R$ 50,00, receber�
ainda um desconto de 10% sobre este total. Escreva um algoritmo para ler a quantidade (em kg) de
morangos e a quantidade (em kg) de ma�as adquiridas e escreva o valor a ser pago pelo cliente.
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	
	float morango, maca, valorTotal;
	
	printf("Quantos KG de morango voc� comprou? ");
	scanf("%f", &morango);
	
	printf("Quantas KG de ma�a voc� comprou? ");
	scanf("%f", &maca);
	
	valorTotal = morango * 6.5 + maca * 6.2;
	
	if(valorTotal > 50 || morango + maca > 10){
		printf("O pre�o total ser� de R$%.2f ", valorTotal * 0.9);
		printf("\nValor sem desconto seria de R$%.2f ", valorTotal);
	}else{
		printf("O pre�o total ser� de R$%.2f ", valorTotal);
	}
	
	
	
	return 0;
}
