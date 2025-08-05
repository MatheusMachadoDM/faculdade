package atividade;
public class Metro extends Veiculo{

    int numeroVagoes;
    boolean temAC;
    int passageirosAtuais = 0;

    public Metro(int id, int ano, String marca, int numeroVagoes, boolean temAC) {
        super(id, ano, marca);
        this.numeroVagoes = numeroVagoes;
        this.temAC = temAC;
    }

    public int getNumeroVagoes() {
        return numeroVagoes;
    }

    public boolean isTemAC() {
        return temAC;
    }

    @Override
    public void exibirDados() {
        System.out.println("\n-Metrô- \nID = " + getId() + "\nMarca = " + getMarca() + "\nAno = " + getAno() + "\nVagões = " + numeroVagoes + "\nAr Condicionado = " + (temAC ? "Sim" : "Não"));
    }

    public int embarcarPassageiros(int quantidade) {
        passageirosAtuais += quantidade;
        System.out.println("\nMetrô [ID = " + getId() + "]: Embarcando " + quantidade + " passageiros...");
        return quantidade;
    }

    public int desembarcarPassageiros(int quantidade) {
        if (passageirosAtuais >= quantidade) {
            passageirosAtuais -= quantidade;
            System.out.println("\nMetrô [ID = " + getId() + "]: Desembarcando " + quantidade + " passageiros...");
            return quantidade;
        } else {
            System.out.println("\nMetrô [ID = " + getId() + "]: Não há passageiros suficientes para desembarcar.");
            return 0;
        }
    }
}