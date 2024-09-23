#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*11.Tentando descobrir se um dado era viciado, um dono de cassino honesto (risos) o lançou 15 vezes.
Escreva um programa que dados os resultados dos lançamentos, armazene em um vetor o número de
ocorrências de cada face. Apresente o resultado na tela.*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int quantidade[15], i, face[6] = {0};
	
	for(i=0;i<15;i++){

		printf("Qual o resultado do %d° lançamento? \n", i + 1);
		scanf("%d", &quantidade[i]);
		
		switch(quantidade[i]){
			case 1: face[0] += 1;
			break;
			
			case 2: face[1] += 1;
			break;
			
			case 3: face[2] += 1;
			break;
			
			case 4: face[3] += 1;
			break;
			
			case 5: face[4] += 1;
			break;
			
			case 6: face[5] += 1;
			break;
		}

	}
	
	for(i=0;i<6;i++){
		printf("O resultado %d caiu %d vezes!\n", i+1, face[i]);
	}
	
	return 0;
}
