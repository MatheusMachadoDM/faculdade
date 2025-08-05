#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*12. Escreva um programa que leia uma matriz M de 4 x 4 elementos e, utilizando estruturas de repetição,
apresente na tela a soma dos elementos marcados com x
		0 1 2 3
	0	. . . x
	1	. . x x
	2	. x x x
	3	x x x x
*/

int main(int argc, char argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int matriz[4][4], i, j, soma, reverso;
	
	for(i = 0; i < 4; i++){
		
		for(j = 0; j < 4;j++){
			printf("Digite o elemento da matriz[%d][%d] ", i, j);
			scanf("%d", &matriz[i][j]);
			
			if(j >= 3 - i){
				soma = soma + matriz[i][j];
			}
				
		}
	
	}
	printf("Resultado da soma %d", soma);
	return 0;
}
