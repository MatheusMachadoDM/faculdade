#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/* Sele��o composta */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	
	int codigo;
	
	printf("Digite o c�digo do produto (C�digos: 110, 120, 130, 140 e 150): ");
	scanf("%d", &codigo);
	
	switch(codigo){
		
		case 110: printf("Este produto � uma camiseta!");
		break;
		
		case 120: printf("Este produto � um microondas!");
		break;
		
		case 130: printf("Este produto � um computador!");
		break;
		
		case 140: printf("Este produto � um livro!");
		break;
		
		case 150: printf("Este produto � uma chuteira!");
		break;
		
		default: printf("C�digo inv�lido!"), system("color 04");
	}
	return 0;
}
