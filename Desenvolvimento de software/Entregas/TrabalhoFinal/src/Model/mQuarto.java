package Model;

public class mQuarto { // Classe principal mQuarto que vai ser utilizada por outras classes Quarto
    private int id;
    private String nome; 
    private int capacidade;
    private boolean disponivel;

    // Métodos GET
    public int getId() {
        return id;
    }

    public String getNome() {
        return nome;
    }

    public int getCapacidade() {
        return capacidade;
    }

    public boolean getDisponivel() {
        return disponivel;
    }

    //Métodos SET
    public void setId(int novoId) {
        id = novoId;
    }

    public void setNome(String novoNome) {
        nome = novoNome; 
    }

    public void setCapacidade(int novaCapacidade) {
        if(capacidade > 0) {
            capacidade = novaCapacidade;
        } else {
            System.out.println("Capacidade do quarto não pode ser menor que 0");
        }
    }

    public void setDisponivel(boolean novoDisponivel) {
        disponivel = novoDisponivel;
    }
}