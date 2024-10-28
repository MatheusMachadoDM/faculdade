#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>

/*9.Um hospital local est� fazendo uma campanha para receber doa��o de sangue. O propenso doador
	deve inicialmente se cadastrar informando o seu nome, sua idade, seu peso, responder a um breve
	question�rio e apresentar um documento oficial com foto. Fa�a um programa que permita ao hospital
	avaliar a aptid�o de um volunt�rio quanto � doa��o de sangue. Para estar apto a doar sangue, o
	volunt�rio deve ter idade entre 16 e 69 anos, pesar pelo menos 50 kg, estar bem alimentado e n�o
	estar resfriado. O programa deve ler os dados e imprimir no final o nome do volunt�rio e se ele est�
	apto ou n�o a doar sangue.
	
	
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	char nome[50], documento, doente, alimentado;
	int idade;
	float peso;
	
	printf("Digite o nome do volunt�rio: ");
	scanf(" %49[^\n]", nome);
	
	printf("Idade do volunt�rio: ");
	scanf("%d", &idade);
	
	printf("Peso do volunt�rio: EX: 50,5: ");
	scanf("%f", &peso);
	
	printf("Ele apresentou um documento com foto? [s] ou [n]: ");
	scanf(" %c", &documento);
	
	printf("Ele est� resfriado? [s] ou [n]: ");
	scanf(" %c", &doente);
	
	printf("Ele est� bem alimentado? [s] ou [s]: ");
	scanf(" %c", &alimentado);
	
	if(idade > 15 && idade < 70 && peso >= 50 && documento == 115 || documento == 83 && doente == 110 || doente == 78 && alimentado == 115 || alimentado == 83){
		printf("\nVolunt�rio %s apto!", nome);
		system("color 02");
	}else{
		printf("\nVolunt�rio %s N�O apto!", nome);
		system("color 04");
	}
	
	return 0;
}
