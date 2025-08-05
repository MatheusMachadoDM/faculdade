#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*11. Escreva um algoritmo que leia o valor de dois n�meros inteiros e a opera��o aritm�tica desejada.
Calcule ent�o o resultado utilizando os s�mbolos da tabela a seguir como refer�ncia para o c�lculo*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	
	int n1, n2;
	char op;
	
	printf("Digite um n�mero: ");
	scanf("%d", &n1);
	
	printf("Digite outro n�mero: ");
	scanf("%d", &n2);
	
	getchar();
	
	printf("Que opera��o voc� quer fazer? Digite '+' para soma, '-' para subtra��o, '*' para multiplica��o e '/' para divis�o: ");
	scanf("%c", &op);
	
	switch(op){
		case '+': printf("A soma desses n�meros � %d", n1 + n2);
		break;
		
		case '-': printf("A subra��o desses n�meros � %d", n1 - n2);
		break;
		
		case '*': printf("A multiplica��o desses n�meros � %d", n1 * n2);
		break;
		
		case '/': printf("A multiplica��o desses n�meros � %.2f", (float)n1 / n2);
		break;
		
		default: printf("Digite um valor v�lido!");
	}
	
	return 0;
}
