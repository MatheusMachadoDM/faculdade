#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*1.Escreva um programa que alimente um vetor com 5 números inteiros e apresente na tela o vetor em
ordem inversa.*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int num[4], contador;
	
	for(contador = 0; contador < 5; contador ++){
		printf("Digite número: ");
		scanf("%d", &num[contador]);	
	}
	
	printf("\nOrdem inversa dos número que você digitou: \n");
	
	for(contador = 4; contador >= 0; contador --){
		printf("\n %d", num[contador]);
	}
	return 0;
}
