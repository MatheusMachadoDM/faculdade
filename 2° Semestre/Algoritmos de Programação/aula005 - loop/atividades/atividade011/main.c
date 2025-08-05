#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*11. Escreva um algoritmo que escreva os 10 primeiros termos da série 1, 3, 9, 27, ...*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int contador, somaGeo = 1;
	
	for(contador = 1; contador <= 10; contador ++){
		//printf("%d ", contador);
		if(contador == 1){
			somaGeo = 1;
		}else{
			somaGeo = somaGeo * 3;
		}
		
		printf("%d ", somaGeo);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	/*for(contador = 1; contador <= 19683; contador = contador * 3){
		printf("%d ", contador);
		
		
	}*/
	
	return 0;
}
