#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*17.A definição de "amplitude" em Estatística é dada pela grandeza numérica resultante da diferença entre
o maior valor e o menor valor do conjunto de valores de uma amostra. Escreva programa que leia uma
sequencia de números reais positivos terminada em zero (o número zero não deve ser processado
pois serve para marcar o final da entrada de dados). O programa deve determinar e mostrar o valor da
amplitude estatística dos valores. Exemplo: para a sequencia 4.5, 5.2, 1.7, 1.3, 1.9, 2.2, 8.3, 9.1, 5.4 e 0,
teremos o resultado de 7.8 como amplitude.*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int contador;
	float n1 = 1, menor, maior, calculo;
	
	printf("Digite um número real para calcularmos o valor da amplitude estatística dos valores: (Quando quiser para a conta digite '0') ");
	scanf("%f", &n1);
	
	menor = n1;
	maior = n1;
	
	while(n1 != 0){
		printf("Digite outro número real para adionarmos ao cálculo: ");
		scanf("%f", &n1);
		
		if(n1 == 0){
			printf("Fim da aplicação!");
		}else if(n1 > maior){
			maior = n1;
		}else if(n1 < menor){
			menor = n1;	
		}
			
	}
	calculo = maior - menor;
	
	printf("Resultado: %.1f", calculo);
	return 0;
}
