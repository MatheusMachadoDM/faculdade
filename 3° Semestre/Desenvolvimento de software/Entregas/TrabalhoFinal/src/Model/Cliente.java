package Model;

public class Cliente extends Usuario{
	
	private String telefone;
	
	
	public Cliente(String nome, String cpf, String telefone) {
		super(nome, cpf);
		this.telefone = telefone;
	}
	
	public String getTelefone() {
		return telefone;
	}


	public void setTelefone(String telefone) {
		this.telefone = telefone;
	}


	@Override
	public void exibirDados() {
		System.out.println("Cliente: " + getNome());
		System.out.println("CPF: " + getCpf());
		System.out.println("Telefone: " + getTelefone());	
	}
	

}
