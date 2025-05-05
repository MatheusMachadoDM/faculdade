package biblioteca;

import java.util.HashMap;
import java.util.Map;
import java.util.HashSet;
import java.util.Set;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		Map<String, Livro> livros = new HashMap<>();
		Set<String> isbnCadastrado = new HashSet<>();
		

		Livro livro1 = new Livro("Senhor", "jose", "123", true);
		
		livros.put(livro1.getISBN(), livro1);
		
		int opcao;

        do {
            System.out.println("\n--- MENU ---");
            System.out.println("1. Cadastrar Livro");
            System.out.println("2. Emprestar Livro (pelo ISBN)");
            System.out.println("3. Devolver Livro (pelo ISBN)");
            System.out.println("4. Listar todos os livros");
            System.out.println("5. Sair");
            System.out.print("Escolha uma opção: ");
            opcao = scanner.nextInt();
            scanner.nextLine(); // limpa o buffer
            
            switch(opcao) {
            
            case 1: System.out.print("Título: ");
            		String titulo = scanner.nextLine();
            		
            		System.out.print("Autor: ");
             		String autor = scanner.nextLine();
             		
             		System.out.print("ISBN: ");
             		String ISBN = scanner.nextLine();
             		
             		if(isbnCadastrado.contains(ISBN)) {
             			System.out.print("ISBN já cadastrado, tente novamnete: ");
             			ISBN = scanner.nextLine();
             		}else {
             			Livro livro = new Livro(titulo, autor, ISBN, true);
             			livros.put(ISBN, livro);
             			isbnCadastrado.add(ISBN);
             			System.out.println("Livro Cadastrado!");
             		}
     		break;
     		
            case 2: System.out.println("Digite o ISBN para embrestar: ");
            		String isbnEmprestar = scanner.nextLine();
            		
            		
            
         		
     		default: System.out.println("Opção Inválida!");
            }
            

        } while (opcao != 5);

        scanner.close();
	}
}
