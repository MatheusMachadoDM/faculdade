#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*3.Escreva um algoritmo que mostre os n�meros m�ltiplos de 5, no intervalo de 1 at� 100.*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int contador;
	
	contador = 0;
	
	while(contador <= 100){
		printf("%d\n", contador);
		contador = contador + 5;
	}
	return 0;
}
