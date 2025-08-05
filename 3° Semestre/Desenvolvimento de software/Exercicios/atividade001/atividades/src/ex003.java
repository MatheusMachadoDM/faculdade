/*3. Peça ao usuário para digitar 10 números inteiros e armazene-os em uma ArrayList. Em seguida, exiba o maior e o menor número digitado.

Saída Esperada:

Maior número: 45
Menor número: 3*/
import java.util.Scanner;

public class ex003{
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);

        int vetor[] = new int[10];
        int maior = 0, menor = 0;
        
        for(int i = 0; i < 10; i++){
            System.out.print("Digite o " + (i + 1) + "° número: ");
            vetor[i] = scanner.nextInt();
            
            if(i != 0) {
            	if(vetor[i] > maior) {
            		maior = vetor[i];
            	}else if(vetor[i] < menor) {
            		menor = vetor[i];
            	}
            }else {
            	maior = vetor[i];
            	menor = vetor[i];
            }
        }
        
        System.out.println("Maior valor: " + maior + "\nMenor valor: " + menor);
	}
}