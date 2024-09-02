#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*8. Escreva um algoritmo que leia um número inteiro e, caso este número seja positivo, apresente uma
mensagem indicando se ele é par ou ímpar. Caso o número seja negativo, apresente o seu valor
absoluto.*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	
	int n1;
	
	printf("Digite um número inteiro: ");
	scanf("%d", &n1);
	
	if(n1 == 0){
		printf("Este número é neutro!");
	}else if(n1 > 0){
		printf("Este número é positivo!");
		if(n1 % 2 == 0){
			printf(" e é par!");
		}else{
			printf(" e é ímpar!");
		}
	}else{
		printf("Este número é negativo! e seu valor absoluto é %d", n1 - n1 * 2);
		
	}
	
	return 0;
}
