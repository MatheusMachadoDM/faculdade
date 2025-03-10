import java.util.Scanner;

public class OperadoresLogicos {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Digite true or false para A: ");
        boolean a = scanner.nextBoolean();

        System.out.print("Digite true or false para B: ");
        boolean b = scanner.nextBoolean();

        boolean and = a && b;
        boolean or = a || b;
        boolean notA = !a;
        boolean notB = !b;

        System.out.println("\n=== Resultados ===");
        System.out.println("A and B = " + and);
        System.out.println("A or B = " + or);
        System.out.println("not A = " + notA);
        System.out.println("not B = " + notB);

        scanner.close();
    }
}
