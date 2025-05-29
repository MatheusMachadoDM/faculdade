package Controller;
import Model.*;

import Model.Hospede;
import Model.Reserva;

import java.util.ArrayList;
import java.util.List;

public class HotelController {
	private List<Hospede> hospedes 	= new ArrayList<>();
	private List<Reserva> reservas 	= new ArrayList<>();
	private List<Quarto> quartos 	= new ArrayList<>();
	
	// Métodos para adicionar itens às listas correspondentes
	public void adicionarHospede(Hospede h) {
		hospedes.add(h);
	}
	
	public void adicionarReserva(Reserva r) {
		reservas.add(r);
	}

	public void adicionarQuarto(Quarto q) {
		quartos.add(q);
	}
	
	// Métodos para apresentar a lista correspondente
	public List<Hospede> listarHospedes() {
		return hospedes;
	}
	
	public List<Reserva> listarReservas() {
		return reservas;
	}
	
	public List<Quarto> listarQuartos() {
		return quartos;
	}
}
