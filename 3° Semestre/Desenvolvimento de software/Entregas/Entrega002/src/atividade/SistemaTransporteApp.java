package atividade;

import java.util.ArrayList;
import java.util.Scanner;

public class SistemaTransporteApp {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Garagem garagem = new Garagem();
        int proximoId = 1; 
        int opcao;

        do {
            System.out.println("\n--- Sistema de Transporte ---");
            System.out.println("1. Cadastrar Ônibus");
            System.out.println("2. Cadastrar Metrô");
            System.out.println("3. Listar todos os veículos");
            System.out.println("4. Listar veículos por tipo");
            System.out.println("5. Executar ação específica");
            System.out.println("6. Mostrar total de veículos por tipo");
            System.out.println("7. Sair");
            System.out.print("Escolha uma opção: ");
            opcao = scanner.nextInt();
            scanner.nextLine(); 

            switch (opcao) {
                case 1:
                    System.out.println("\n--- Cadastrar Ônibus ---");
                    System.out.print("Marca: ");
                    String marcaOnibus = scanner.nextLine();
                    System.out.print("Ano: ");
                    int anoOnibus = scanner.nextInt();
                    scanner.nextLine(); 
                    System.out.print("Capacidade de passageiros: ");
                    int capacidade = scanner.nextInt();
                    scanner.nextLine(); 
                    System.out.print("Tipo (ex: articulado, convencional, micro-ônibus): ");
                    String tipoOnibus = scanner.nextLine();
                    Onibus novoOnibus = new Onibus(proximoId++, anoOnibus, marcaOnibus, capacidade, tipoOnibus);
                    garagem.adicionarVeiculo(novoOnibus);
                    System.out.println("Ônibus cadastrado com sucesso!");
                    break;
                case 2:
                    System.out.println("\n--- Cadastrar Metrô ---");
                    System.out.print("Marca: ");
                    String marcaMetro = scanner.nextLine();
                    System.out.print("Ano: ");
                    int anoMetro = scanner.nextInt();
                    scanner.nextLine(); 
                    System.out.print("Número de vagões: ");
                    int numeroVagoes = scanner.nextInt();
                    scanner.nextLine();
                    System.out.print("Tem ar condicionado? (true/false): ");
                    boolean temAC = scanner.nextBoolean();
                    scanner.nextLine(); 
                    Metro novoMetro = new Metro(proximoId++, anoMetro, marcaMetro, numeroVagoes, temAC);
                    garagem.adicionarVeiculo(novoMetro);
                    System.out.println("Metrô cadastrado com sucesso!");
                    break;
                case 3:
                    garagem.listarTodos();
                    break;
                case 4:
                    garagem.listarPorTipo();
                    break;
                case 5:
                    System.out.println("\n--- Executar ação específica ---");
                    System.out.print("Digite o ID do veículo para executar a ação: ");
                    int idAcao = scanner.nextInt();
                    scanner.nextLine();
                    for (Veiculo veiculo : garagem.veiculos) {
                        if (veiculo.getId() == idAcao) {
                            if (veiculo instanceof Onibus) {
                                System.out.println("Ações disponíveis para Ônibus:");
                                System.out.println("1. Abrir portas");
                                System.out.println("2. Fechar portas");
                                System.out.print("Escolha a ação: ");
                                int acaoOnibus = scanner.nextInt();
                                scanner.nextLine(); 
                                Onibus onibus = (Onibus) veiculo;
                                if (acaoOnibus == 1) {
                                    onibus.abrirPortas();
                                    System.out.println("Portas abertas.");
                                } else if (acaoOnibus == 2) {
                                    onibus.fecharPortas();
                                    System.out.println("Portas fechadas.");
                                } else {
                                    System.out.println("Ação inválida.");
                                }
                            } else if (veiculo instanceof Metro) {
                                System.out.println("Ações disponíveis para Metrô:");
                                System.out.println("1. Embarcar passageiros");
                                System.out.println("2. Desembarcar passageiros");
                                System.out.print("Escolha a ação: ");
                                int acaoMetro = scanner.nextInt();
                                scanner.nextLine(); 
                                Metro metro = (Metro) veiculo;
                                if (acaoMetro == 1) {
                                    System.out.print("Digite a quantidade de passageiros para embarcar: ");
                                    int embarcar = scanner.nextInt();
                                    scanner.nextLine(); 
                                    int embarcados = metro.embarcarPassageiros(embarcar);
                                    System.out.println(embarcados + " passageiros embarcaram.");
                                } else if (acaoMetro == 2) {
                                    System.out.print("Digite a quantidade de passageiros para desembarcar: ");
                                    int desembarcar = scanner.nextInt();
                                    scanner.nextLine();
                                    int desembarcados = metro.desembarcarPassageiros(desembarcar);
                                    System.out.println(desembarcados + " passageiros desembarcaram.");
                                } else {
                                    System.out.println("Ação inválida.");
                                }
                            } else {
                                System.out.println("Não há ação específica definida para este tipo de veículo.");
                            }
                            break;
                        }
                    }
                    break;
                case 6:
                    garagem.contarVeiculos();
                    break;
                case 7:
                    System.out.println("Saindo do sistema...");
                    break;
                default:
                    System.out.println("Opção inválida. Tente novamente.");
            }
        } while (opcao != 7);

        scanner.close();
    }
}