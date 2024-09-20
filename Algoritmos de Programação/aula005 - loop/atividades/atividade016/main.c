#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*16.Escreva um algoritmo que forneça quantos números devem existir em sequência a partir do 1 (1, 2, 3,
4,...) para que a sua soma ultrapasse o valor 100 o mínimo possível.*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int contador, resultado = 0, n1;
	
	for(contador = 1; resultado <= 100; contador++){
		
		resultado = resultado + contador;

	}
	
	printf("Somando %d números em sequência chegamos ao resultado %d. Ou seja são necessários somar %d números em sequência para o resultado ultrapassar 100!", contador - 1, resultado, contador -1);
	
	
	return 0;
}
