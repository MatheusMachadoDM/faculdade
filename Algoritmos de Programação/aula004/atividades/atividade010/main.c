#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*10. Em uma certa papelaria, at� 100 folhas, a c�pia do xerox custa R$ 0,25 e, acima de 100 folhas, cada
c�pia adicional custa R$ 0,20. Escreva um algoritmo que dado o n�mero total de c�pias, informe o
valor a ser pago.*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	
	float copias, cem;
	
	printf("Quantas c�pias voc� fez?");
	scanf("%f", &copias);
	
	if(copias < 0){
		printf("Digite uma quantidade v�lida!"), system("color 04");
	}else if(copias <= 100){
		printf("Voc� deve pagar R$%.2f", copias * 0.25);
	}else{
		printf("Voc� deve pagar R$%.2f", (copias - 100) * 0.20 + 25);
	}
	
	return 0;
}
