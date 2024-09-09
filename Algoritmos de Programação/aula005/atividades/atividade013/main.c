#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*13.Escreva um algoritmo que mostre o resultado dos primeiros 20 termos da série: 1/1 + 3/2 + 5/4 + 7/8 +
... Resultado: 6.00.*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	float contador, n1 = 1, n2 = 1, divisao = 0;
	
	for(contador = 1; contador <=20; contador++){
		
		if(contador != 1){
			n1 = n1 + 2;
			n2 = n2 * 2;
		}else{
			n1 = 1;
			n2 = 1;
		}
		
		divisao = divisao + (n1 / n2);
		
		if(contador != 20){
			printf("%.0f / %.0f +\n", n1, n2);
		}else{
			printf("%.0f / %.0f = ", n1, n2);
		}	
	}
	printf("%.2f", divisao);
	
	return 0;
}
