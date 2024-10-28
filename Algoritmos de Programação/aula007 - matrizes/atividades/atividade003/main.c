#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Escreva um programa que alimente uma matriz M de 2 x 3 elementos inteiros. Em seguida, leia um
n�mero qualquer do teclado e mostre na tela o �ndice em que o n�mero se encontra na matriz, ou
ent�o a mensagem "N�mero n�o encontrado!", se o n�mero n�o estiver presente na matriz*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int num, linha, coluna, matriz[2][3], encontrado;
	
	for(linha = 0; linha < 2; linha++){
		for(coluna = 0; coluna < 3; coluna++){
			printf("Digite o elemento da matriz[%d][%d]: ", linha, coluna);
			scanf("%d", &matriz[linha][coluna]);
		}
	}
	
	printf("\nDigite um n�mero: ");
	scanf("%d", &num);
	
	
	for(linha = 0; linha < 2; linha++){
		for(coluna = 0; coluna < 3; coluna++){
			if(num == matriz[linha][coluna]){
				printf("Este n�mero corresponde ao elemento da matriz[%d][%d]", linha, coluna);
				
				encontrado = 1;
			}
		}
	}
	if(encontrado != 1){
		printf("N�mero n�o encontrado na matriz!");
	}
	
	
	return 0;
}
