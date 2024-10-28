#include <stdio.h>
#include <locale.h>
#include <string.h>

/*3.Escreva um programa para exibir os caracteres de A a Z.*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int i;
	char letra;
	
	for(i = 65; i < 91; i++){
		letra = (char)i;
		
		printf("%c ", letra);
	}
	return 0;
}
