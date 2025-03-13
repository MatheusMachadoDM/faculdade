/* Crie um jogo onde o computador gera um número aleatório de 1 a 100, e o usuário precisa adivinhar o número. 
 * O programa dá dicas ("Maior" ou "Menor") até o usuário acertar.

Exemplo:

Digite seu palpite: 50

Muito alto! Tente um número menor.

Digite seu palpite: 25

Muito baixo! Tente um número maior.

Digite seu palpite: 32

Parabéns! Você acertou!*/

import java.util.Scanner;
import java.util.Random;

public class ex009 {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        Random random = new Random();
        
        int aleatorio = random.nextInt(5) +1, numero;
        
        do {
        	System.out.print("Digite seu palpite: ");
            numero = scanner.nextInt();
            
	            if(aleatorio > numero) {
	            	System.out.println("Muito baixo! Tente um número maior.");
	            }else if(aleatorio < numero) {
	            	System.out.println("Muito alto! Tente um número menor.");
	            }else {
	            	System.out.println("Parabéns! Você acertou!");
	            }
        }while(numero != aleatorio);

        

        
    }
   
}
	