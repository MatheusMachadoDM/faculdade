package View;

import java.time.LocalDate;
import java.util.List;
import java.util.Scanner;
import java.io.*;
import java.util.InputMismatchException;

import Controller.*;
import Exception.QuartoIndisponivelException;
import Exception.ReservaNaoEncontradaException;
import Model.*;

public class Menu {
	
	private static HotelController controller = new HotelController();
	private static Scanner scanner = new Scanner(System.in);
	
	public static void main(String[] args) {
		int opcao;
		
		 do {
	            System.out.println("\n=== SISTEMA DE RESERVA DE HOTEL ===");
	            System.out.println("1 - Ver quartos disponíveis");
	            System.out.println("2 - Fazer reserva");
	            System.out.println("3 - Listar reservas");
	            System.out.println("4 - Cancelar reserva");
	            System.out.println("0 - Sair");
	            System.out.print("Escolha uma opção: ");
	            opcao = scanner.nextInt();
	            scanner.nextLine(); // limpar buffer
	            
	            switch(opcao) {
	            case 1: listarQuartosDisponiveis();
	            		break;
	            case 2: fazerReserva();
	            		break;
	            case 3: listarReservas();
	            		break;
	            case 4: cancelarReserva();
	            		break;
	            case 0: System.out.println("Encerrando Sistema...");
	            		break;
	            default: System.out.println("Opção inválida.");
	            		break;
	            }
		 } while(opcao != 0); 
	}
	
	private static void listarQuartosDisponiveis() {
		List<Quarto> quartos = controller.getQuartosDisponiveis();
		if(quartos.isEmpty()) {
			System.out.println("Nenhum quarto disponível no momento.");
		} else {
			System.out.println("Quartos disponíveis:");
			for(Quarto q : quartos) {
				System.out.println("Número: " + q.getNumero() + " | Tipo: " + q.getTipo() + " | Preço: R$ " + q.getPrecoPorNoite());
			}
		}
	}
	
	private static void fazerReserva() {
		System.out.print("Nome do cliente: ");
        String nome = scanner.nextLine();
        
        System.out.print("CPF: ");
        String cpf = scanner.nextLine();
        
        System.out.print("Telefone: ");
        String telefone = scanner.nextLine();
        
        System.out.print("Número do quarto desejado: ");
        int numeroQuarto = scanner.nextInt();
        scanner.nextLine();
        
        System.out.print("Data de entrada (AAAA-MM-DD): ");
        LocalDate entrada = LocalDate.parse(scanner.nextLine());
        
        System.out.print("Data de saída (AAAA-MM-DD): ");
        LocalDate saida = LocalDate.parse(scanner.nextLine());
        
        boolean sucesso = controller.reservarQuarto(nome, cpf, telefone, numeroQuarto, entrada, saida);
        if(sucesso) {
        	System.out.println("Reserva feita com sucesso!");
        }else {
        	System.out.println("Não foi possível realizar a reserva (quarto inexistente ou ocupado).");
        }
	}
	
	private static void listarReservas() {
		List<Reserva> reservas = controller.getReservas();
		if(reservas.isEmpty()) {
			 System.out.println("Nenhuma reserva cadastrada.");
		} else {
			for(Reserva r : reservas) {
				System.out.println("Cliente: " + r.getCliente().getNome() + " | CPF: " + r.getCliente().getCpf() +
		                   " | Quarto: " + r.getQuarto().getNumero() + " | Entrada: " + r.getDataEntrada() +
		                   " | Saída: " + r.getDataSaida() + " | Total: R$ " + String.format("%.2f", r.getValorTotal()));
			}
		}
	}
	
	
	private static void cancelarReserva() {
		System.out.print("Informe o CPF da reserva a cancelar: ");
		String cpf = scanner.nextLine();

		try {
			if(!controller.cancelarReservaPorCPF(cpf)) {
				throw new ReservaNaoEncontradaException();
			} else {
				System.out.println("Reserva cancelada com sucesso.");
			}
		} catch(ReservaNaoEncontradaException e) {
			System.out.println(e.getMessage());
		}
	}
}

