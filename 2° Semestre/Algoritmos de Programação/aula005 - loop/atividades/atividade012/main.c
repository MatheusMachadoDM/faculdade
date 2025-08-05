#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*12.Escreva um algoritmo que mostre o resultado da série: 1/100 + 2/99 + 3/98 + 4/97 + ... + 100/1.
Resultado: 423.93.*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	float contador, n1 = 0, n2 = 101, divisao = 0;
	
	for(contador = 1; contador <= 100; contador++){
		
		n1 += 1;
		n2 -= 1;
		
		if(contador != 100){
			printf("\n%.0f / %.0f +", n1, n2);
		}else{
			printf("\n100 / 1 =");
		}
		
		divisao = divisao + (n1 / n2);
	}
	printf(" %.2f", divisao);
	

	return 0;
}
