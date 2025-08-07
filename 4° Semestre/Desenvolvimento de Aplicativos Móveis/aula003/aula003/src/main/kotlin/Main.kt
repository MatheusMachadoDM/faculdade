fun main(args: Array<String>) {

    /*val mensagem = saudacao("Matheus")
    println(mensagem)*/

    /*criarPote() // Pote de chocolate com 10 unidades
    criarPote(quantidade = 5) // Pote de chocolate com 5 unidades
    criarPote(tipo = "morango", quantidade = 8)*/

    //list()
    //maps()
    //lambda()

    //DESAFIO
    val cumprimeta: (String) ->
    String = {nome -> "Olá $nome!"}

    val saudacao = cumprimeta("Jose")
    println(saudacao)

}
fun saudacao(nome: String): String{
    return "Olá, $nome!"
}
fun criarPote(tipo: String = "chocolate", quantidade: Int = 10) {
    println("Pote de $tipo com $quantidade unidades")
}
fun list(){
    // Imutável
    val nomes: List<String> = listOf("Ana", "Bruno", "Carla")

    // Mutável
    val frutas = mutableListOf("Maçã", "Banana")
    frutas.add("Laranja") // frutas = ["Maçã","Banana","Laranja"]
    frutas.remove("Banana") // frutas = ["Maçã","Laranja"]

    // Acessando itens
    println(nomes[1]) // Bruno
    println(frutas.size) // 2
}
fun maps(){
    // Imutável
    val capitais = mapOf(
        "BR" to "Brasília",
        "PT" to "Lisboa"
    )
    // Mutável
    val telefones = mutableMapOf("Alice" to "1111-1111")
    telefones["Bob"] = "2222-2222"

    // Acessando valores
    println(capitais["BR"]) // Brasília
    println(telefones.getOrDefault("Eve", "Não encontrado"))
}
fun lambda(){
    //Lambda é uma função anônima, ou seja, sem nome
    val soma = {a: Int, b: Int -> a + b}

    //  a: Int, b:      Intparâmetros da função
    //  ->              separa os parâmetros do corpo
    //  a + b           o corpo da função(o que ela retorna)

    println(soma(2,3))

    //Quando há um único parâmetro, você pode usar it:
    val quadrado: (Int) -> Int = {it * it}
}
fun lambdaSemParametro(){
    val saudacao: () ->
    String = { "Olá, mundo!" }
    println(saudacao())
}
fun lambdaDoisParametros(){
    val soma: (Int, Int) ->
    Int = { a, b -> a + b }
    println(soma(3, 7))
}
fun lambdaManipularString(){
    val paraMaiusculas: (String) ->
    String =
    { texto -> texto.uppercase() }
    println(paraMaiusculas("kotlin"))
}