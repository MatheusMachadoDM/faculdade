#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*7.Escreva um programa que armazene 5 n�meros em um vetor e apresente uma listagem contendo o
�ndice do elemento e uma das mensagens: par ou �mpar.*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int vetor[5], i;
	
	for(i = 0; i < 5; i++){
		printf("Digite o n�mero %d: \n", i + 1);
		scanf("%d", &vetor[i]);
	}
	for(i = 0; i < 5; i++){
		if(vetor[i] %2 == 0){
			printf("\n%d � um n�mero par", vetor[i]);
		}else{
			printf("\n%d � um n�mero �mpar", vetor[i]);
		}
	}
	return 0;
}
