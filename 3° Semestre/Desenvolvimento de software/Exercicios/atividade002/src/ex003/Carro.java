package ex003;

public class Carro {
	private String modelo;
	private boolean ligado = false;
	private int velocidade = 0;
	public String getModelo() {
		return modelo;
	}
	public void setModelo(String modelo) {
		this.modelo = modelo;
	}
	public boolean isLigado() {
		return ligado;
	}
	public void setLigado(boolean ligado) {
		this.ligado = ligado;
	}
	public int getVelocidade() {
		return velocidade;
	}
	public void setVelocidade(int velocidade) {
		this.velocidade = velocidade;
	}
	
	static void ligar(Carro carro) {
		if(carro.isLigado() == false) {
			System.out.println("O " + carro.getModelo() + " ligou!\n");
			
			carro.setLigado(true);
		}else {
			System.out.println("O " + carro.getModelo() + " já está ligado!\n");
		}
	}
	
	static void desligar(Carro carro) {
		if(carro.isLigado() == false) {
			System.out.println("O " + carro.getModelo() + " já está desligado\n");
		}else {
			System.out.println("O " + carro.getModelo() + " desligou!\n");
			
			carro.setLigado(false);
		}
	}
	static void acelerar(Carro carro) {
		int velocidadeAtual = carro.getVelocidade();
		
		if(carro.isLigado() == false) {
			System.out.println("Não é possível acelerar com o " + carro.getModelo() + " desligado!");
		}else if(velocidadeAtual == 200){
			System.out.println("Velocidade maxima atingida! " + velocidadeAtual + " Km/h");
		}else {
			velocidadeAtual += 20;
			carro.setVelocidade(velocidadeAtual);
			
			System.out.println("Acelerando... velocidade atual: " + velocidadeAtual + " Km/h!");
		}
		
	}
	static void freiar(Carro carro) {
		int velocidadeAtual = carro.getVelocidade();
		
		if(carro.isLigado() == false || velocidadeAtual == 0) {
			System.out.println("O " + carro.getModelo() + " está parado!");
		}else {
			
			velocidadeAtual -= 20;
			carro.setVelocidade(velocidadeAtual);
			
			System.out.println("Freiando... velocidade atual: " + velocidadeAtual + " Km/h!");
		}
	}
	
	
}
