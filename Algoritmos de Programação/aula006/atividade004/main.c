#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*4.Escreva um programa que alimente um vetor A com 5 n�meros inteiros. Em um vetor B, armazene o
dobro de cada um dos n�meros vetor A e apresente o vetor B na tela.*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int a[5], b[5], i;
	
	for(i = 0; i < 5; i ++){
		printf("Digite um n�mero: ");
		scanf("%d", &a[i]);
		
		b[i] = a[i] * 2;
	}
	
	printf("\nAqui est�o os n�meros que voc� digitou dobrados: \n");
	
	for(i = 0; i < 5; i ++){
		printf("\nNumero %d: %d", i + 1, b[i]);
	}
	
	return 0;
}
