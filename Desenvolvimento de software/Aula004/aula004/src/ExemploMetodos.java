public class ExemploMetodos {
    public static void main(String[] args){
        int resultadoSoma = somar(10, 5);

        double resultadoMulti = multiplicar(4.5, 2); 

        System.out.println("Soma " + resultadoSoma);
        System.out.println("Multiplicação " + resultadoMulti);
    }
//Método para somar dois números inteiros
public static int somar(int a, int b){
    return a + b;
}
public static double multiplicar(double a, double b){
    return a * b;
}
}
