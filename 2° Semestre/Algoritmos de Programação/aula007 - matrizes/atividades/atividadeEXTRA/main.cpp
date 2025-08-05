#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <stdbool.h>

/*A origem dos quadrados mágicos não é conhecida, mas os antigos chineses, hindús e árabes foram os primeiros a trabalhar com os quadrados mágicos. 
O exemplo mais antigo é o Loh-Shu encontrado na China, trata-se de um quadrado mágico de ordem 3 que data de 2850 a.C.

Um quadrado mágico é uma matriz quadrada de números inteiros positivos em que a soma de cada linha, de cada coluna, 
da diagonal principal e da diagonal secundária tem o mesmo valor M, chamado de constante mágica. Note que nenhum número pode ser repetido
 em um quadrado mágico. Veja alguns exemplos:
 
 Exemplo 1:
 
 	+-----+-----+-----+
	|  8  |  1  |  6  |
	+-----+-----+-----+
	|  3  |  5  |  7  |
	+-----+-----+-----+
	|  4  |  9  |  2  |
	+-----+-----+-----+
	
Exemplo 2:
	
	+-----+-----+-----+
	|  8  |  3  |  4  |
	+-----+-----+-----+
	|  1  |  5  |  9  |
	+-----+-----+-----+
	|  6  |  7  |  2  |
	+-----+-----+-----+
 
 Exemplo 3:
 
	+-----+-----+-----+
	|  2  |  9  |  4  |
	+-----+-----+-----+
	|  7  |  5  |  3  |
	+-----+-----+-----+
	|  6  |  1  |  8  |
	+-----+-----+-----+
 
 Com base no exposto, escreva um programa que verifique se uma matriz de ordem 3 preenchida é um quadrado mágico ou não.
 */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"portuguese");

	int M[3][3] = {{8,1,6}, {3,5,7}, {4,9,2}}, i , V[8] = {0,0,0,0,0,0,0,0};
	bool magico;
	
	for(i = 0; i < 3; i ++){
		V[0] += M[0][i];
		
		V[1] += M[1][i];
		
		V[2] += M[2][i];
		
		V[3] += M[i][0];
		
		V[4] += M[i][1];
		
		V[5] += M[i][2];
		
		V[6] += M[i][i];
		
		V[7] += M[i][2 - i];
	}
	for(i = 1; i < 8; i++){
		if(V[i] != V[0]){
			printf("A matriz NÂO é um quadrado mágico.");
            return 0;
		}
	}
		printf("A matriz é um quadrado mágico!");
	return 0;
}
