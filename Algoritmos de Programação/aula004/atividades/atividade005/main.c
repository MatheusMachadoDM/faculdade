#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*5. Escreva um algoritmo que mostre se um n�mero digitado est� compreendido entre 20 e 90 (inclusive) ou n�o.*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int n1;
	
	printf("Digite um n�mero: ");
	scanf("%d", &n1);
	
	if(n1 >= 20  && n1 <= 90){
		printf("Este n�mero est� compreendido entre 20 e 90!");
	}else{
		printf("Este n�mero n�o est� compreendido entre 20 e 90!");
	}
	
	return 0;
}
