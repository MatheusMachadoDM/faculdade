#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*7. Escreva um algoritmo que efetue a leitura de um número inteiro e apresente se esse número é
divisível por 2 ou divisível por 7.*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	
	int n1;
	
	printf("Digite um número inteiro: ");
	scanf("%d", &n1);
	
	if(n1 % 2 == 0 && n1 %7 == 0){
		printf("Este número é divisível por 2 e 7!");
	}else if(n1 % 2 == 0){
		printf("Este número é divisível por 2!");
	}else if(n1 %7 == 0){
		printf("Este número é divisível por 7!");
	}else{
		printf("Este número não é divisível por 2 e nem por 7!");
	}
	
	return 0;
}
