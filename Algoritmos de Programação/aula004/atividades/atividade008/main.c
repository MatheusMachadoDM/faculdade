#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*8. Escreva um algoritmo que leia um n�mero inteiro e, caso este n�mero seja positivo, apresente uma
mensagem indicando se ele � par ou �mpar. Caso o n�mero seja negativo, apresente o seu valor
absoluto.*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	
	int n1;
	
	printf("Digite um n�mero inteiro: ");
	scanf("%d", &n1);
	
	if(n1 == 0){
		printf("Este n�mero � neutro!");
	}else if(n1 > 0){
		printf("Este n�mero � positivo!");
		if(n1 % 2 == 0){
			printf(" e � par!");
		}else{
			printf(" e � �mpar!");
		}
	}else{
		printf("Este n�mero � negativo! e seu valor absoluto � %d", n1 - n1 * 2);
		
	}
	
	return 0;
}
