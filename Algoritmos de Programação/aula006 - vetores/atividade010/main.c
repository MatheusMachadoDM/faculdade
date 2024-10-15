#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*10.Escreva um programa que preencha um vetor de 100 elementos inteiros com os números 10, 20, 30,
40, 50, ... , 1000. Apresentar o vetor na tela após o seu total preenchimento.*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int vetor[100], i;
	
	vetor[i] = 10;
	
	for(i = 1; i < 100; i++){
		vetor[i] = vetor[i - 1] + 10;
	}
	
	for(i = 0; i < 100; i++){
		printf("%d\n", vetor[i]);
	}
	return 0;
}
