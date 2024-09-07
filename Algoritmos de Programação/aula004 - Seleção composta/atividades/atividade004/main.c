#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*4. Tendo como dados de entrada a altura e o gênero de uma pessoa, construa um algoritmo que calcule 
o seu peso ideal, de acordo com as seguintes fórmulas:
Para homens: 72.7 x altura - 58
Para mulheres: 62.1 x altura - 44.7*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	
	float altura;
	char genero;
	
	printf("Qual a sua altura? Ex: 1,62 ");
	scanf("%f", &altura);
	
	getchar(); 
	/*Limpa o buffer de entrada
	
	O usuário digita, por exemplo, 162 e depois pressiona "Enter".
	Isso faz com que o buffer de entrada contenha 162\n.
	scanf("%d", &altura); lê o 162, que é o número inteiro, e atribui o valor à variável altura.
	No entanto, o scanf deixa o caractere de nova linha \n no buffer de entrada, porque ele não faz parte do número que foi lido.
	Quando scanf("%c", &genero); é chamado em seguida, ele lê o próximo caractere no buffer de entrada.
	Como o caractere \n ainda está no buffer de entrada, ele é lido como o valor de genero.
	
	Para resolver podemos colocar o a leitura do gênero antes da altura ou utilizar o getchar para limpar o buffer
	*/
	
	printf("Qual seu gênero? Ex: M para masculino ou F para feminino ");
	scanf("%c", &genero);
	
	switch(genero){
		case 'M': printf("Seu peso ideal é em torno de %f", altura * 72.7 - 58);
		break;
		
		case 'F': printf("Seu peso ideal é em torno de %f", altura * 62.1 - 44.7);
		break;
		
		default: printf("Gênero inválido!"), system("color 04");
	}
	return 0;
}
