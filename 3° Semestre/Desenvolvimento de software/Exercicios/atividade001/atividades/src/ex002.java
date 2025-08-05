/*2. Crie um programa que leia 10 números inteiros e informe quantos são pares.
Saída Esperada:
Quantidade de números pares: 5 */
import java.util.Scanner;

public class ex002 {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);

        int vetor[] = new int[10];
        int contador = 0;
       
        for(int i = 0; i < 10; i++){
            System.out.print("Digite o " + (i + 1) + "° número:");
            vetor[i] = scanner.nextInt();
            
            if(vetor[i] % 2 == 0) {
            	contador += 1;
            }
        }
        System.out.println("Dentre os números que você digitou " + contador + " são pares!");
    }
}