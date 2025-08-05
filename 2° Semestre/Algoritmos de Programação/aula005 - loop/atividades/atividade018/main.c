#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*18.Escreva um algoritmo que apresente o seguinte menu:

		# MENU PRINCIPAL #
		[1] Inserir
		[2] Excluir
		[3] Consultar
		[4] Listar
		[5] Sair
		
	Se as op��es 1, 2, 3 ou 4 forem escolhidas, mostrar na tela o nome da op��o (Inserir, Excluir, Consultar,
Listar). Se a op��o 5 for escolhida, encerrar a execu��o do algoritmo.
*/

int main(int argc, char *argv[]){
	setlocale(LC_ALL,"portuguese");
	
	int opcao, contador;
	
	printf("# MENU PRINCIPAL #\n [1] Inserir\n [2] Excluir\n [3] Consultar\n [4] Listar\n [5] Sair\n Digite uma op��o: ");
	scanf("%d", &opcao);
	
	while(opcao != 5){
		
		
		switch(opcao){
			case 1: printf("Inserir!\n"), system("color 02");
			break;
			
			case 2: printf("Excluir!\n"), system("color 02");
			break;
			
			case 3: printf("Consultar!\n"), system("color 02");
			break;
			
			case 4: printf("Listar!\n"), system("color 02");
			break;
			
			default: printf("Op��o inv�lida!\n", system("color 04"));
		}
		printf("Digite uma op��o: ");
		scanf("%d", &opcao);
	}
	
	return 0;
}
