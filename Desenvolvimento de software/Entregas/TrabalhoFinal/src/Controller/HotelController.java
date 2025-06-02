package Controller;

import java.time.LocalDate;
import java.util.ArrayList;
import java.util.List;
import java.io.*;

import Exception.QuartoIndisponivelException;
import Model.*;


public class HotelController {
	private List<Quarto> quartos;
	private List<Reserva> reservas;
	
	public HotelController() {
		this.quartos = new ArrayList<>();
		this.reservas = new ArrayList<>();
		inicializarQuartos();// adiciona alguns quartos padrão
	}
	
	//Cria quartos padrões
	private void inicializarQuartos() {
		quartos.add(new Quarto(101, "Solteiro", 120.0));
		quartos.add(new Quarto(102, "Casal", 200.0));
		quartos.add(new Quarto(103, "Luxo", 300.0));
	}
	
	//Cria uma nova lista cahamada disponiveis que percorre todos os quartos e se NÂO estiver ocupado adiciona na lista e retorna
	public List<Quarto> getQuartosDisponiveis() {
		List<Quarto> disponiveis = new ArrayList<>();
		for(Quarto q : quartos) {
			if(!q.isOcupado()) {
				disponiveis.add(q);
			}
		}
		return disponiveis;
	}
	
	//Busca o quarto pelo numero com buscarQuarto, verifica se existe e se esta livre, cria um cliente e uma reserva, marca o quaro como ocupado e adiciona na lista reservas
	public boolean reservarQuarto(String nome, String cpf, String telefone, int numeroQuarto, LocalDate entrada, LocalDate saida, String arquivo) throws QuartoIndisponivelException {
		Quarto quarto = buscarQuarto(numeroQuarto);
		if(quarto == null || quarto.isOcupado()) {
			throw new QuartoIndisponivelException();
		}
		
		Cliente cliente = new Cliente(nome, cpf, telefone);
		Reserva reserva = new Reserva(cliente, quarto, entrada, saida);
		quarto.setOcupado(true);
		reservas.add(reserva);
		try(ObjectOutputStream oos = new ObjectOutputStream(new FileOutputStream(arquivo))) {
			oos.writeObject(cliente);
			return true;
		} catch(IOException e) {
			return false;
		}
	}
	
	//Procura um quarto com o numero indicado, retorna o objeto se encontrar e null se não encontrar
	public Quarto buscarQuarto(int numero) {
		for(Quarto q : quartos) {
			if(q.getNumero() == numero) {
				return q;
			}	
		}
		return null;
	}
	
	//Retornar a lista de reservas feitas
	public List<Reserva> getReservas() {
		return reservas;
	}
	
	//Procura uma reservas com o cpf, se encontrar libera o quarto, remove da lista e retorna true, se nao encontrar retorna false
	public boolean cancelarReservaPorCPF(String cpf) {
		for(Reserva r : reservas) {
			if(r.getCliente().getCpf().equals(cpf)) {
				r.getQuarto().setOcupado(false);
				reservas.remove(r);
				return true;
			}
		}
		return false;
	}
}
