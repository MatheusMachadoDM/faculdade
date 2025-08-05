#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*4. Escreva um programa que leia uma matriz M de 5 x 5 elementos e, utilizando estruturas de repetição,
apresente na tela o menor valor da matriz, o maior valor da matriz, a soma dos valores da matriz e a
média dos valores da matriz*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int linha, coluna, matriz[5][5] = {0}, menor, maior, soma;
	float media;
	
	
	for(linha = 0; linha < 5; linha++){
		for(coluna = 0; coluna < 5; coluna++){
			printf("Digite o elemento da matriz[%d][%d]: ",linha,coluna);
			scanf("%d",&matriz[linha][coluna]);
			
			soma = soma + matriz[linha][coluna];
			
			if(linha != 0 || coluna != 0){
				if(matriz[linha][coluna] < menor){
					menor = matriz[linha][coluna];
				}else{
					maior = matriz[linha][coluna];
				}
			}else{
				menor = matriz[linha][coluna];
				maior = matriz[linha][coluna];
			}
		}
	}
	media = soma / 25;
	
	printf("\nMaior: %d\nMenor: %d\nSoma %d\nMédia: %.2f", maior ,menor, soma, media);
	
	
	
	
	return 0;
}
