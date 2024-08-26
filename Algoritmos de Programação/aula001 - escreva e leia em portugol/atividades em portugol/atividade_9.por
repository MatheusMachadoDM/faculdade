programa
{
	/*9. Todo restaurante, embora por lei não possa obrigar o cliente a pagar, cobra 10% de comissão para o
	garçom. Escreva um algoritmo que leia o valor gasto pelo cliente em um restaurante e mostre o valor
	da gorjeta e o valor total a ser pago.*/

	real valorGasto, valorGorgeta, valorTotal

	
	funcao inicio()
	{
		escreva("Quanto você gastou no restaurante? ")
		leia(valorGasto)
		
		valorGorgeta = valorGasto * 0.1
		
		valorTotal = valorGasto + valorGorgeta
		
		escreva("O valor total que você deve pagar é R$ ", valorTotal," sendo que R$", valorGorgeta," é a taxa do garçom.")

	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 544; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */