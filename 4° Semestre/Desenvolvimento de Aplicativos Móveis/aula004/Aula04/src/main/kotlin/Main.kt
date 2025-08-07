fun main() {

    var p1 = Pessoa("Jason", 38)
    println("Pessoa p1 - nome: ${p1.nome}; idade: ${p1.idade}")
    p1.falar("Bom dia! Aula 04 de Kotlin!")

    var c1 = Carro()
    println("Dados do carro 1: ${c1.modelo} - ${c1.placa}")

    var c2 = Carro("Celta", "ABC-2115")
    println("Dados do carro 2: ${c2.modelo} - ${c2.placa}")


    var pr2 = Produto ("Salgadinho Fandangos Queijo", 7.89f)
    var pr1 = Produto ("Bolacha Trakinas Morango", -10f)

    var f1 = Filme("Matrix", 1999, "Ficção Ciêntífica")
    var f2 = Filme("Bastardos Inglórios")

    println("\nFilmes cadastrados:")
    f1.mostrarDadosFilme()
    f2.mostrarDadosFilme()


    var cachorro = Cachorro("Rex", "Pastor Alemão")
    var gato = Gato("Bolinho", "Amarelo")

    println("\nComportamento dos animais:")
    println(cachorro)
    cachorro.falar()
    gato.falar()

    val user1 = Usuario(1, "maria_maria", "lalal1234")
    val user2 = Usuario(2, "jao-jao", "jao123")
    val user3 = user2.copy() // cria novo objeto copiando dados de outro

    println("\nUsuários Cadastrados:")
    println(user1) // invocando implicitamente o toString
    println(user2)
    println(user3)

    // leitura de dados
    println("\nInforme seu nome para finalizarmos esta atividade: ")
    var nome: String? = readln() // ? = indica que o valor pode ser nulo

    // ?. = indica que a ação de 'uppercase' só será executada, se o valor
    // não for nulo

    println("\nObrigado ${nome?.uppercase()} por sua participação na aula de hoje!")

    println("\nAula finalizada...")

}