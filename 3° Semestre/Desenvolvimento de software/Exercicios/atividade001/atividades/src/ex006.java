/*6. Crie um método chamado exibirTabuada(int numero) que recebe um número como parâmetro e exibe sua tabuada de 1 a 10.

Saída Esperada:

Tabuada de 7:

7 x 1 = 7

7 x 2 = 14

...

7 x 10 = 70*/
import java.util.Scanner;

public class ex006{
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
	
		
		System.out.println("Digite um número: ");
		int numero = scanner.nextInt();
		
		int tabuada[] = exibirTabuada(numero);
		
		
	}
	public static int[] exibirTabuada(int numero) {
		
		int tabuada[] = new int[10];
		
		for(int i = 0; i < 10; i++) {
			tabuada[i] = numero * (i + 1);
		}
		
		System.out.println("Tabuada de " + numero + ": \n");
		
		for(int i = 0; i < 10; i++) {
			System.out.println(numero + " x " + (i + 1) + " = " + tabuada[i]);
		}
		
		return tabuada;
		
	}
}