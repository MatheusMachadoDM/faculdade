#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

/*4. Crie uma estrutura com o código e a quantidade em estoque de 5 produtos. Em seguida, leia um
pedido composto por um código de produto e quantidade. Se houver quantidade suficiente para
atender ao pedido integralmente, atualize a quantidade em estoque do produto e apresente a
mensagem "Estoque atualizado", caso contrário, apresente a mensagem "Quantidade insuficiente em
estoque".*/

struct Produto{
	int codigo, quantidade;
};

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	struct Produto produto[5] = {{123, 10}, {321, 5}, {213, 20}, {312, 15}, {132, 20}};
	int codigo, quantidade, i, quantidadeAtualizada;
	bool estoque;
	
	printf("Digite o codigo do produto que deseja atualizar: ");
	scanf("%d", &codigo);
	
	printf("Digite a quantidade que deseja retirar do estoque: ");
	scanf("%d", &quantidade);
	
	for(i = 0; i < 5; i++){
		if(codigo == produto[i].codigo){
			if(quantidade <= produto[i].quantidade){
				produto[i].quantidade -= quantidade;
				estoque = true;
				quantidadeAtualizada = produto[i].quantidade;
				i = 5;
			}
		}else{
			estoque = false;
		}
	}
	
	if(estoque == true){
		printf("Estoque atualizado! Quantidade em estoque após atualização: %d", quantidadeAtualizada);
	}else{
		printf("Quantidade insuficiente em estoque!");
	}
	return 0;
}
