/*1)Criar uma classe Produto que tenha nome, preço e quantidade. 
 * O programa deve permitir que o usuário cadastre um produto e 
 * exiba as informações na tela.

Exemplo de Entrada:

Digite o nome do produto: Teclado Mecânico

Digite o preço do produto: 299.99

Digite a quantidade em estoque: 10



Exemplo de Saída:

Produto: Teclado Mecânico

Preço: R$299.99

Quantidade: 10 unidades*/

package ex001;

import java.util.Scanner;

public class Main {
	
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		Produto produto1 = new Produto();
		
		System.out.print("Digite o nome do produto: ");
		produto1.setNome(scanner.nextLine());
		
		System.out.print("Digite o preço do produto: ");
		produto1.setPreco(scanner.nextFloat());
		
		System.out.print("Digite a quantidade do produto: ");
		produto1.setQuantidade(scanner.nextInt());
		
		System.out.println("\nProduto: " + produto1.getNome());
		System.out.println("Preço: " + produto1.getPreco());
		System.out.println("Quantidade: " + produto1.getQuantidade());
	}
	
}
