package atividade;
abstract public class Veiculo {
    private int id, ano;
    private String marca;

    public Veiculo(int id, int ano, String marca) {
        this.id = id;
        this.ano = ano;
        this.marca = marca;
    }

    public int getId() {
        return id;
    }

    public int getAno() {
        return ano;
    }

    public String getMarca() {
        return marca;
    }

    public abstract void exibirDados();
}