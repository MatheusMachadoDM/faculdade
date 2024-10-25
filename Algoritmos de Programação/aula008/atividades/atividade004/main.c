#include <stdio.h>
#include <locale.h>
#include <string.h>

/*4. Escreva um programa que receba a string = "Hello, World!" e a apresente invertida.*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int i;
	char str[] = "Hello, World!";
	
	for(i = 13; i >= 0; i--){
		printf("%c" ,str[i]);
	}
	
	
	return 0;
}
