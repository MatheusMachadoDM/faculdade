#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*10. Em uma certa papelaria, até 100 folhas, a cópia do xerox custa R$ 0,25 e, acima de 100 folhas, cada
cópia adicional custa R$ 0,20. Escreva um algoritmo que dado o número total de cópias, informe o
valor a ser pago.*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	
	float copias, cem;
	
	printf("Quantas cópias você fez?");
	scanf("%f", &copias);
	
	if(copias < 0){
		printf("Digite uma quantidade válida!"), system("color 04");
	}else if(copias <= 100){
		printf("Você deve pagar R$%.2f", copias * 0.25);
	}else{
		printf("Você deve pagar R$%.2f", (copias - 100) * 0.20 + 25);
	}
	
	return 0;
}
