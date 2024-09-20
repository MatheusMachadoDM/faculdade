#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Estruturas de controle � repeti��o / la�os*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	/*Repeti��o com teste no in�cio:
		Comportamento: primeiro testa, depois executa. Se na primeira tentativa de execu��o do bloco a condi��o
		for falsa, o bloco n�o � executado nenhuma vez.
		
		Exemplo: escreva um algoritmo que mostre na tela os n�meros de 1 a 5.*/
		int contador;
		
		contador = 1;
		
		while(contador <= 5){
			printf("%d\n", contador);
			contador = contador + 1;
		}
		
	/*Repeti��o com teste no fim:
		Comportamento: primeiro executa, depois testa. Mesmo que na primeira tentativa a condi��o seja falsa, o
		bloco de comandos � executado uma vez, visto que o teste � feito apenas no final do bloco de comandos a
		ser repetido. Ou seja, pelo menos uma vez o bloco de comandos � executado.
		
		Exemplo: escreva um algoritmo que mostre na tela os n�meros de 1 a 5.*/
		int contador2;
		
		contador2 = 1;
		
		do{
			printf("%d\n", contador2);
			contador2 = contador2 + 1;
		}while(contador2 <=5);
		
	/*Repeti��o com vari�vel de controle:
		Comportamento: primeiro testa, depois executa. Se na primeira tentativa de execu��o do bloco a condi��o
		for falsa, o bloco n�o � executado nenhuma vez.
		
		Exemplo: escreva um algoritmo que mostre na tela os n�meros de 1 a 5.*/
		int contador3;
		
		
		
		for(contador3 = 1; contador3 <= 5; contador3 = contador3 + 1){
			printf("%d\n", contador3);
		}
		
	
	return 0;
}
