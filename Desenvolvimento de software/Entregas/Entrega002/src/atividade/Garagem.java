package atividade;
import java.util.ArrayList;
public class Garagem {
    ArrayList<Veiculo> veiculos = new ArrayList<>();

    public void adicionarVeiculo(Veiculo v) {
        veiculos.add(v);
    }

    public void listarTodos() {
        System.out.println("\n--- Listando todos os veículos ---");
        if (veiculos.isEmpty()) {
            System.out.println("Nenhum veículo na garagem.");
            return;
        }
        for (Veiculo veiculo : veiculos) {
            veiculo.exibirDados();
        }
        System.out.println("--- Fim da lista ---");
    }

    public void listarPorTipo() {
        System.out.println("\n--- Listando veículos por tipo ---");
        ArrayList<Onibus> onibusList = new ArrayList<>();
        ArrayList<Metro> metrosList = new ArrayList<>();

        for (Veiculo veiculo : veiculos) {
            if (veiculo instanceof Onibus) {
                onibusList.add((Onibus) veiculo);
            } else if (veiculo instanceof Metro) {
                metrosList.add((Metro) veiculo);
            }
        }

        if (!onibusList.isEmpty()) {
            System.out.println("\n--- Ônibus ---");
            for (Onibus onibus : onibusList) {
                onibus.exibirDados();
            }
        }

        if (!metrosList.isEmpty()) {
            System.out.println("\n--- Metrôs ---");
            for (Metro metro : metrosList) {
                metro.exibirDados();
            }
        }

        if (onibusList.isEmpty() && metrosList.isEmpty()) {
            System.out.println("Nenhum veículo cadastrado.");
        }
        System.out.println("--- Fim da lista por tipo ---");
    }

    public void contarVeiculos() {
        int totalOnibus = 0;
        int totalMetros = 0;

        for (Veiculo veiculo : veiculos) {
            if (veiculo instanceof Onibus) {
                totalOnibus++;
            } else if (veiculo instanceof Metro) {
                totalMetros++;
            }
        }

        System.out.println("\n--- Total de veículos por tipo ---");
        System.out.println("Total de Ônibus: " + totalOnibus);
        System.out.println("Total de Metrôs: " + totalMetros);
        System.out.println("----------------------------------");
    }
}