#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*11. Escreva um algoritmo que leia o valor de dois números inteiros e a operação aritmética desejada.
Calcule então o resultado utilizando os símbolos da tabela a seguir como referência para o cálculo*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	
	int n1, n2;
	char op;
	
	printf("Digite um número: ");
	scanf("%d", &n1);
	
	printf("Digite outro número: ");
	scanf("%d", &n2);
	
	getchar();
	
	printf("Que operação você quer fazer? Digite '+' para soma, '-' para subtração, '*' para multiplicação e '/' para divisão: ");
	scanf("%c", &op);
	
	switch(op){
		case '+': printf("A soma desses números é %d", n1 + n2);
		break;
		
		case '-': printf("A subração desses números é %d", n1 - n2);
		break;
		
		case '*': printf("A multiplicação desses números é %d", n1 * n2);
		break;
		
		case '/': printf("A multiplicação desses números é %.2f", (float)n1 / n2);
		break;
		
		default: printf("Digite um valor válido!");
	}
	
	return 0;
}
