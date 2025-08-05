package Model;

import java.io.Serializable;

public abstract class Usuario implements Serializable {
	private static final long serialVersionUID = 1L; // Isso garante que o objeto serializado seja da mesma "versão" que a classe que vai ser comparada na desserialização. Se o valor for diferente, o programa da um erro que impede a desserialização
	private String nome, cpf;
	
	public Usuario(String nome, String cpf) {
		this.nome = nome;
		this.cpf = cpf;
	}

	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public String getCpf() {
		return cpf;
	}

	public void setCpf(String cpf) {
		this.cpf = cpf;
	}
	public abstract void exibirDados();
}
