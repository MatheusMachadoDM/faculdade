#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Estruturas de dados heterogêneas (registros)*/

struct Pessoa{
	char nome[31];
	int idade;
	float altura;
};

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	struct Pessoa pessoa[3] = {{"Jose", 20, 1.6},{"Karol", 30, 1.6},{"Joao", 60, 1.8}};
	int i;
	
	/*for(i = 0; i < 3; i++){
	
		printf("Digite seu nome: ");
		scanf(" %30[^\n]", pessoa[i].nome);
		
		printf("Informe a sua idade: ");
		scanf("%d", &pessoa[i].idade);
		
		printf("Informe a sua altura: EX:1,70:");
		scanf("%f", &pessoa[i].altura);
		
		printf("\n");
	}*/
	
	for(i = 0; i < 3; i++){
		printf("Ola %s! Você tem %d anos e %.2f metros de altura! \n", pessoa[i].nome, pessoa[i].idade, pessoa[i].altura);
	}
	
	return 0;
}
