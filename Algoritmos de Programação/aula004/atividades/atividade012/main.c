#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*12. Escreva um algoritmo que converta n�meros inteiros, de sua representa��o num�rica para
representa��o em extenso. O algoritmo dever� solicitar ao usu�rio um n�mero inteiro (de 0 a 9) e
mostrar na tela o valor em extenso. Por exemplo, se o usu�rio digitar "7", o algoritmo dever� mostrar
"Sete". Se o usu�rio digitar um valor fora da faixa prevista (de 0 a 9), o algoritmo dever� mostrar "Valor
inv�lido".*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	
	int n1;
	
	printf("Digite um n�mero inteiro de 0 a 9: ");
	scanf("%d", &n1);
	
	switch(n1){
		case 0: printf("Zero");
		break;
		
		case 1: printf("Um");
		break;
		
		case 2: printf("Dois");
		break;
		
		case 3: printf("Tr�s");
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
		
		default: printf("Digite um valor v�lido!"), system("color 04");
	}
	
	return 0;
}
