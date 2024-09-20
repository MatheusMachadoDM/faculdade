#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*15.Escreva um algoritmo que receba um n�mero inteiro positivo e escreva a sequ�ncia de n�meros de
Fibonacci. Por exemplo, se o n�mero for 10, escreva 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int contador, num, fibo, n1 = 0, n2 = 1, n3;
	
	printf("Digite um n�mero inteiro positivo: ");
	scanf("%d", &num);
	
	if(num >= 0){
		printf("Sequencia de Fibonacci calculada %d vezes:\n", num);
		
		for(contador = 1; contador <= num; contador++){
			
			if(contador != 1){
				n3 = n1 + n2;
				n1 = n2;
				n2 = n3;
				
				printf(", %d", n3);
			}else{
				printf("%d, %d", n1, n2);
			}
		}
	}else{
		printf("Digite um n�mero v�lido!", num);
	}
	
	return 0;
}
