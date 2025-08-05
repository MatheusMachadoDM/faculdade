#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*14.Escreva um algoritmo que mostre o resultado dos primeiros 50 termos da série: 1000/1 - 997/2 + 994/3
- 991/4 + ... Resultado: 685.30*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int contador;
	float n1 = 1000, n2 = 1, divisao = 0;
	
	for(contador = 1; contador <= 50; contador ++){
		
		if(contador != 1){
			n1 -=  3;
			n2 ++;
		}else{
			printf("%.0f / %.0f -\n", n1, n2);
			
			divisao = n1 / n2;
		}
		if(contador % 2 == 1 && contador != 1){
            printf("%.0f / %.0f -\n", n1, n2);
            
            divisao = divisao + n1 / n2;
            
        }else if(contador % 2 == 0 && contador != 1){
            
			if(contador != 50){
				printf("%.0f / %.0f +\n", n1, n2);
            
            	divisao = divisao - n1 / n2;
			}else{
				printf("%.0f / %.0f = ", n1, n2);
            
            	divisao = divisao - n1 / n2;
            	
            	printf("%.2f", divisao);
			}
        }
	}
	
	
	return 0;
}
