#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*14. Escreva um programa que leia duas matrizes (A e B) de 2 linhas e 3 colunas e, utilizando uma estrutura
de repetição, realize a troca dos elementos destas matrizes. Exemplo:



Matriz A 
		0    1     2
	+-----+-----+-----+
0 	|  10 | 20  | 30  |
	+-----+-----+-----+
1 	|  40 | 50  | 60  |
	+-----+-----+-----+

Matriz B 
		0	 1 	    2
	+-----+-----+-----+
0 	|  1  |  2  |  3  |
	+-----+-----+-----+
1 	|  4  |  5  |  6  |
	+-----+-----+-----+

/* Após a troca: Matriz A
		0     1     2
	+-----+-----+-----+
0  	|  1  |  2  |  3  |
	+-----+-----+-----+
1  	|  4  |  5  |  6  |
	+-----+-----+-----+

Após a troca: Matriz B 
		0    1     2
	+-----+-----+-----+
0 	|  10 |  20 |  30 |
	+-----+-----+-----+
1 	|  40 |  50 |  60 |
	+-----+-----+-----+*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int A[2][3] = {{10,20,30}, {40,50,60}}, B[2][3] = {{1,2,3},{4,5,6,}}, i, j, C[2][3];
	
	printf("Matrizes orginais: \n\n");
	
	for(i = 0; i < 2;i++){
		
		for(j = 0; j < 3;j++){
			printf("Matriz A[%d][%d]: %d\n",i, j, A[i][j]);
		}
	}
	printf("\n");
	for(i = 0; i < 2;i++){
		
		for(j = 0; j < 3;j++){
			printf("Matriz B[%d][%d]: %d\n",i, j, B[i][j]);
		}
	}
	
	for(i = 0; i < 2;i++){
		
		for(j = 0; j < 3;j++){
			C[i][j] = A[i][j];
			
			A[i][j] = B[i][j];
			B[i][j] = C[i][j];
		}
	}
	
	printf("\nMatrizes trocadas: \n\n");
	
	for(i = 0; i < 2;i++){
		
		for(j = 0; j < 3;j++){
			printf("Matriz A[%d][%d]: %d\n",i, j, A[i][j]);
		}
	}
	printf("\n");
	for(i = 0; i < 2;i++){
		
		for(j = 0; j < 3;j++){
			printf("Matriz B[%d][%d]: %d\n",i, j, B[i][j]);
		}
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
