#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*16.Escreva um algoritmo que forne�a quantos n�meros devem existir em sequ�ncia a partir do 1 (1, 2, 3,
4,...) para que a sua soma ultrapasse o valor 100 o m�nimo poss�vel.*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int contador, n1, resultado = 0;
	
	for(contador = 1; resultado <= 100; contador++){
		
		resultado = resultado + contador;
		
		printf("resultado = %d\n", resultado);
		printf("Contador = %d\n\n", contador);

	}
	
	return 0;
}
