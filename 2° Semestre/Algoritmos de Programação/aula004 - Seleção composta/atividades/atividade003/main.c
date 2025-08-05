#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*3. Escreva um algoritmo que leia um número inteiro e apresente o seu valor absoluto*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	
	int numero, valor_absoluto;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero >= 0) {
        printf("Valor absoluto desse número: %d", numero);
    } else {
        printf("Valor absoluto desse número: %d", numero - numero * 2);
    }

	return 0;
}
