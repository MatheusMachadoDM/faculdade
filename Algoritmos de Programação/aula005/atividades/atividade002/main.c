#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*2.Escreva um algoritmo que mostre na tela uma contagem regressiva de 10 até 0 para o lançamento de
um foguete. Após o término da contagem regressiva, deve ser apresentada a palavra "Fogo!".*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int contador;
	
	for(contador = 10; contador >= 0; contador--){
		printf("%d\n", contador);
	}
	printf("Fogo!");
	
	return 0;
}
