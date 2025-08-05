#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*12. Escreva um algoritmo que converta números inteiros, de sua representação numérica para
representação em extenso. O algoritmo deverá solicitar ao usuário um número inteiro (de 0 a 9) e
mostrar na tela o valor em extenso. Por exemplo, se o usuário digitar "7", o algoritmo deverá mostrar
"Sete". Se o usuário digitar um valor fora da faixa prevista (de 0 a 9), o algoritmo deverá mostrar "Valor
inválido".*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	
	int n1;
	
	printf("Digite um número inteiro de 0 a 9: ");
	scanf("%d", &n1);
	
	switch(n1){
		case 0: printf("Zero");
		break;
		
		case 1: printf("Um");
		break;
		
		case 2: printf("Dois");
		break;
		
		case 3: printf("Três");
		break;
		
		case 4: printf("Quatro");
		break;
		
		case 5: printf("Cinco");
		break;
		
		case 6: printf("Seis");
		break;
		
		case 7: printf("Sete");
		break;
		
		case 8: printf("Oito");
		break;
		
		case 9: printf("Nove");
		break;
		
		default: printf("Digite um valor válido!"), system("color 04");
	}
	
	return 0;
}
