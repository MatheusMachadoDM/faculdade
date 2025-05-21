package Model;

public class Reserva implements iCrud{
	private int idQuarto, checkIn, checkOut;
	private Hospede hospede;
	
	
	public Reserva(int idQuarto, int checkIn, int checkOut, Hospede hospede) {
		this.idQuarto = idQuarto;
		this.checkIn = checkIn;
		this.checkOut = checkOut;
		this.hospede = hospede;
	}


	public int getIdQuarto() {
		return idQuarto;
	}


	public void setIdQuarto(int idQuarto) {
		this.idQuarto = idQuarto;
	}


	public int getCheckIn() {
		return checkIn;
	}


	public void setCheckIn(int checkIn) {
		this.checkIn = checkIn;
	}


	public int getCheckOut() {
		return checkOut;
	}


	public void setCheckOut(int checkOut) {
		this.checkOut = checkOut;
	}


	public Hospede getHospede() {
		return hospede;
	}


	public void setHospede(Hospede hospede) {
		this.hospede = hospede;
	}


	@Override
	public void cadastrar() {
		// TODO Auto-generated method stub
		
	}


	@Override
	public void deletar() {
		// TODO Auto-generated method stub
		
	}


	@Override
	public void atualizar() {
		// TODO Auto-generated method stub
		
	}


	@Override
	public void consultar() {
		// TODO Auto-generated method stub
		
	}
	
	
}
