/*3) Criar uma classe Carro onde o usuário pode 
 * ligar, desligar e acelerar o carro.
 * 
Requisitos:

Criar a classe Carro com os atributos:

String modelo
boolean ligado (inicia como false)
int velocidade (inicia em 0)
Criar métodos para:

ligar() → Define ligado = true
desligar() → Define ligado = false, mas só se a velocidade for 0
acelerar() → Aumenta a velocidade somente se o carro estiver ligado
No main(), permitir que o usuário ligue o carro e acelere.

Exemplo de Entrada e Saída:

Modelo do carro: Ferrari

O carro foi ligado!

Acelerando... Velocidade atual: 20 km/h

Acelerando... Velocidade atual: 40 km/h

O carro foi desligado!*/

package ex003;

import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		Carro carro1 = new Carro();
		
		int comando = 0;
		
		System.out.print("Digite o modelo do carro: ");
		carro1.setModelo(scanner.nextLine());
		
		while(comando != 5) {
			System.out.print("Digite 1 para ligar o carro, 2 para desligar, 3 para acelerar, 4 para acelerar e 5 para parar o programa: \n");
			comando = scanner.nextInt();
			
			switch(comando) {
				case 1: Carro.ligar(carro1);
				break;
				
				case 2: Carro.desligar(carro1);
				break;
				
				case 3: Carro.acelerar(carro1);
				break;
				
				case 4: Carro.freiar(carro1);
				break;
				
				case 5: System.exit(1);
			}
		}
		
		scanner.close();
		
	}
	
	
}
