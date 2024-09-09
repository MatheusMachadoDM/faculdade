#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*10.Escreva um algoritmo que calcule o fatorial de um número positivo qualquer. Por exemplo, se o
número for 5, o resultado será 120 (5 * 4 * 3 * 2 * 1 = 120). É importante obsevar que o fatorial do
número 0 é igual a 1.*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int num, contador;
	long long int conta = 1; // faz com que a variavel possa armazenar valores maiores
	
	
	printf("Digite um número para calcularmos seu fatorial: ");
	scanf("%d", &num);
	
	if(num == 0){
		printf("Fatorial de %d é: 1", num, system("color 02"));
	}else if(num < 0){
		printf("Só podemos calcular o fatorial de números positivos!", system("color 04"));
	}
	else if(num >= 24){
		printf("Números maiores que 23 não são exibidos corretamente por conta das capacidades da linguagem e compilador!", system("color 04"));
	}else{
		for(contador = 1; contador <= num; contador++){
			
			if(contador == num){
				printf("%d = ", contador);
			}else{
				printf("%d * ", contador);
			}
			conta = conta * contador;
		}
		printf("%lld", conta, system("color 02"));
	}
	
	return 0;
}
