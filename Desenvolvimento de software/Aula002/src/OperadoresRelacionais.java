import java.util.Scanner;

public class OperadoresRelacionais {
    @SuppressWarnings("ConvertToTryWithResources")
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Digite o primeiro número: ");
        int num1 = scanner.nextInt();

        System.out.print("Digite o segundo número: ");
        int num2 = scanner.nextInt();

        System.out.println(num1 + "==" + num2 + "->" + (num1 == num2));
        System.out.println(num1 + "!=" + num2 + "->" + (num1 != num2));
        System.out.println(num1 + ">" + num2 + "->" + (num1 > num2));
        System.out.println(num1 + "<" + num2 + "->" + (num1 < num2));
        System.out.println(num1 + ">=" + num2 + "->" + (num1 <= num2));
        System.out.println(num1 + "<=" + num2 + "->" + (num1 >= num2));
        
        scanner.close();
    }
}
