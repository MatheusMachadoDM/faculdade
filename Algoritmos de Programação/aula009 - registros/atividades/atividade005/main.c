#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

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
	int opcao, i, numeroConta, identificador;
	float saldo;
	bool contaValida;
	
	while(opcao != 4){
		printf("[1] Listagem de clientes\n[2] Dep�sito\n[3] Saque\n[4] Fim\n");
		scanf("%d", &opcao);
		
		switch(opcao){
			
			case 1: 
				for(i = 0; i < 3; i++){
					printf("Cliente %s, Conta %d, Saldo %.2f\n", contaBancaria[i].nome, contaBancaria[i].numeroConta, contaBancaria[i].saldo);
				
					if(i == 2){
						printf("\n[0] Voltar\n[4] Fim\n");
						scanf("%d", &opcao);
					}
				}
				break;
			
			case 2: 
				printf("Digite o n�mero da conta em que quer depositar: \n");
				scanf("%d", &numeroConta);
				
				for(i = 0; i < 3; i++){
					if(numeroConta == contaBancaria[i].numeroConta){
						contaValida = true;
						identificador = i;
						i = 4;
					}else{
						contaValida = false;
					}
				}
				if(contaValida == true){
					printf("Conta encontrada, cliente %s\nDigite o valor que deseja depositar: EX:50,50\n", contaBancaria[identificador].nome);
					scanf("%f", &saldo);
					
					contaBancaria[identificador].saldo += saldo;
					
					printf("Deposito realizado! Valor total: %.2f", contaBancaria[identificador].saldo);
					printf("\n[0] Voltar\n[4] Fim\n");
					scanf("%d", &opcao);
					
				}else{
					printf("Conta inv�lida, volte e tente novamente!\n");
					opcao = 0;
				}
			break;
			
			case 3:
				printf("Digite o n�mero da conta que deseja sacar:\n");
				scanf("%d", &numeroConta);
				
				for(i = 0; i < 3; i++){
					if(numeroConta == contaBancaria[i].numeroConta){
						contaValida = true;
						identificador = i;
						i = 4;
					}else{
						contaValida = false;
					}
				}
				if(contaValida == true){
					printf("Conta encontrada, cliente %s\nDigite o valor que deseja sacar: EX:50,50\n", contaBancaria[identificador].nome);
					scanf("%f", &saldo);
					
					if(saldo > contaBancaria[identificador].saldo){
						printf("Valor inv�lido, verifique seu saldo e tente novamente!\n");
						opcao = 0;
					}else{
						contaBancaria[identificador].saldo -= saldo;
					
						printf("Saque Realizado! Valor total: %.2f", contaBancaria[identificador].saldo);
						printf("\n[0] Voltar\n[4] Fim\n");
						scanf("%d", &opcao);
					}
				}else{
					printf("Conta inv�lida, volte e tente novamente!\n");
					opcao = 0;
				}
			break;
			default:
				printf("Op��o inv�lida, tente novamente:\n");
				opcao = 0;
		}
		
	}
	
	return 0;
}
