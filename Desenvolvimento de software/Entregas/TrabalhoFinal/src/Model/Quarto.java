package Model;
import java.io.Serializable;

public class Quarto implements Serializable {
	private static final long serialVersionUID = 1L; // Isso garante que o objeto serializado seja da mesma "versão" que a classe que vai ser comparada na desserialização. Se o valor for diferente, o programa da um erro que impede a desserialização
	private int numero;
	private String tipo;
	private double precoPorNoite;
	private boolean ocupado;
	
	public Quarto(int numero, String tipo, double precoPorNoite) {
		this.numero = numero;
		this.tipo = tipo;
		this.precoPorNoite = precoPorNoite;
		this.ocupado = false;
	}

	public int getNumero() {
		return numero;
	}

	public void setNumero(int numero) {
		this.numero = numero;
	}

	public String getTipo() {
		return tipo;
	}

	public void setTipo(String tipo) {
		this.tipo = tipo;
	}

	public double getPrecoPorNoite() {
		return precoPorNoite;
	}

	public void setPrecoPorNoite(double precoPorNoite) {
		this.precoPorNoite = precoPorNoite;
	}

	public boolean isOcupado() {
		return ocupado;
	}

	public void setOcupado(boolean ocupado) {
		this.ocupado = ocupado;
	}
	
}

