#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*3. Escreva um programa que alimente um vetor com 5 n�meros e calcule a m�dia destes valores. Na
sequ�ncia, apresente na tela os valores que s�o iguais ou superiores � m�dia.*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int num[5], i; 
	float soma = 0;
	
	for(i = 0; i < 5; i++){
		printf("Digite um n�mero: ");
		scanf("%d", &num[i]);
		
		soma = soma + num [i];
	}
	
	printf("\nA m�dia destes valores �: %.1f\n", soma / 5);
	
	for(i = 0; i < 5; i++){
		if(num[i] >= soma / 5){
			printf("\n%d Est� na m�dia ou acima dela!", num[i]);
		}
	}
	
	
	return 0;
}
