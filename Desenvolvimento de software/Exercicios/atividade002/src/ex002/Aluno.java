package ex002;

public class Aluno {
	private String nome;
	private float n1, n2;
	
	
	public float media(float media) {
		return media = this.n1 + this.n2 / 2;
	}
	
	public String getNome() {
		return nome;
	}
	public void setNome(String nome) {
		this.nome = nome;
	}
	
	public float getN1() {
		return n1;
	}
	public void setN1(float n1) {
		if(n1 > 0 && n1 < 10) {
			this.n1 = n1;
		}else {
			System.out.println("Nota inválida");
		}
	}
	
	public float getN2() {
		return n2;
	}
	public void setN2(float n2) {
		if(n2 > 0 && n2 < 10) {
			this.n2 = n2;
		}else {
			System.out.println("Nota inválida");
		}
	}
	
	
}
