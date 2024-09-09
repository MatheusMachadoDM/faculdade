#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*19.Escreva um algoritmo que apresente na tela o seguinte menu:]

		# MENU PRINCIPAL #
		[1] Digitar um número par
		[2] Digitar um número ímpar
		[3] Sair
		
	Caso o usuário escolha a opção 1, ele deve digitar um número par para voltar ao menu. O mesmo deve ser
	feito na opção 2, mas para um número ímpar. Caso o usuário escolha a opção 3, o algoritmo deve
	apresentar a quantidade de números pares digitados na opção 1, a quantidade de números ímpares
	digitados na opção 2 e encerrar o algoritmo.
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int opcao, num;
	
	printf("# MENU PRINCIPAL #\n [1] Digitar um número par\n [2] Digitar um número ímpar\n [3] Sair\n Digite a opção desejada: ");
	scanf("%d", &opcao);
	
	while(opcao != 3){
		
		switch(opcao){
			case 1: printf("\n Digite um número par para voltar ao menu: ");
					scanf("%d", &num);
					
					while(num %2 == 1){
						printf(" Número inválido! Digite um número par para voltar ao menu: ");
						scanf("%d", &num);
					}
					printf("\n# MENU PRINCIPAL #\n [1] Digitar um número par\n [2] Digitar um número ímpar\n [3] Sair\n Digite a opção desejada: ");
					scanf("%d", &opcao);
					
			break;
			
			case 2: printf("\n Digite um número ímpar para voltar ao menu: ");
					scanf("%d", &num);
					
					while(num %2 == 0){
						printf(" Número inválido! Digite um número par para voltar ao menu: ");
						scanf("%d", &num);
					}
					printf("\n# MENU PRINCIPAL #\n [1] Digitar um número par\n [2] Digitar um número ímpar\n [3] Sair\n Digite a opção desejada: ");
					scanf("%d", &opcao);
					
			break;
		}
	}
	return 0;
}
