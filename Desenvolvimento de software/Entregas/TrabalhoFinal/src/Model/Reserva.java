package Model;

public class Reserva {
	private int idQuarto, checkIn, checkOut;
	private Hospede hospede;

	// Métodos Get
	public int getIdQuarto() {
		return idQuarto;
	}

	public int getCheckIn() {
		return checkIn;
	}

	public int getCheckOut() {
		return checkOut;
	}

	public Hospede getHospede() {
		return hospede;
	}

	// Métodos Set
	public void setIdQuarto(int idQuarto) {
		this.idQuarto = idQuarto;
	}

	public void setCheckIn(int checkIn) {
		this.checkIn = checkIn;
	}

	public void setCheckOut(int checkOut) {
		this.checkOut = checkOut;
	}

	public void setHospede(Hospede hospede) {
		this.hospede = hospede;
	}
}
