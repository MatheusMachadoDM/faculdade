import java.util.ArrayList;
import java.util.List;

public class TiposNaoPrimitivos {
    public static void main(String[] args) {
        //Tipo String
        String texto = "Olá, mundo!";

        //Tipo array
        int[] numeros = {10, 20, 30, 40};

        //Tipo lista
        List<String> listaNomes = new ArrayList<>();
        listaNomes.add("Ana");
        listaNomes.add("Bruno");
        listaNomes.add("Carlos");

        // Exibindo os valores no console
        System.out.println("String: " + texto);

        System.out.print("Array de números: ");
        for(int num: numeros){
            System.out.print(num + " ");
        }
        System.out.println();
        System.out.println("Lista de nomes" + listaNomes);
    }
}
