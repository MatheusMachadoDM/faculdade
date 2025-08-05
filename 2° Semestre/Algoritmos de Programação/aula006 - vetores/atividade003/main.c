#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*3. Escreva um programa que alimente um vetor com 5 números e calcule a média destes valores. Na
sequência, apresente na tela os valores que são iguais ou superiores à média.*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int num[5], i; 
	float soma = 0;
	
	for(i = 0; i < 5; i++){
		printf("Digite um número: ");
		scanf("%d", &num[i]);
		
		soma = soma + num [i];
	}
	
	printf("\nA média destes valores é: %.1f\n", soma / 5);
	
	for(i = 0; i < 5; i++){
		if(num[i] >= soma / 5){
			printf("\n%d Está na média ou acima dela!", num[i]);
		}
	}
	
	
	return 0;
}
