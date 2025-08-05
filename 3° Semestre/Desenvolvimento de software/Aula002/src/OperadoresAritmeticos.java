import java.util.Scanner;

public class OperadoresAritmeticos {
    @SuppressWarnings("ConvertToTryWithResources")
    public static void main(String[] args) {
        //Criando o Scanner para entrada
        Scanner scanner = new Scanner(System.in);

        //Solicita ao usuário dois números
        System.out.print("Digite o pimreiro número: ");
        double num1 = scanner.nextDouble();

        System.out.print("Digite o segundo número: ");
        double num2 = scanner.nextDouble();

        //Realizando operações aritméticas
        double soma = num1 + num2;
        double subtracao = num1 - num2;
        double multiplicacao = num1 * num2;
        double divisao = num1 / num2;
        double modulo = num1 % num2;
        double potencia = Math.pow(num1, num2);
        double raiz = Math.sqrt(num1);

        //Exibindo os resultados
        System.out.println("Soma: " + soma);
        System.out.println("Subtração: " + subtracao);
        System.out.println("Multiplicação: " + multiplicacao);
        System.out.println("Divisão: " + divisao);
        System.out.println("Módulo: " + modulo);
        System.out.println("Potência: " + potencia);
        System.out.println("Raiz Quadrada: " + raiz);

        scanner.close();

    }   
}
