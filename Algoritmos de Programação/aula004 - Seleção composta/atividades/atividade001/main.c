#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*1. Escreva um algoritmo que leia dois n�meros e efetue a adi��o dos mesmos. Caso o valor somado seja
menor que 20, este dever� ser apresentado somando-se a ele mais 8; caso o valor somado seja igual
ou maior que 20, este dever� ser apresentado subtraindo-se 5.*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	
	float n1, n2;
	
	printf("Digite um n�mero: ");
	scanf("%d", &n1);
	
	printf("Digite outro n�mero: ");
	scanf("%d", &n2);
	
	if(n1 + n2 < 20){
		printf("Resultado da soma desses n�meros mais oito � %d", n1 + n2 + 8);
	}else{
		printf("Resultado da soma desses n�meros menos cinco �: %d", n1 + n2 - 5);
	}
	
	return 0;
}
