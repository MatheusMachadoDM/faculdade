class Carro  {
    var modelo: String
    var placa: String

    init { // inicialização e validações iniciais
        modelo = "Fusca"
        placa = "ABC-1234"
    }

    constructor() {}

    constructor(modelo: String, placa: String) {
        this.modelo = modelo
        this.placa = placa
    }
}