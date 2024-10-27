#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>

/*9.Um hospital local está fazendo uma campanha para receber doação de sangue. O propenso doador
	deve inicialmente se cadastrar informando o seu nome, sua idade, seu peso, responder a um breve
	questionário e apresentar um documento oficial com foto. Faça um programa que permita ao hospital
	avaliar a aptidão de um voluntário quanto à doação de sangue. Para estar apto a doar sangue, o
	voluntário deve ter idade entre 16 e 69 anos, pesar pelo menos 50 kg, estar bem alimentado e não
	estar resfriado. O programa deve ler os dados e imprimir no final o nome do voluntário e se ele está
	apto ou não a doar sangue.
	
	
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	char nome[50], documento, doente, alimentado;
	int idade;
	float peso;
	
	printf("Digite o nome do voluntário: ");
	scanf(" %49[^\n]", nome);
	
	printf("Idade do voluntário: ");
	scanf("%d", &idade);
	
	printf("Peso do voluntário: EX: 50,5: ");
	scanf("%f", &peso);
	
	printf("Ele apresentou um documento com foto? [s] ou [n]: ");
	scanf(" %c", &documento);
	
	printf("Ele está resfriado? [s] ou [n]: ");
	scanf(" %c", &doente);
	
	printf("Ele está bem alimentado? [s] ou [s]: ");
	scanf(" %c", &alimentado);
	
	if(idade > 15 && idade < 70 && peso >= 50 && documento == 115 || documento == 83 && doente == 110 || doente == 78 && alimentado == 115 || alimentado == 83){
		printf("\nVoluntário %s apto!", nome);
		system("color 02");
	}else{
		printf("\nVoluntário %s NÃO apto!", nome);
		system("color 04");
	}
	
	return 0;
}
