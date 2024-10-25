#include <stdio.h>
#include <locale.h>
#include <string.h>

/*6. Escreva um programa que leia uma frase de até 30 caracteres. Em seguida, escreva a frase sem os
espaços em branco.*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int i, tamanho;
	char str[31];
	
	printf("Escreva uma frase de até 30 caracteres: ");
	scanf(" %30[^\n]", str);
	
	tamanho = strlen(str);
	
	for(i = 0; i < tamanho; i++){
		
		if(str[i] != 32){
			printf("%c", str[i]);
		}
	}
	return 0;
}
