#include <stdio.h>
#include <locale.h>
#include <string.h>


/*5. Escreva um programa que verifique se duas strings s�o iguais.*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	char str1[47], str2[47];
	
	printf("Digite uma palavra: ");
	scanf(" %46[^\n]", str1);
	
	printf("Digite outra palavra: ");
	scanf(" %46[^\n]", str2);
	
	if(strcmp(str1, str2) == 0){
		printf("A palavras s�o iguais!");
	}else{
		printf("A palavras s�o diferentes!");
	}
	
	return 0;
}
