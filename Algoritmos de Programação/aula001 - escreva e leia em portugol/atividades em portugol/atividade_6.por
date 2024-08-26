programa
{
	//6. Escreva um algoritmo que apresente a conversão de um valor em reais para dólar, de acordo com a taxa de câmbio informada pelo usuário.
	real moedaReal, vDolar, dolar
	
	funcao inicio()
	{
		escreva("Quantos reais você quer converter? ")
		leia(moedaReal)
		
		escreva("Qual o valor do dolar em real atualmente? ")
		leia(vDolar)
		
		dolar = moedaReal / vDolar
		
		escreva(moedaReal,"reais, são ", dolar," Dolares")

	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 446; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */