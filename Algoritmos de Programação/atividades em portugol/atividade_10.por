programa
{
	
	/*9. 10. Um vendedor de uma loja de sapatos recebe como pagamento 20% de comissão sobre as vendas do
	mês e R$ 5,00 por cada par de sapatos vendido. Escreva um algoritmo que, dado o valor total das
	vendas do mês e o número de sapatos vendidos, mostre qual será o salário do vendedor naquele mês.*/

	real vendasMes, salario
    	inteiro numeroSapatos

	
	funcao inicio()
	{
		escreva("Quantos sapatos foram vendidos durante o mês? ")
		leia(numeroSapatos)
		
		escreva("Qual o valor total de vendas no mês? ")
		leia(vendasMes)
		
		salario = vendasMes * 0.2 + (5 * numeroSapatos)
		
		escreva("Seu salário nesse mês será de R$", salario)
	}
}

/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 14; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */