#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*5.Escreva um programa que alimente um vetor com 5 números. Apresente na tela o menor valor do
vetor, o maior valor do vetor, a soma dos valores do vetor e a média dos valores do vetor.*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int num[5], i, maior, menor, soma = 0;
	float media;
	
	num[0] = 0;
	maior = num[i];
	menor = num[i];
	
	for(i = 0; i < 5; i ++){
		printf("Digite o número %d: ", i + 1);
		scanf("%d", &num[i]);
		
		soma += num[i];
		
		if(num[i] > maior){
			maior = num[i];
		}
		else if(num[i] < menor){
			menor = num[i];
		}
	}
	media = soma / 5;
	printf("\nO menor valor que você digitou foi: %d", menor);
	printf("\nO maior valor que você digitou foi: %d", maior);
	printf("\nA soma dos valores é: %d", soma);
	printf("\nE a média dos valores é: %.1f", media);
	
	
	return 0;
}
