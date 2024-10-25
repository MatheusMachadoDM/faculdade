#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	char nome[21];
	
	printf("Digite o seu nome: ");
	scanf(" %20[^\n]", nome);
	
	printf("Seu nome é %s", nome);
	
	return 0;
}
