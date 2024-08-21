programa
{
	/*8. Escreva um algoritmo que pergunte ao usuário a quantidade de km percorridos por um carro alugado
	e a quantidade de dias pelos quais ele foi alugado. Calcule e mostre o valor a pagar, sabendo que o
	carro custa R$ 70,00 por dia e R$ 0,15 por km rodado.*/

	real kmPercorrido, dias, valorDia, valorKM, valorTotal
	
	funcao inicio()
	{
		escreva("Quantos quilometros você andou com o carro? ")
		leia(kmPercorrido)
		
		escreva("Por quantos dias você usou o carro? ")
		leia(dias)
		
		valorDia = 70 * dias
		valorKM = 0.15 * kmPercorrido
		valorTotal = valorDia + valorKM
		
		escreva("O total que você deve pagar é de: R$", valorTotal)

	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 573; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */