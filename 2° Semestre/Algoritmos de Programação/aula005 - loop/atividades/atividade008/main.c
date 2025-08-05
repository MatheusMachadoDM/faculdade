#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*8.Escreva um algoritmo que mostre a tabuada de um n�mero inteiro qualquer que ser� digitado pelo
usu�rio, mas a tabuada n�o deve necessariamente iniciar em 1 e terminar em 10, ou seja, o valor
inicial e final devem ser informados tamb�m pelo usu�rio, conforme mostrado no exemplo a seguir:

Mostrar a tabuada de: 5
Come�ar por: 4
Terminar em: 7
5 X 4 = 20
5 X 5 = 25
5 X 6 = 30
5 X 7 = 35
*/



int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int num[2], contador;
	
	printf("Que n�mero voc� deseja saber a tabuada? ");
	scanf("%d", &num[0]);
	
	printf("Em n�mero voc� deseja come�ar a tabuada? ");
	scanf("%d", &num[1]);
	
	printf("Em n�mero voc� deseja parar a tabuada? ");
	scanf("%d", &num[2]);
	

	for(contador = num[1]; contador <= num[2]; contador++){
	    printf("%d x %d = %d\n", num[0], contador, num[0] * contador);
	}
	
	return 0;
}
