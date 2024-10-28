#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
/*(	char nome[21];
	
	printf("Digite o seu nome: ");
	scanf(" %20[^\n]", nome);
	
	printf("Seu nome é %s", nome);*/
	
	/*char str[] = "Universidade positivo";
	
	printf("Tamanho da string: %d caracteres", strlen(str));*/
	
	/*char str1[31] = "Universidade positivo", str2[31];
	
	strcpy(str2, str1);
	
	printf("%s", str2);*/
	
	char str[30] = "Universidade Positivo";
	
	if(strcmp(str, "Universidade positivo") == 0){
		printf("As strings são iguais");
	}else{
		printf("As strings são diferentes");
	}
	
	
	
	
	
	return 0;
}
