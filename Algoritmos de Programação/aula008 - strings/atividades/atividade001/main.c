#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*1. Escreva um programa que mostre o tamanho de uma string informada pelo usuário (utilize a função
apropriada).*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	char str[21];
	
	printf("Digite uma palavra: ");
	scanf(" %20[^\n]", str);
	
	printf("A palavra que você digitou tem %d caracteres.", strlen(str));
	
	
	return 0;
}
