#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*19.Escreva um algoritmo que apresente na tela o seguinte menu:]

		# MENU PRINCIPAL #
		[1] Digitar um n�mero par
		[2] Digitar um n�mero �mpar
		[3] Sair
		
	Caso o usu�rio escolha a op��o 1, ele deve digitar um n�mero par para voltar ao menu. O mesmo deve ser
	feito na op��o 2, mas para um n�mero �mpar. Caso o usu�rio escolha a op��o 3, o algoritmo deve
	apresentar a quantidade de n�meros pares digitados na op��o 1, a quantidade de n�meros �mpares
	digitados na op��o 2 e encerrar o algoritmo.
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int opcao, num;
	
	printf("# MENU PRINCIPAL #\n [1] Digitar um n�mero par\n [2] Digitar um n�mero �mpar\n [3] Sair\n Digite a op��o desejada: ");
	scanf("%d", &opcao);
	
	while(opcao != 3){
		
		switch(opcao){
			case 1: printf("\n Digite um n�mero par para voltar ao menu: ");
					scanf("%d", &num);
					
					while(num %2 == 1){
						printf(" N�mero inv�lido! Digite um n�mero par para voltar ao menu: ");
						scanf("%d", &num);
					}
					printf("\n# MENU PRINCIPAL #\n [1] Digitar um n�mero par\n [2] Digitar um n�mero �mpar\n [3] Sair\n Digite a op��o desejada: ");
					scanf("%d", &opcao);
					
			break;
			
			case 2: printf("\n Digite um n�mero �mpar para voltar ao menu: ");
					scanf("%d", &num);
					
					while(num %2 == 0){
						printf(" N�mero inv�lido! Digite um n�mero par para voltar ao menu: ");
						scanf("%d", &num);
					}
					printf("\n# MENU PRINCIPAL #\n [1] Digitar um n�mero par\n [2] Digitar um n�mero �mpar\n [3] Sair\n Digite a op��o desejada: ");
					scanf("%d", &opcao);
					
			break;
		}
	}
	return 0;
}
