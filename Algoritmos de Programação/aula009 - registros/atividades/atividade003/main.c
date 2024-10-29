#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*3. Crie uma estrutura representando um atleta. Essa estrutura deve conter o nome do atleta, seu
esporte, idade e altura. Em seguida, leia os dados de 5 atletas. Calcule e exiba os nomes do atleta mais
alto e do atleta mais velho.*/

	struct Atleta{
		char nome[31], esporte[21];
		int idade;
		float altura;
		
	};

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	struct Atleta atleta[5];
	int i, maisVelho, iIdade, iAltura;
	float maior;
	
	for(i = 0; i < 5; i++){
		printf("Digite o nome do(a) %d° atleta: ", i + 1);
		scanf(" %30[^\n]", atleta[i].nome);
		
		printf("Digite o esporte do atleta: ");
		scanf(" %20[^\n]", atleta[i].esporte);
		
		printf("Digite a sua idade: ");
		scanf("%d", &atleta[i].idade);
		
		printf("Digite a altura do(a) atleta: ex: 1.90: ");
		scanf("%d", &atleta[i].altura);
		
		if(i != 0){
			if(atleta[i].altura > maior){
				maior = atleta[i].altura;
				iAltura = i;
			}
			if(atleta[i].idade > maisVelho){
				maisVelho = atleta[i].idade;
				iIdade = i;
			}
		}else{
			maior = atleta[i].altura;
			maisVelho = atleta[i].idade;
			iIdade = i;
			iAltura = i;
		}
		
		while (getchar() != '\n');
	}
	
	printf("\nO atleta mais velho(a) é o(a) %s!", atleta[iIdade].nome);
	printf("\nE atleta mais alto(a) é o(a) %s!", atleta[iAltura].nome);
	
	
	
	
	return 0;
}
