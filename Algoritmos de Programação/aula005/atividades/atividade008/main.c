#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*8.Escreva um algoritmo que mostre a tabuada de um número inteiro qualquer que será digitado pelo
usuário, mas a tabuada não deve necessariamente iniciar em 1 e terminar em 10, ou seja, o valor
inicial e final devem ser informados também pelo usuário, conforme mostrado no exemplo a seguir:

Mostrar a tabuada de: 5
Começar por: 4
Terminar em: 7
5 X 4 = 20
5 X 5 = 25
5 X 6 = 30
5 X 7 = 35
*/



int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int num[2], contador;
	
	printf("Que número você deseja saber a tabuada? ");
	scanf("%d", &num[0]);
	
	printf("Em número você deseja começar a tabuada? ");
	scanf("%d", &num[1]);
	
	printf("Em número você deseja parar a tabuada? ");
	scanf("%d", &num[2]);
	

	for(contador = num[1]; contador <= num[2]; contador++){
	    printf("%d x %d = %d\n", num[0], contador, num[0] * contador);
	}
	
	return 0;
}
