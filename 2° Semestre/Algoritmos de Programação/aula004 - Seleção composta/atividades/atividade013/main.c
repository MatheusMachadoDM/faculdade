#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*13. Escreva um algoritmo que leia três números inteiros e apresente na tela o menor valor.*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	
	int n1, n2, n3;
	
	printf("Digite um número: ");
	scanf("%d", &n1);
	
	printf("Digite outro número: ");
	scanf("%d", &n2);
	
	printf("Digite outro número: ");
	scanf("%d", &n3);
	
	if(n1 < n2 && n1 < n3){
		printf("O menor número é %d", n1);
	}else if (n2 < n1 && n2 < n3){
		printf("O menor número é %d", n2);
	}else{
		printf("O menor número é %d", n3);
	}
	
	return 0;
}
