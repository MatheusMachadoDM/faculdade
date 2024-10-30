#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Escreva um programa que simule contas banc�rias com as seguintes especifica��es:
- Ao iniciar o programa dever� ser criado uma estrutura para as contas banc�rias contendo o
n�mero da conta, o nome do titular da conta e o saldo.

- Devem ser cadastrados 3 clientes diretamente no programa, com saldo inicial de 0.

- Crie um menu para o programa com as seguintes op��es:

	[1] Listagem de clientes
	[2] Dep�sito
	[3] Saque
	[4] Fim
	
- Para cada dep�sito ou saque realizado, dever� ser mostrado o nome do titular e o saldo
atualizado. O programa n�o deve permitir saques com valores superiores ao saldo atual do
cliente.
	*/

struct Contas{
	int numeroConta;
	char nome[41];
	float saldo;
};

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	struct Contas contaBancaria[3] = {{1234, "Maria Tereza", 0}, {2345, "Jose Antonio", 0}, {3456, "Joao Gomes", 0}};
	int opcao, i;
	
	while(opcao != 4){
		printf("[1] Listagem de clientes\n[2] Dep�sito\n[3] Saque\n[4] Fim");
		scanf("%d", &opcao);
		
		switch(opcao){
			
			case 1: for(i = 0; i < 3; i++){
					printf("Cliente %s, Conta %d, Saldo %f\n", contaBancaria[i].nome, contaBancaria[i].numeroConta, contaBancaria[i].saldo);
					opcao = 4;
				}
				break;
			}
		
	}
	
	return 0;
}
