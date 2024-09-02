#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*6. Escreva um algoritmo que efetue a leitura de um número inteiro e apresente se esse número é
divisível por 2 e divisível por 3.*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int n1;
	
	printf("Digite um número inteiro: ");
	scanf("%d", &n1);
	
	if(n1 % 2 == 0 && n1 % 3 == 0){
		printf("Este número pode ser dividido por 2 e 3", system("color 02"));
	}else{
		printf("Este não número é divisível por 2 e 3", system("color 04"));
	}
	return 0;
}
