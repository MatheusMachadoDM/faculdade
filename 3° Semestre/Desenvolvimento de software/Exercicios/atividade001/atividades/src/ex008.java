/*8. Crie um método chamado contarVogais(String palavra) que recebe uma palavra e retorna a quantidade de vogais (a, e, i, o, u) nela.

Exemplo de Entrada:

Digite uma palavra: programacao

Saída Esperada:
A palavra contém 5 vogais. */

import java.util.Scanner;

public class ex008 {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Digite uma palavra: ");
    	String palavra = scanner.next();
    	
    	int quantidadeVogais = contarVogais(palavra);
    	
    	System.out.println("A palavra contém " + quantidadeVogais + " vogais");
    	
        

    }
    public static int contarVogais(String palavra){
    	
    	int contadorVogal = 0;
    	
        for(int i = 0; i < palavra.length(); i ++) {
        	char letra = palavra.charAt(i);
        	
        	if(letra == 'a' || letra == 'A' || letra == 'e' || letra == 'E' 
			|| letra == 'i' || letra == 'I' || letra == 'o' || letra == 'O' 
			|| letra == 'u' || letra == 'U') {
        		contadorVogal += 1;
        	}
        }
        
    	return contadorVogal;
    }
}
