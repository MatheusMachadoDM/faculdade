#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*1.Escreva um programa que alimente um vetor com 5 n�meros inteiros e apresente na tela o vetor em
ordem inversa.*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int num[4], contador;
	
	for(contador = 0; contador < 5; contador ++){
		printf("Digite n�mero: ");
		scanf("%d", &num[contador]);	
	}
	
	printf("\nOrdem inversa dos n�mero que voc� digitou: \n");
	
	for(contador = 4; contador >= 0; contador --){
		printf("\n %d", num[contador]);
	}
	return 0;
}
