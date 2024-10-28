#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Escreva um algoritmo que leia 6 números do teclado e os armazene em uma matriz de 2 linhas e 3 colunas.
Em seguida, apresente os elementos da matriz na tela.*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int num, linha, coluna, matriz[2][3];
	
	for(linha = 0; linha < 2; linha++){
		
		for(coluna = 0; coluna < 3; coluna++){
			printf("Informe o número: ");
			scanf("%d", &matriz[linha][coluna]);
		}

	}
	
	for(linha = 0; linha < 2; linha++){
		
		for(coluna = 0; coluna < 3; coluna++){
			printf("Elemento da matriz[%d][%d]: %d\n", linha, coluna,matriz[linha][coluna]);
		}

	}
	
	return 0;
}
