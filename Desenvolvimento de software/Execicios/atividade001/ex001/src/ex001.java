/*1. Crie um programa que receba 5 números inteiros do usuário, 
armazene em um vetor e exiba a soma de todos os valores.*/
import java.util.Scanner;

public class ex001 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int vetor[] = {};

        for(int i = 0; i < 5; i++){
            System.out.println("Digite o " + (i+1) + "° número");
            vetor [i] = scanner.nextInt();
        }
        
    }
}
