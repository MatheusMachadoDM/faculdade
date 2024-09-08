#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*5.Escreva um algoritmo que mostre todos os números pares existentes entre 1 e um número lido do
teclado, bem como a quantidade de números apresentados.*/
int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int n1, contador, quantidade = 0;
	
	printf("Digite um número inteiro acima de 1: "); 
	scanf("%d", &n1); 
	
	printf("Números pares entre 1 e %d são:\n", n1);
	
	for(contador = 1; contador <= n1; contador++){
		if(contador % 2 == 0){
			printf("%d ", contador);
			quantidade = quantidade + 1;
		}
	}
	
	printf("\n%d números foram apresentados.",quantidade);
	return 0;
}
