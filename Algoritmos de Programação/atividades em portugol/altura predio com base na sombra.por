programa
{
	/*13. Num dia de sol, você deseja medir a altura de um prédio, porém, a trena não é suficientemente longa.
	Assumindo que seja possível medir sua sombra e a sombra do prédio no chão, e que você lembre de
	sua altura, escreva um algoritmo para ler os dados necessários e calcular a altura do prédio*/
	
	real alturaPessoa, alturaPredio, sombraPessoa, sombraPredio, resultado
	
	funcao inicio()
	{
		escreva("Digite sua altura em metros: ")
		leia(alturaPessoa)
		
		escreva("Quanto mede a sua sombra em metros? ")
		leia(sombraPessoa)
		
		escreva("Quanto mede a sobra do prédio em metros? ")
		leia(sombraPredio)
		
		resultado = sombraPredio / sombraPessoa
		
		alturaPredio = alturaPessoa * resultado
		
		escreva("A alturado prédio é de ", resultado, " metros!")
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