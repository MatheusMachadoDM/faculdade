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
