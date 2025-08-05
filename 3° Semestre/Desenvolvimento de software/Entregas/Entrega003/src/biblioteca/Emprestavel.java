package biblioteca;

public interface Emprestavel {
	
	void emprestar() throws LivroIndisponivelException;;
	void devolver();
}
