/*10. Crie um jogo onde o usuário escolhe "par" ou "ímpar", digita um número e o computador gera um número aleatório entre 1 e 10. 
 * O programa soma os números e informa quem venceu.

Exemplo de Entrada:

Escolha (par ou ímpar): par

Digite um número: 4

Saída Esperada:

Computador escolheu: 5

Soma: 9 → Ímpar

Você perdeu!*/

import java.util.Scanner;
import java.util.Random;

public class ex010 {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        Random random = new Random();

        int imparPar = 0, numero, soma, aleatorio = random.nextInt(10) + 1;
        
        do {
        	System.out.println("Digite '1' para ímpar e '2' para par: ");
            imparPar = scanner.nextInt();
        }while(imparPar != 1 && imparPar != 2);
        
        System.out.println("Agora digite um número: ");
        numero = scanner.nextInt();
        
        soma = numero + aleatorio;

        System.out.println("Computador escolheu " + aleatorio);
        
        if(imparPar == 1) {
        	System.out.println("Soma: " + soma + " -> Ímpar");
        	if(soma % 2 == 0) {
        		 System.out.println("Você perdeu!");
             }else {
            	 System.out.println("Você ganhou!");
             }
        }else {
        	System.out.println("Soma: " + soma + " -> Par");
        	if(soma % 2 == 1) {
       		 System.out.println("Você perdeu!");
            }else {
           	 System.out.println("Você ganhou!");
            }
        }
    	
    }
   
}
	