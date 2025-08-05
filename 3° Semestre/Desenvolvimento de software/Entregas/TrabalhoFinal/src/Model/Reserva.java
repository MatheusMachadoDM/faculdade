package Model;

import java.time.LocalDate;
import java.io.Serializable;

public class Reserva implements Serializable {
	private static final long serialVersionUID = 1L; // Isso garante que o objeto serializado seja da mesma "versão" que a classe que vai ser comparada na desserialização. Se o valor for diferente, o programa da um erro que impede a desserialização
	private Cliente cliente;
	private Quarto quarto;
	private LocalDate dataEntrada, dataSaida;
	
	public Reserva(Cliente cliente, Quarto quarto, LocalDate dataEntrada, LocalDate dataSaida) {
		this.cliente = cliente;
		this.quarto = quarto;
		this.dataEntrada = dataEntrada;
		this.dataSaida = dataSaida;
	}

	public Cliente getCliente() {
		return cliente;
	}

	public void setCliente(Cliente cliente) {
		this.cliente = cliente;
	}

	public Quarto getQuarto() {
		return quarto;
	}

	public void setQuarto(Quarto quarto) {
		this.quarto = quarto;
	}

	public LocalDate getDataEntrada() {
		return dataEntrada;
	}

	public void setDataEntrada(LocalDate dataEntrada) {
		this.dataEntrada = dataEntrada;
	}

	public LocalDate getDataSaida() {
		return dataSaida;
	}

	public void setDataSaida(LocalDate dataSaida) {
		this.dataSaida = dataSaida;
	}
	
	//Calcula a quantidade de dias entre dataEntrada e dataSaida usando a classe ChronoUnit.DAYS da API de datas
	public long getTotalDias() {
		return java.time.temporal.ChronoUnit.DAYS.between(dataEntrada, dataSaida);
	}
	
	//Multiplica a quantidade de dias pelo valor da reserva
	public double getValorTotal() {
		return getTotalDias() * quarto.getPrecoPorNoite();
	}
}

