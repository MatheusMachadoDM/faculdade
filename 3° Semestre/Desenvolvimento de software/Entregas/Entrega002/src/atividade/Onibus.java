package atividade;
public class Onibus extends Veiculo{

    int capacidadePassageiros;
    String tipo;

    public Onibus(int id, int ano, String marca, int capacidadePassageiros, String tipo) {
        super(id, ano, marca);
        this.capacidadePassageiros = capacidadePassageiros;
        this.tipo = tipo;
    }

    public int getCapacidadePassageiros() {
        return capacidadePassageiros;
    }

    public String getTipo() {
        return tipo;
    }

    @Override
    public void exibirDados() {
        System.out.println("\n-Ônibus- \nID = " + getId() + "\nMarca = " + getMarca() + "\nAno = " + getAno() + "\nCapacidade = " + capacidadePassageiros + "\nTipo = " + tipo + "\n");
    }

    public void abrirPortas() {
        System.out.println("\nÔnibus [ID = " + getId() + "]: Abrindo portas...");
    }

    public void fecharPortas() {
        System.out.println("\nÔnibus [ID = " + getId() + "]: Fechando portas...");
    }
}