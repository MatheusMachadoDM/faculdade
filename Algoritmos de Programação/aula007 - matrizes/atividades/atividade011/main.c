#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*11. Escreva um programa que leia uma matriz M de 4 x 4 elementos e, utilizando estruturas de repeti��o,
apresente na tela a soma dos elementos marcados com x
		0 1 2 3
	0	x . . .
	1	x x . .
	2	x x x .
	3	x x x x
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int matriz[4][4], linha, coluna, soma;
	
	for(linha = 0; linha < 4; linha++){
		
		for(coluna = 0; coluna < 4;coluna++){
			printf("Digite o elemento da matriz[%d][%d]: ", linha, coluna);
			scanf("%d", &matriz[linha][coluna]);
			
			if(coluna <= linha){
				soma = soma +matriz[linha][coluna];
			}
		}
	
	}
	printf("Resultado da soma: %d", soma);
	return 0;
}
