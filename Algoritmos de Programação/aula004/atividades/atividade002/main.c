#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*2. Escreva um algoritmo que leia dois números inteiros e os apresente em ordem crescente.*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	
	int n1, n2;
	
	printf("Digite um número: ");
	scanf("%d", &n1);
	
	printf("Digite outro número: ");
	scanf("%d", &n2);
	
	if(n1 < n2){
		printf("A ordem crescente destes números é: %d %d", n1, n2);
	}else{
		printf("A ordem crescente destes números é: %d %d", n2, n1);
	}
	return 0;
}
