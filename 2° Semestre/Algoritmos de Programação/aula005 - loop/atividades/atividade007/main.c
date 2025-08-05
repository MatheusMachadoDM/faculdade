#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*7. Escreva um algoritmo que apresente na tela a tabuada de um número lido do teclado. Por exemplo,
considerando que o número lido é 2, o formato da apresentação deve ser o seguinte:
	
2 x 1 = 2
2 x 2 = 4
2 x 3 = 6
2 x 4 = 8
2 x 5 = 10
2 x 6 = 12
2 x 7 = 14
2 x 8 = 16
2 x 9 = 18
2 x 10 = 20*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int num, contador;
	
	printf("Que número você deseja saber a tabuada? ");
	scanf("%d", &num);
	
	for(contador = 1; contador <= 10; contador ++){
		printf("%d x %d = %d\n", num, contador, num * contador);
	}
	
	return 0;
}
