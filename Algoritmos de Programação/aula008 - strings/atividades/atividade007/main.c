#include <stdio.h>
#include <locale.h>
#include <string.h>

/*7. Escreva um programa que receba uma string e um caractere, e retorne o número de vezes que esse
caractere aparece na string.*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	char str[47], c;
	int quantidade, i, contador = 0;
	
	printf("Digite uma palavra: ");
	scanf(" %46[^\n]", str);
	
	printf("Digite uma letra: ");
	scanf(" %c", &c);
	
	quantidade = strlen(str);
	
	for(i=0;i<quantidade;i++){
		if(c == str[i]){
			contador += 1;
		}
	}
	printf("A letra %c aparece %d vezes na palavra %s.", c, contador, str);
	
	return 0;
}
