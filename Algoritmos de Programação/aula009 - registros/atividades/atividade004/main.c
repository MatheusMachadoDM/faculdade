#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

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
	
	struct Produto produto[3] = {{123, 10}, {321, 5}, {213, 20}};
	int codigo, quantidade, i;
	
	printf("Digite o codigo do produto que deseja atualizar: ");
	scanf("%d", &codigo);
	
	printf("Digite a quantidade que deseja retirar do estoque: ");
	scanf("%d", &quantidade);
	
	for(i = 0; i < 3; i++){
		if(codigo == produto[i].codigo){
			printf("Codigo correto");
			return 0;
		}else{
			printf("Codigo incorreto");
		}
	}
	
	return 0;
}
