#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Escreva um programa que alimente uma matriz M de 2 x 3 elementos inteiros e, utilizando estruturas
de repetição, apresente na tela a soma de todos os elementos da matriz.*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	
	 int linha, coluna, matriz[2][3], soma;
	 
	 for(linha = 0; linha < 2; linha++){
	 	for(coluna = 0; coluna < 3; coluna++){
	 		printf("Digite o elemento da matriz[%d][%d]: ",linha ,coluna);
	 		scanf("%d", &matriz[linha][coluna]);
	 		
	 		soma = soma + matriz[linha][coluna];	
	 	}
	 }

	 printf("\nA soma das matrizes é: %d", soma);
	return 0;
}
