public class tiposPrimitivos{
    public static void main(String[] args) {
        //Tipos inteiros
        byte valorByte = 127; //Máximo para byte
        short valorShort = 32000;
        int valorInt = 2147483647; //Máximo para int
        long valorLong = 9223372036854775807L; //Precisa do L no final

        //Tipos de ponto flutuante
        float valorFloat = 3.14f; //Precisa de f no final
        double valorDouble = 3.1415926535; //Maior precisão

        //Tipo caractere
        char valorChar = 'A'; //Guarda um caracter

        //Tipo booleano
        boolean valorBooleano = true;

        //Exibindo valores no console
        System.out.println("=== Demonstração de Tipos Primitivos ===");
        System.out.println("Byte: " + valorByte);
        System.out.println("Short: " + valorShort);
        System.out.println("Int: " + valorInt);
        System.out.println("long: " + valorLong);
        System.out.println("Float: " + valorFloat);
        System.out.println("Double: " + valorDouble);
        System.out.println("Char: " + valorChar);
        System.out.println("Boolean" + valorBooleano);
    }
}