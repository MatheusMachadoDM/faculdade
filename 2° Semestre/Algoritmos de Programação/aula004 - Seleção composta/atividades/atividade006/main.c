#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*6. Escreva um algoritmo que efetue a leitura de um n�mero inteiro e apresente se esse n�mero �
divis�vel por 2 e divis�vel por 3.*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int n1;
	
	printf("Digite um n�mero inteiro: ");
	scanf("%d", &n1);
	
	if(n1 % 2 == 0 && n1 % 3 == 0){
		printf("Este n�mero pode ser dividido por 2 e 3", system("color 02"));
	}else{
		printf("Este n�o n�mero � divis�vel por 2 e 3", system("color 04"));
	}
	return 0;
}
