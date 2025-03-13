/*7. Crie um programa que simula um caixa eletrônico. O usuário informa o valor a ser sacado, e o programa retorna quantas cédulas de cada valor serão fornecidas (100, 50, 20, 10, 5, 2, 1).

Exemplo de Entrada:

Digite o valor do saque: 289

Saída Esperada:

Notas de 100: 2
Notas de 50: 1
Notas de 20: 1
Notas de 10: 1
Notas de 5: 1
Notas de 2: 2*/
import java.util.Scanner;

public class ex007 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Digite o valor do saque: ");
        int valor = scanner.nextInt();

        int[] cedulas = {100, 50, 20, 10, 5, 2, 1};

        for (int i = 0; i < cedulas.length; i++) {
            int cedula = cedulas[i];
            int quantidade = valor / cedula;
            if(quantidade > 0){
                System.out.println("Notas de " + cedula + ": " + quantidade);
            }
            valor = valor % cedula;
        }
        scanner.close();
    }
}
