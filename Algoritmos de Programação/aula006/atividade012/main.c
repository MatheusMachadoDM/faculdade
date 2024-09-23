#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*12.Escreva um programa que alimente um vetor G de 6 elementos contendo o gabarito da Mega-Sena e
um vetor A de 10 elementos contendo uma aposta. A seguir, mostre na tela quantos pontos fez o
apostador.*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int g[6] = {10, 20, 30, 40, 50, 60}, a[10], i[2], pontos = 0;
	
	for(i[0] = 0; i[0] < 10; i[0]++){
		
		printf("Digite o número %d:\n", i[0] + 1);
		scanf("%d", &a[i[0]]);
		
		while(a[i[0]] == a[i[0] - 1]){
			printf("Digite um número diferente do anterior: \n");
		scanf("%d", &a[i[0]]);
		}
	}
	
	for(i[0] = 0; i[0] < 10; i[0]++){
		
		for(i[1] = 0; i[1] < 6; i[1]++){
			
			if(pontos != 6){
				if(a[i[0]] == g[i[1]]){
					pontos += 1;
				}	
			}	
		}
	}
	printf("Você fez %d pontos!\n", pontos);
	return 0;
}
