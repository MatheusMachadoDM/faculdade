package View;

import Model.*;
import Controller.*;

import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		HotelController controller = new HotelController();
		int opcao;
		
		do {
			System.out.println("\n--- Menu do Hotel ---");
            System.out.println("1. Cadastrar hóspede");
            System.out.println("2. Listar hóspedes");
            System.out.println("3. Atualizar hóspede");
            System.out.println("4. Deletar hóspedes");
            System.out.println("5. Criar reserva");
            System.out.println("6. Listar reservas");
            System.out.println("7. Atualizar reserva");
            System.out.println("8. Deletar reserva");
            System.out.println("0. Sair");
            System.out.print("Escolha: ");
            opcao = scanner.nextInt();
            scanner.nextLine(); // Limpar buffer
            
            switch(opcao) {
            	case 1: System.out.print("Nome: ");
    					String nome = scanner.nextLine();
    					
    					System.out.print("CPF: ");
    					String cpf = scanner.nextLine();
    					
    					System.out.print("Telefone: ");
    					String telefone = scanner.nextLine();
    					
    					controller.adicionarHospede(new Hospede(nome, cpf, telefone));
    			break;
    			
            	case 2: controller.listarHospede().forEach(System.out::println);
            	break;
            	
            	
            }
		}while(opcao != 0);
		
	}
}
