#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*9.Escreva um algoritmo que calcule e mostre na tela uma tabela de valores de temperatura em Celsius e
Farenheit. A faixa de temperaturas que deve ser mostrada é de 0 a 100 graus Celsius, em intervalos de
5 graus.*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	float contador;
	

	
	for(contador = 0; contador <= 20; contador++ ){
		printf("%2.f Celcius são %2.f Fahrenheits\n", contador * 5, contador * 5 * 1.8 + 32);	
	}

	
	return 0;
}
