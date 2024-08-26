#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	setlocale(LC_ALL,"portuguese");
	
	float media;
	
	printf("Digite a sua média: ");
	scanf("%f", &media);
	
	if(media >= 0 && media <= 10){
		if(media >= 6){
			system("color 02");
			printf("Aprovado!");
			
			if(media > 8){
				printf("\nConceito A");
			}else{
				printf("\nConceito B");
			}
		}else{
			
			if(media >= 4){
				system("color 06");
				printf("Recuperação!");
				printf("\nConceito C");
			}else{
				system("color 04");
				printf("Reprovado!");
				
				if(media >= 2){
					printf("\nConceito D");
				}else{
					printf("\nConceito E");
				}
			}
		}
	}else{
		printf("Nota inválida!");
	}
	return 0;
}
