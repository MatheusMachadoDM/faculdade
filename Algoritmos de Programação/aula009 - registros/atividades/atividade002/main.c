#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*2. Suponha que você está fazendo uma pesquisa de preços para a compra de um tablet. Para auxiliá-lo,
escreva um programa que permita o cadastro de cinco registros, cada um contendo o nome de uma
loja e o preço do tablet naquela loja. O programa deve calcular a média dos preços e mostrar uma
relação contendo o nome lojas que tenham o tablet com preço abaixo da média.*/

struct Registros{
	char loja[21];
	float preco;
};

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	struct Registros registros[5];
	int i;
	float media = 0;
	
	for(i=0;i<5;i++){
		printf("Digite a %d° loja: ", i + 1);
		scanf(" %20[^\n]", registros[i].loja);
		
		printf("Qual o preço do tablet nessa loja: Ex: 1200.50: ");
		scanf("%f", &registros[i].preco);
		
		while (getchar() != '\n');
		
		media += registros[i].preco;
		printf("\n");
	}
	media = media / 5;
	
	for(i=0;i<5;i++){
		if(registros[i].preco < media){
			printf("A loja %s oferece o produto com valor menor do que a média!\n");
		}
	}
	
	return 0;
}
