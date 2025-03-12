import java.util.ArrayList;
import java.util.List;

public class ExemploLista {
    public static void main(String[] args) {
        //Criando uma lista de nomes
        List<String> nomes = new ArrayList<>();

        //Adicionando elementos na lista
        nomes.add("Ana");
        nomes.add("João");
        nomes.add("Jorge");
        nomes.add("Paulo");

        System.out.println("Lista de nomes: ");

        for(String nome : nomes){
            System.out.println(nome);
        }
        //Removendo um elemento
        nomes.remove("Paulo");

        System.out.println("\nLista após remoção");

        //Lista após remoção
        for(String nome : nomes){
            System.out.println(nome);
        }

        //Verificando se nome está na lista
        if(nomes.contains("Diana")){
            System.out.println("O nome Diana está incluso");
        }

        //Ontendo tamanho da lista
        System.out.println("\nTamanho da lista: " + nomes.size());

    }
}
