package LeituraDeDados.src;
import java.util.Scanner;

public class LeituraDeDados{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Digite um número inteiro: ");
        int inteiro = scanner.nextInt();

        System.out.print("Digite um número decimal: ");
        double decimal = scanner.nextDouble();

        //Le apenas uma palavra
        System.out.print("Digite uma palavra: ");
        String palavra = scanner.next();

        scanner.nextLine();//Limpeza de memória 

        //Le a frase inteira
        System.out.print("Digite uma frase: ");
        String frase = scanner.nextLine();

        System.out.println("O número inteiro é " + inteiro);
        System.out.println("O número decimal é " + decimal);
        System.out.println("A palavra é " + palavra);
        System.out.println("A frase é " + frase);

        scanner.close();
    }
}


