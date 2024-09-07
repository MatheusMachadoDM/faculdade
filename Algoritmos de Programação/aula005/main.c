#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Estruturas de controle – repetição / laços*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	/*Repetição com teste no início:
		Comportamento: primeiro testa, depois executa. Se na primeira tentativa de execução do bloco a condição
		for falsa, o bloco não é executado nenhuma vez.
		
		Exemplo: escreva um algoritmo que mostre na tela os números de 1 a 5.*/
		int contador;
		
		contador = 1;
		
		while(contador <= 5){
			printf("%d\n", contador);
			contador = contador + 1;
		}
		
	/*Repetição com teste no fim:
		Comportamento: primeiro executa, depois testa. Mesmo que na primeira tentativa a condição seja falsa, o
		bloco de comandos é executado uma vez, visto que o teste é feito apenas no final do bloco de comandos a
		ser repetido. Ou seja, pelo menos uma vez o bloco de comandos é executado.
		
		Exemplo: escreva um algoritmo que mostre na tela os números de 1 a 5.*/
		int contador2;
		
		contador2 = 1;
		
		do{
			printf("%d\n", contador2);
			contador2 = contador2 + 1;
		}while(contador2 <=5);
		
	/*Repetição com variável de controle:
		Comportamento: primeiro testa, depois executa. Se na primeira tentativa de execução do bloco a condição
		for falsa, o bloco não é executado nenhuma vez.
		
		Exemplo: escreva um algoritmo que mostre na tela os números de 1 a 5.*/
		int contador3;
		
		
		
		for(contador3 = 1; contador3 <= 5; contador3 = contador3 + 1){
			printf("%d\n", contador3);
		}
		
	
	return 0;
}
