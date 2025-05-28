package Model;

public class Quarto {
    private int id;
    private int capacidade;
    private boolean disponivel;

    // Métodos Get
    public int getId() {
        return id;
    }

    public int getCapacidade() {
        return capacidade;
    }

    public boolean getDisponivel() {
        return disponivel;
    }

    // Métodos Set
    public void setId(int id) {
        this.id = id;
    }

    public void setCapacidade(int capacidade) {
        this.capacidade = capacidade;
    }

    public void setDisponivel(boolean disponivel) {
        this.disponivel = disponivel;
    }
}