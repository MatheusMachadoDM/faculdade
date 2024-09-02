#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*9. Escreva um algoritmo que, dada a idade de uma pessoa, determine sua classificação como menor de
idade (menos de 18 anos), maior de idade ou terceira idade (idade igual ou superior a 65 anos).*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	
	int idade;
	
	printf("Digite a sua idade: ");
	scanf("%d", &idade);
	
	if(idade < 0 || idade > 125){
		printf("Digite uma idade válida!");
	}else if(idade < 18){
		printf("Você é menor de idade!");
	}else if(idade < 65){
		printf("Você é maior de idade!");
	}else{
		printf("Você esta na terceira de idade!");
	}
	
	return 0;
}
