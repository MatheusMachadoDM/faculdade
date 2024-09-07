#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*1.Escreva um algoritmo que mostre os números de 1 até 10, um número por linha.*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int contador;
	
	for(contador = 1; contador <= 10; contador++){
		printf("%d\n", contador);
	}
	return 0;
}
