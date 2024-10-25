#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <string.h>


/*2.Escreva um programa que mostre o tamanho de uma string informada pelo usuário, sem utilizar
funções.*/

int main(int argc, char** argv) {
	setlocale(LC_ALL,"portuguese");
	
	char str[101];
	int i = 0;
	
	printf("Digite uma palavra: ");
	scanf("%100[^\n]", str);
	
	while(str[i] != '\0'){
		i++;
	}
	
	
	printf("A palavra que você digitou tem %d caracteres", i);
	
	return 0;
}
