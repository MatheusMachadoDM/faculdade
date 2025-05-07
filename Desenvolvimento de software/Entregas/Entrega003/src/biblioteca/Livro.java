package biblioteca;


public class Livro implements Emprestavel{
	private String titulo, autor, ISBN;
	private boolean disponibilidade = true;
	
	public Livro(String titulo, String autor, String ISBN, boolean disponibilidade) {
		this.titulo = titulo;
		this.autor = autor;
		this.ISBN = ISBN;
		this.disponibilidade = disponibilidade;
	}

	@Override
	public void emprestar() throws LivroIndisponivelException {
	    if (disponibilidade) {
	        System.out.println("Livro emprestado com sucesso!");
	        disponibilidade = false;
	    } else {
	        throw new LivroIndisponivelException("Livro não está disponível para empréstimo.");
	    }
	}



	@Override
	public void devolver() {
		if(disponibilidade == false) {
			System.out.println("Livro devolvido com sucesso!");
			disponibilidade = true;
		}else {
			System.out.println("Livro já está disponível");
		}
		
	}

	public String getTitulo() {
		return titulo;
	}

	public void setTitulo(String titulo) {
		this.titulo = titulo;
	}

	public String getAutor() {
		return autor;
	}

	public void setAutor(String autor) {
		this.autor = autor;
	}

	public String getISBN() {
		return ISBN;
	}

	public void setISBN(String iSBN) {
		ISBN = iSBN;
	}

	public boolean isDisponibilidade() {
		return disponibilidade;
	}

	public void setDisponibilidade(boolean disponibilidade) {
		this.disponibilidade = disponibilidade;
	}
	
	
	
}
