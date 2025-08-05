/*4. Crie um programa que leia 5 notas de um aluno, calcule a média e exiba se o aluno foi Aprovado (>=7.0) ou Reprovado (<7.0).

Saída Esperada:

Média: 7.24
Situação: Aprovado*/

import java.util.Scanner;

public class ex004{
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);

        int vetor[] = new int[5];
        double media = 0;
        
        for(int i = 0; i < 5; i++) {
        	System.out.print("Digite a nota do " + (i + 1) + "° aluno: ");
        	vetor[i] = scanner.nextInt();
        	
        	media += vetor[i];
        }
        
        media = media / 5;
        System.out.println("\nMédia: " + media);
        
        if(media >= 7) {
        	System.out.println("Situação: Aprovado!");
        }else {
        	System.out.println("Situação: Reprovado!");
        }
        
	}
}