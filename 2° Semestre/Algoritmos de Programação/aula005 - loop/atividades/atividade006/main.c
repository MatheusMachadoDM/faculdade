#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*6.Escreva um algoritmo que some os n�meros fornecidos pelo usu�rio at� que o n�mero lido seja igual
a zero. Ao final, mostre o resultado da soma.*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int n1, soma;

	printf("Digite um n�mero para fazermos uma soma: (Quando quiser para a soma digite '0') ");
	scanf("%d", &n1);
	
	soma = n1;
	while(n1 != 0){
		printf("Digite outro n�mero para somar ao anterior: ");
		scanf("%d", &n1);
		soma = soma + n1;
	}
	
	printf("A resultado da soma � %d", soma);
	
	return 0;
}
