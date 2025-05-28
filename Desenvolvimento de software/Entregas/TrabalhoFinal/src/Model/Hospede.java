package Model;

public class Hospede extends Pessoa {
	private String fone;

	// Métodos Get
	@Override
	public String getNome() {
		// TODO Auto-generated method stub
		return super.getNome();
	}
	
	@Override
	public String getCpf() {
		// TODO Auto-generated method stub
		return super.getCpf();
	}

	public String getFone() {
		return fone;
	}

	// Métodos Set
	@Override
	public void setNome(String nome) {
		// TODO Auto-generated method stub
		super.setNome(nome);
	}

	@Override
	public void setCpf(String cpf) {
		// TODO Auto-generated method stub
		super.setCpf(cpf);
	}

	public void setFone(String fone) {
		this.fone = fone;
	}
}

