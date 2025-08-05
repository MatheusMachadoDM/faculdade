#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/* Seleção composta */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	
	int codigo;
	
	printf("Digite o código do produto (Códigos: 110, 120, 130, 140 e 150): ");
	scanf("%d", &codigo);
	
	switch(codigo){
		
		case 110: printf("Este produto é uma camiseta!");
		break;
		
		case 120: printf("Este produto é um microondas!");
		break;
		
		case 130: printf("Este produto é um computador!");
		break;
		
		case 140: printf("Este produto é um livro!");
		break;
		
		case 150: printf("Este produto é uma chuteira!");
		break;
		
		default: printf("Código inválido!"), system("color 04");
	}
	return 0;
}
