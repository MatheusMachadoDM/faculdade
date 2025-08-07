open abstract class Animal (var nome: String) {
    open fun falar() {
        println("$nome fez um som...")
    }

}

class Cachorro(nome: String, var raca: String) : Animal(nome) {
    override fun falar() {
       println("O cachorro $nome, da raça $raca, latiu...")
    }
}

class Gato(nome: String, var cor: String) : Animal(nome) {
    override fun falar() {
        println("O gato $cor $nome miou...")
    }
}