class Filme (var titulo: String, var ano: Int, var genero: String){

    constructor(titulo: String): this(titulo, 0, "Indefinido")

    fun mostrarDadosFilme() {
        println("Título do filme: $titulo")
        if (ano == 0) println("Ano de lançamento: Indefinido")
        else println("Ano de lançamento: $ano")
        println("Gênero: $genero\n")
    }

}