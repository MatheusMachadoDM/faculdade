#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*9.Escreva um algoritmo que calcule e mostre na tela uma tabela de valores de temperatura em Celsius e
Farenheit. A faixa de temperaturas que deve ser mostrada é de 0 a 100 graus Celsius, em intervalos de
5 graus.*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int contador;
	

	
	for(contador = 1; contador <= 20; contador++ ){
		printf("%d Celcius são %d Fahrenheits\n", contador * 5, (float)(contador * 5) * 1,8 +32);	
	}

	
	return 0;
}
