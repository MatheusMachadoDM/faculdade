#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*8.Escreva um programa alimente um vetor de 5 n�meros inteiros distintos. Em seguida, leia um n�mero
qualquer do teclado e mostre na tela o �ndice em que o n�mero se encontra no vetor, ou ent�o a
mensagem "N�o encontrado", se o n�mero n�o estiver presente no vetor.*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int vetor[5], i, num, encontrado = 0;
	
	printf("Digite um n�mero: \n");
	scanf("%d", &vetor[0]);
	
	for(i = 1; i < 5; i++){
		printf("Digite outro n�mero: \n");
		scanf("%d", &vetor[i]);
		
		while(vetor[i] == vetor[i - 1]){
			printf("O n�mero precisa se diferente do anterior, tente novamente: \n");
			scanf("%d", &vetor[i]);
		}
	}
	
	printf("Digite um n�mero j� digitado para saber que posi��o do vetor ele se encontra: \n");
	scanf("%d", &num);
	
	for(i = 0; i < 5; i++){
		if(vetor[i] == num){
			printf("O n�mero %d se encontra no vetor[%d]! \n", num, i);
			encontrado = 1;
		}
	}
	if(encontrado != 1){
		printf("O n�mero %d n�o se encontra no vetor!\n", num);
	}
	return 0;
}
