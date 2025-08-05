package biblioteca;

import java.util.HashMap;
import java.util.Map;
import java.util.HashSet;
import java.util.Set;
import java.util.Scanner;


class LivroIndisponivelException extends Exception {
    public LivroIndisponivelException(String mensagem) {
        super(mensagem);
    }
}


class LivroDuplicadoException extends Exception {
    public LivroDuplicadoException(String mensagem) {
        super(mensagem);
    }
}

public class Main {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		Map<String, Livro> livros = new HashMap<>();
		Set<String> isbnCadastrado = new HashSet<>();
		
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
             		
             		try {
             		    if (isbnCadastrado.contains(ISBN)) {
             		        throw new LivroDuplicadoException("ISBN já cadastrado, tente novamente.");
             		    } else {
             		        Livro livro = new Livro(titulo, autor, ISBN, true);
             		        livros.put(ISBN, livro);
             		        isbnCadastrado.add(ISBN);
             		        System.out.println("Livro cadastrado!");
             		    }
             		} catch (LivroDuplicadoException e) {
             		    System.out.println("Erro: " + e.getMessage());
             		}

     		break;
     		
            case 2: System.out.print("Digite o ISBN do livro que deseja emprestar: ");
		            String isbnParaEmprestimo = scanner.nextLine();
		
		            try {
		                if (livros.containsKey(isbnParaEmprestimo)) {
		                    Livro livro = livros.get(isbnParaEmprestimo);
		                    livro.emprestar(); 
		                } else {
		                    System.out.println("Livro não encontrado!");
		                }
		            } catch (LivroIndisponivelException e) {
		                System.out.println("Erro: " + e.getMessage());
		            }
		            break;

	            
            case 3: System.out.print("Digite o ISBN do livro que deseja devolver: ");
            		String isbnDevolver = scanner.nextLine();
            		
            		if(livros.containsKey(isbnDevolver)) {
            			Livro livro = livros.get(isbnDevolver);
            			livro.devolver();
            		}else {
            			System.out.println("Livro não encontrado!");
            		}
            		break;
            		
            case 4:  if (livros.isEmpty()) {
	                System.out.println("Nenhum livro cadastrado.");
            		}else {
            			System.out.println("\n--- Lista de Livros ---\n");
	                	for (Livro livro : livros.values()) {
		                    System.out.println("Título: " + livro.getTitulo());
		                    System.out.println("Autor: " + livro.getAutor());
		                    System.out.println("ISBN: " + livro.getISBN());
		                    System.out.println("Disponibilidade: " + (livro.isDisponibilidade() ? "Disponível" : "Emprestado"));
		                    System.out.println("------------------------");
	                	}
            		}
            		break;
            case 5: System.out.println("Programa finalizado!");
            		break;
            	
     		default: System.out.println("Opção Inválida!");
            }
            

        } while (opcao != 5);

        scanner.close();
	}
}
