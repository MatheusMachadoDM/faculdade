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
		
		aluno1.setNome(pegarNome(scanner));
		aluno1.setN1(pegarNota(scanner, "primeira"));
		aluno1.setN2(pegarNota(scanner, "segunda"));
		
		mostrarDados(aluno1);
		
	}
	public static String pegarNome(Scanner scanner) {
		String nome;
		
		System.out.print("Digite o nome do aluno: ");
		nome = scanner.nextLine();
		
		return nome;
	}
	public static float pegarNota(Scanner scanner, String notaOrdinal) {
		float nota;
		System.out.print("Digite a " + notaOrdinal + " nota: ");
		nota = scanner.nextFloat();
		
		return nota;
	}
	public static void mostrarDados(Aluno aluno) {
		System.out.println("\nAluno: " + aluno.getNome());
		System.out.println("Média: " + aluno.media());
		
		if(aluno.media() >= 7) {
			System.out.println("Status: Aprovado!\n");
		}else {
			System.out.println("Status: Reprovado!\n");
		}
		
	}
}
