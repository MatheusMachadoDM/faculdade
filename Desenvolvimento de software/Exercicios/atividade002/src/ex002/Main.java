/*2) Criar uma classe Aluno para armazenar nome, nota 1 e nota 2. 
 * O programa deve calcular a média do aluno e informar 
 * se ele foi aprovado ou reprovado (nota mínima 7.0).



Exemplo de Entrada:

Digite o nome do aluno: Maria

Digite a primeira nota: 8.5

Digite a segunda nota: 6.0



Exemplo de Saída:

Aluno: Maria

Média: 7.25

Status: Aprovado*/

package ex002;

import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		Aluno aluno1 = new Aluno();
		
		System.out.print("Digite o nome do aluno: ");
		aluno1.setNome(scanner.nextLine());
		
		System.out.println("Digite a primeira nota: ");
		aluno1.setN1(scanner.nextFloat());
		
		System.out.println("Digite a segunda nota: ");
		aluno1.setN2(scanner.nextFloat());
		
		System.out.println("Aluno: " + aluno1.getNome());
		
		float media = (aluno1.getN1() + aluno1.getN2()) / 2;
		System.out.println("Média: " + media);
		
		
		if(media >= 7) {
			System.out.println("Status: Aprovado!");
		}else {
			System.out.println("Status: Reprovado!");
		}
		
		scanner.close();
	}
}
