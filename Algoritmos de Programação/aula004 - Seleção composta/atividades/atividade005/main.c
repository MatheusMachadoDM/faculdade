#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*5. Escreva um algoritmo que mostre se um número digitado está compreendido entre 20 e 90 (inclusive) ou não.*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int n1;
	
	printf("Digite um número: ");
	scanf("%d", &n1);
	
	if(n1 >= 20  && n1 <= 90){
		printf("Este número está compreendido entre 20 e 90!");
	}else{
		printf("Este número não está compreendido entre 20 e 90!");
	}
	
	return 0;
}
