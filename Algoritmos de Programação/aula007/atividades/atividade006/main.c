#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*6. Escreva um programa que leia uma matriz M de 5 x 5 elementos e, utilizando estruturas de repeti��o,
apresente na tela a soma de todos os elementos da coluna 2 da matriz

		. . x . .
		. . x . .
		. . x . .
		. . x . .
		. . x . .
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int linha, coluna, matriz[5][5], soma = 0;
	
	for(linha = 0; linha < 5; linha++){
		for(coluna = 0; coluna < 5; coluna++){
			printf("Digite o elemento da matriz[%d][%d]: ", linha, coluna);
			scanf("%d",&matriz[linha][coluna]);
			
			if(coluna == 2){
				soma = soma + matriz[linha][2];
			}
		}
	}
	printf("\nSoma dos n�meros da terceira coluna com �ndice 2 da matriz: %d", soma);
	
	
	return 0;
}
