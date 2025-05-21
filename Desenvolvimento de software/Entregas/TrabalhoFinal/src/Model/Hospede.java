package Model;

public class Hospede implements iCrud{
	private String nome, cpf, telefone;
	
	public Hospede(String nome, String cpf, String telefone) {
		this.nome = nome;
		this.cpf = cpf;
		this.telefone = telefone;
		
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

	public String getTelefone() {
		return telefone;
	}

	public void setTelefone(String telefone) {
		this.telefone = telefone;
	}
	
	//Corrige a forma com que o atualizar é mostrado
	@Override 
	public String toString() {
	    return "Nome: " + nome + ", CPF: " + cpf + ", Telefone: " + telefone;
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
