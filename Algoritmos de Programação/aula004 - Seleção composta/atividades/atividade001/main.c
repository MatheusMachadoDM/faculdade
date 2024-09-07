#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*1. Escreva um algoritmo que leia dois números e efetue a adição dos mesmos. Caso o valor somado seja
menor que 20, este deverá ser apresentado somando-se a ele mais 8; caso o valor somado seja igual
ou maior que 20, este deverá ser apresentado subtraindo-se 5.*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	
	float n1, n2;
	
	printf("Digite um número: ");
	scanf("%d", &n1);
	
	printf("Digite outro número: ");
	scanf("%d", &n2);
	
	if(n1 + n2 < 20){
		printf("Resultado da soma desses números mais oito é %d", n1 + n2 + 8);
	}else{
		printf("Resultado da soma desses números menos cinco é: %d", n1 + n2 - 5);
	}
	
	return 0;
}
