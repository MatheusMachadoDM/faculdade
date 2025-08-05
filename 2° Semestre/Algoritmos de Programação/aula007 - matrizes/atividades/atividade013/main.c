#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*13. Escreva um programa que leia uma matriz M de 4 x 5 elementos e, utilizando uma estrutura de
repetição, armazene em um vetor V o menor elemento de cada linha da matriz. Exemplo

Matriz M preenchida 
    0 	  1 	2 	 3     4
+-----+-----+-----+-----+-----+
0 | 5 |  4  |  2  |  8  |  7  |
+-----+-----+-----+-----+-----+
1 | 3 |  6  |  9  |  1  |  4  |  
+-----+-----+-----+-----+-----+
2 | 0 |  3  |  5  |  2  |  9  |
+-----+-----+-----+-----+-----+
3 | 4 |  9  |  7  |  6  |  2  |
+-----+-----+-----+-----+-----+

Vetor V preenchido 
	0 	 1 	    2 	  3
+-----+-----+-----+-----+
|  2  |  1  |  0  |  2  |
+-----+-----+-----+-----+

*/

int main(int argc, char argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int matriz[4][5], i, j, vetor[4], menor;
	
	for(i = 0; i < 4; i++){
		
		for(j = 0; j < 5;j++){
			printf("Digite o elemento da matriz[%d][%d] ", i, j);
			scanf("%d", &matriz[i][j]);
			
			if(i != 0 || j != 0){
				if(menor > matriz[i][j]){
					menor = matriz[i][j];
				}
			}else{
				menor = matriz[i][j];
			}
		}
		vetor[i] = menor;
	}
	printf("\nVetor prenchido: ");
	
	for(i = 0; i < 4; i++){
		printf("%d ", vetor[i]);
	}
	return 0;
}
