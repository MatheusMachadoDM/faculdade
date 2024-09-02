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
	
	float morango, maca;
	
	printf("Quantos KG de morango voc� comprou? ");
	scanf("%f", &morango);
	
	printf("Quantas KG de ma�a voc� comprou? ");
	scanf("%f", &maca);
	
	if(morango + maca <= 10){
		if(morango > 0 && morango <= 5){
			printf("O pre�o do morango deu R$ %.2f", morango * 6.5);
		}else{
			printf("O pre�o do morango deu R$ %.2f", morango * 6.2);
		}
		
		if(maca > 0 && maca <= 5){
			printf(" e o pre�o da ma�a deu R$ %.2f", maca * 3.8);
		}else{
			printf(" e o pre�o da ma�a deu R$ %.2f", maca * 3.5);
		}
	}else{
		if(morango > 0 && morango <= 5){
			printf("O pre�o do morango deu R$ %.2f", morango * 6.5 - morango * 0.1);
		}else{
			printf("O pre�o do morango deu R$ %.2f", morango * 6.2 - morango * 0.1);
		}
		
		if(maca > 0 && maca <= 5){
			printf(" e o pre�o da ma�a deu R$ %.2f", maca * 3.8 -  maca * 0.1);
		}else{
			printf(" e o pre�o da ma�a deu R$ %.2f", maca * 3.5 - maca * 0.1);
		}
	}
	
	
	
	return 0;
}
