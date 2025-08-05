fun main() {

    ex005()
}
fun ex001(){
    val n1:Float; val n2:Float; val n3:Float; var media:Float

    print("Digite a primeira nota:")
    n1 = readln().toFloat()

    print("Digite a segunda nota:")
    n2 = readln().toFloat()

    print("Digite a terceira nota:")
    n3 = readln().toFloat()

    media = (n1 + n2 + n3) / 3

    println("A média do aluno é " + media)

}
fun ex002(){
    print("Digite um número inteiro:")
    val n1 = readln().toInt()

    if(n1 % 2 == 0){
        print("Número par")
    }else{
        print("Número ímpar")
    }
}
fun ex003(){
    println("Contagem regressiva:")

    for(i in 10 downTo 1){
        println(i)
    }
    println("Acabou!")
}
fun ex004(){
    var soma:Int = 0

    for(i in 1..100){
        soma += i
    }
    print("A soma de 1 até 100 é " + soma)
}
fun ex005(){

    print("Digite um número: ")
    val n1 = readln().toInt()

    for(i in 1..10){
        print("$n1 x $i = " + n1 * i + "\n")
    }
}
fun ex006(){
    var fatorial:Int = 0

    print("Digite um número: ")
    val n1 = readln().toInt()

    for(i in n1 downTo 1){
        fatorial *= i
        
        print("$n1 x ${n1 - 1} = ")
    }
}