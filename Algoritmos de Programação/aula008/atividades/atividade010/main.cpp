#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>

/*10. Escreva um programa que, dada uma string, diga se ela e um palíndromo ou não. Um palíndromo é
um texto que tem a característica de poder ser lido tanto da direita para a esquerda, como da
esquerda para a direita. Exemplos: ovo, arara, anotaram a data da maratona, o lobo ama o bolo.*/

int main(int argc, char** argv) {
	setlocale(LC_ALL,"portuguese");
	
	char str[50], palindromo[50];
	int i, largura;
	bool igual = true;
	
	printf("Digite uma palavra para analisarmos se ela é um palíndromo: ");
	scanf(" %49[^\n]", str);
	
	largura = strlen(str);
	
	for(i = 0; i <= largura; i++){
		palindromo[i] = str[largura - i - 1];
		
		if(i == largura){
			palindromo[i] = '\0';
		}
	}
	
	for(i = 0; i < largura; i++){
		if(palindromo[i] != str[i]){
			igual = false;
		}
	}
	if(igual == true){
		printf("Esta palavra é um palíndromo!");
	}else{
		printf("Esta palavra NÃO é um palíndromo!");
	}
	return 0;
}
