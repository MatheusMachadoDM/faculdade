#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*1.Escreva um algoritmo que mostre os n�meros de 1 at� 10, um n�mero por linha.*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int contador;
	
	for(contador = 1; contador <= 10; contador++){
		printf("%d\n", contador);
	}
	return 0;
}
