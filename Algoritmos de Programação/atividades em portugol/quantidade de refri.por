programa
{
	/*15. Uma fabrica de refrigerantes vende seu produto em três formatos: lata de 350 ml, garrafa de 600 ml e
	garrafa de 2 litros. Tomando por base que um comerciante compre uma determinada quantidade de
	cada um dos formatos disponíveis, escreva um algoritmo para calcular quantos litros de refrigerante
	ele comprou.*/
	
	inteiro refri350, refri600, refri2L, q350, q600, q2000, total
	
	funcao inicio()
	{
	escreva("Quantas lata de 350ml você comprou? ")
	leia(refri350)
	
	escreva("Quantas garrafas de 600ml você comprou? ")
	leia(refri600)
	
	escreva("Quantas garrafas de 2L você comprou? ")
	leia(refri2L)
	
	q350 = refri350 * 350
	q600 = refri600 * 600
	q2000 = refri2L * 2000
	
	total = (q350 + q600 + q2000) / 1000
	
	escreva("A quantidade total em litros de refrigerante que você comprou é de: ", total, "L")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 832; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */