#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*20. Escreva um algoritmo que verifique a validade de uma senha fornecida pelo usu�rio (a senha v�lida �
o n�mero 2009). Se a senha informada pelo usu�rio for inv�lida, a mensagem "ACESSO NEGADO" deve
ser mostrado na tela e deve ser solicitada uma nova senha at� que ela seja v�lida. Caso contr�rio deve
ser mostrado na tela a mensagem "ACESSO PERMITIDO" junto com um n�mero de vezes que a senha
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
	printf("ACESSO PERMITIDO!\n N�mero de vezes que voc� digitou a senha incorreta: %d", contador, system("color 02"));
	
	

	return 0;
}
