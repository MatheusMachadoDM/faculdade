#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*20. Escreva um algoritmo que verifique a validade de uma senha fornecida pelo usuário (a senha válida é
o número 2009). Se a senha informada pelo usuário for inválida, a mensagem "ACESSO NEGADO" deve
ser mostrado na tela e deve ser solicitada uma nova senha até que ela seja válida. Caso contrário deve
ser mostrado na tela a mensagem "ACESSO PERMITIDO" junto com um número de vezes que a senha
foi informada.*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int senha, contador = 0;
	
	printf("Digite a sua senha: ");
	scanf("%d", &senha);

	while(senha != 2009){
		printf("ACESSO NEGADO!!!\n Tente novamente: "), system("color 04");
		scanf("%d", &senha);
		
		contador = contador + 1;
	}
	printf("ACESSO PERMITIDO!\n Número de vezes que você digitou a senha incorreta: %d", contador, system("color 02"));
	
	

	return 0;
}
