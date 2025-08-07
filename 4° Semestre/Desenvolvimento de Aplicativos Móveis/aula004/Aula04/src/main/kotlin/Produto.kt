class Produto (var nome: String, var preco: Float) {

    // bloco init: executado sempre que o construtor primário
    // for chamado
    init {
        //require(preco >= 0f) { "Preço deve ser maior que zero!" }
        if (preco <= 0) preco = 0.01f
        println ("Produto cadastrado: $nome por R$ $preco")
    }


}