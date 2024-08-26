programa
{
	/*14. Antes do racionamento de energia ser decretado, quase ninguém falava em quilowatts; mas, agora,
	todos incorporaram essa palavra em seu vocabulário. Sabendo-se que 100 quilowatts de energia custa
	um sétimo do salário mínimo, escreva um algoritmo que receba o valor do salário mínimo e a
	quantidade de quilowatts gasta por uma residência e mostre na tela: a) o valor em reais de cada
	quilowatt e b) o valor total a ser pago.*/
	
	real salarioMin, qwGastos, valorPago, valorQW
	
	funcao inicio()
	{
		escreva("Quanto é o salário mínimo? ")
		leia(salarioMin)
		
		escreva("Quantos quilowatts sua residencia gastou? ")
		leia(qwGastos)
		
		valorQW = salarioMin / 700
		valorPago = qwGastos * valorQW
		
		escreva("O valor de cada quilowatt é R$", valorQW, " e o total que deve ser pago é R$", valorPago)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 763; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */