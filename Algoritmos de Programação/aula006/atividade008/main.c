#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*8.Escreva um programa alimente um vetor de 5 números inteiros distintos. Em seguida, leia um número
qualquer do teclado e mostre na tela o índice em que o número se encontra no vetor, ou então a
mensagem "Não encontrado", se o número não estiver presente no vetor.*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int vetor[5], i, num, encontrado = 0;
	
	printf("Digite um número: \n");
	scanf("%d", &vetor[0]);
	
	for(i = 1; i < 5; i++){
		printf("Digite outro número: \n");
		scanf("%d", &vetor[i]);
		
		while(vetor[i] == vetor[i - 1]){
			printf("O número precisa se diferente do anterior, tente novamente: \n");
			scanf("%d", &vetor[i]);
		}
	}
	
	printf("Digite um número já digitado para saber que posição do vetor ele se encontra: \n");
	scanf("%d", &num);
	
	for(i = 0; i < 5; i++){
		if(vetor[i] == num){
			printf("O número %d se encontra no vetor[%d]! \n", num, i);
			encontrado = 1;
		}
	}
	if(encontrado != 1){
		printf("O número %d não se encontra no vetor!\n", num);
	}
	return 0;
}
