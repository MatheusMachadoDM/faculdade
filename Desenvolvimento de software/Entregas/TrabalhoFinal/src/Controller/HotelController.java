package Controller;

import Model.Hospede;
import Model.Reserva;

import java.util.ArrayList;
import java.util.List;

public class HotelController {
	private List<Hospede> hospedes = new ArrayList<>();
	private List<Reserva> reservas = new ArrayList<>();
	
	public void adicionarHospede(Hospede h) {
		hospedes.add(h);
	}
	
	public void adicionarReserva(Reserva r) {
		reservas.add(r);
	}
	
	public List<Hospede> listarHospede() {
		return hospedes;
	}
	
	public List<Reserva> listarReserva(){
		return reservas;
	}
	
	
}
