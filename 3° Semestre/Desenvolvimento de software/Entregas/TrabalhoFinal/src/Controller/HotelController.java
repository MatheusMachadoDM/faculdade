package Controller;

import java.time.LocalDate;
import java.util.ArrayList;
import java.util.List;
import java.io.*;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.stream.Collectors;
import java.util.stream.Stream;
import java.util.Optional;

import Exception.*;
import Model.*;


public class HotelController {
	private List<Quarto> quartos;
	private List<Reserva> reservas;
	private final String pastaReservas = "src/Reserva";
	
	public HotelController() {
		this.quartos = new ArrayList<>();
		this.reservas = new ArrayList<>();
		inicializarQuartos();// adiciona alguns quartos padrão
		carregarHotel(); // Carrega o estado do hotel a partir dos arquivos que são lidos
	}
	
	//Cria quartos padrões
	private void inicializarQuartos() {
		quartos.add(new Quarto(101, "Solteiro", 120.0));
		quartos.add(new Quarto(102, "Casal", 200.0));
		quartos.add(new Quarto(103, "Luxo", 300.0));
	}
	
	//Cria uma nova lista cahamada disponiveis que percorre todos os quartos e se NÂO estiver ocupado adiciona na lista e retorna
	public List<Quarto> getQuartosDisponiveis() {
		List<Quarto> disponiveis = new ArrayList<>();
		for(Quarto q : quartos) {
			if(!q.isOcupado()) {
				disponiveis.add(q);
			}
		}
		return disponiveis;
	}
	
	//Busca o quarto pelo numero com buscarQuarto, verifica se existe e se esta livre, cria um cliente e uma reserva, marca o quaro como ocupado, adiciona na lista reservas e salva em um arquivo na pasta Reserva com o nome fornecido pelo usuário
	public boolean reservarQuarto(String nome, String cpf, String telefone, int numeroQuarto, LocalDate entrada, LocalDate saida, String arquivo) throws QuartoIndisponivelException {
		Quarto quarto = buscarQuarto(numeroQuarto);
		if(quarto == null || quarto.isOcupado()) {
			throw new QuartoIndisponivelException();
		}
		
		Cliente cliente = new Cliente(nome, cpf, telefone);
		Reserva reserva = new Reserva(cliente, quarto, entrada, saida);
		quarto.setOcupado(true);
		reservas.add(reserva);

		File arquivoDestino = new File("src/Reserva", arquivo + ".dat");

		try(ObjectOutputStream oos = new ObjectOutputStream(new FileOutputStream(arquivoDestino))) {
			oos.writeObject(reserva);
			return true;
		} catch(IOException e) {
			return false;
		}
	}
	
	//Procura um quarto com o numero indicado, retorna o objeto se encontrar e null se não encontrar
	public Quarto buscarQuarto(int numero) {
		for(Quarto q : quartos) {
			if(q.getNumero() == numero) {
				return q;
			}	
		}
		return null;
	}
	
	//Retornar a lista de reservas feitas
	public List<Reserva> getReservas() {
		return reservas;
	}
	
	//Procura uma reservas com o cpf, se encontrar libera o quarto, remove da lista e retorna true, se nao encontrar retorna false
	public boolean cancelarReservaPorCPF(String cpf) {
		for(Reserva r : reservas) {
			if(r.getCliente().getCpf().equals(cpf)) {
				r.getQuarto().setOcupado(false);
				reservas.remove(r);
				return true;
			}
		}
		return false;
	}

	private void carregarHotel() {
		List<Reserva> reservasCarregadas = new ArrayList<>(); // Carrega as reservas em uma lista temporária
		Path pasta = Paths.get(pastaReservas);

		try(Stream<Path> stream = Files.list(pasta)) {
			stream.filter(path -> path.toString().toLowerCase().endsWith(".dat")).forEach(path -> {
				try(ObjectInputStream ois = new ObjectInputStream(new FileInputStream(path.toFile()))) {
					Object obj = ois.readObject();
					if(obj instanceof Reserva) {
						reservasCarregadas.add((Reserva) obj);
						System.out.println("Controller: Reserva carregada do arquivo " + path.getFileName());
					} else {
						System.out.println("Controller: Arquivo " + path.getFileName() + " contém um objeto de tipo inesperado.");
					}
				} catch(IOException | ClassNotFoundException e) {
					System.out.println("Controller: Erro ao ler o arquivo " + path.getFileName() +": " + e.getMessage());
				}
			});
		} catch(IOException e) {
			System.out.println("Controller: Erro ao listar os arquivos na pasta " + pastaReservas + ": " + e.getMessage());
		}

		// Limpa as reservas atuais, que deveriam estar vazias e adiciona as reservas carregadas dos arquivos
		reservas.clear();
		reservas.addAll(reservasCarregadas);

		// Coloca todos os quartos como disponiveis
		for(Quarto quarto: quartos) {
			quarto.setOcupado(false);
		}

		// Percorre a lista de reservas carregadas e atuzaliza os quartos
		for(Reserva reserva: reservasCarregadas) {
			if(reserva.getDataSaida().isAfter(LocalDate.now())) {
				int numeroQuarto = reserva.getQuarto().getNumero();

				Quarto quartoNaListaPrincipal = quartos.stream().filter(q -> q.getNumero() == numeroQuarto).findFirst().orElse(null);

				if(quartoNaListaPrincipal != null) {
					quartoNaListaPrincipal.setOcupado(true);
					System.out.println("Controller: Quarto " + quartoNaListaPrincipal.getNumero() + " marcado como ocupado");
				} else {
					System.out.println("Controller: Quarto " + numeroQuarto + "(da reserva carregada) não encontrado na lista principal. Reserva ignorada.");
				}
			} else {
				System.out.println("Controller: Reserva para quarto " + reserva.getQuarto() + " expirou(" + reserva.getDataSaida() + "). Não marcando como ocupado.");
			}
			System.out.println("Controller: Estado do hotel inicializado. " + reservas.size() + " reservas ativas carregadas.");
		}
	}
}
