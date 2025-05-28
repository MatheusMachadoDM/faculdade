package Model;
// Classe abstrata que vai servir de base para criar a classe Hospede
public abstract class Pessoa {
    protected String nome;
    protected String cpf;

    /*public Pessoa(String nome, String cpf) {
        this.nome = nome;
        this.cpf = cpf;
    }*/

    // Métodos Get
    public String getNome() {
        return nome;
    }

    public String getCpf() {
        return cpf;
    }

    // Métodos Set
    public void setNome(String nome) {
        this.nome = nome;
    }

    public void setCpf(String cpf) {
        this.cpf = cpf;
    }
}

