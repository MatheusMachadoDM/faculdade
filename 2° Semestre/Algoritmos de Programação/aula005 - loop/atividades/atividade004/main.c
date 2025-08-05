#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*4.Escreva um algoritmo que mostre na tela a soma obtida dos 100 primeiros números inteiros (1 + 2 + 3
+ 4 + 5 + ... + 100). Resultado: 5050*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int contador;
	
	contador = 0;
	
	while(contador < 100){
		printf("%d +", contador);
		contador = contador + 1;
		
		if(contador == 100){
			printf("100 = 5050");
		}
	}
	
//forma mais certa

	int i, soma;
	
	soma = 0;
	
	for(i = 1;i <= 100; i++){
		soma += i;
	}
	printf("\nA soma obtida dos 100 primeiros números inteiros é: %d", soma);
	
	
	return 0;
}
