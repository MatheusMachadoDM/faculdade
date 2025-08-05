#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*2.Escreva um programa que alimente um vetor com 5 números inteiros. Apresente na tela apenas os
valores ímpares que aparecem no vetor.*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int num[4], contador;
	
	for(contador = 0; contador < 5; contador ++){
		printf("Digite um número: ");
		scanf("%d", &num[contador]);
	}
	
	printf("Número ímpares: ");
	
	for(contador = 0; contador < 5; contador++){
		if(num[contador] %2 == 1){
			printf("\n %d", num[contador]);
		}
	}
	return 0;
}
