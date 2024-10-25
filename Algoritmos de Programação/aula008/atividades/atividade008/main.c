#include <stdio.h>
#include <locale.h>
#include <string.h>

/*8. Escreva um programa para contar a quantidade de vogais em uma string.*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	char str[47], vogais[5] = {'a','e','i','o','u'};
	int i, j, quantidade, contador = 0;
	
	printf("Digite uma palavra: ");
	scanf(" %46[^\n]", str);
	
	quantidade = strlen(str);
	
	for(i = 0; i < quantidade; i++){
		for(j = 0; j < 5; j++){
			if(str[i] == vogais[j]){
				contador += 1;
			}
		}
	}
	
	printf("Na palavra %s existem %d vogais", str, contador); 
	return 0;
}
