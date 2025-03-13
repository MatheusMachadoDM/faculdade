/*1. Crie um programa que receba 5 números inteiros do usuário, 
armazene em um vetor e exiba a soma de todos os valores.*/
import java.util.Scanner;

public class ex001 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int vetor[] = new int[5];
        int soma = 0;

        for(int i = 0; i < 5; i++){
            System.out.print("Digite o " + (i+1) + "° número: ");
            vetor[i] = scanner.nextInt();
            soma += vetor[i];
        }
        System.out.println("A soma dos números digitados é " + soma);
        
    }
}
