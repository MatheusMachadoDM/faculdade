programa
{
	//4. Escreva um algoritmo que leia a nota de três provas de um aluno, calcule e escreva a média final deste aluno. Considere que a média é ponderada e que o peso das provas é 2 para a primeira prova, 3 para a segunda prova e 5 para a terceira prova.
	real n1, n2, n3, mp
	
	funcao inicio()
	{
		escreva("Digite sua primeira nota: ")
		leia(n1)

		escreva("Digite sua segunda nota: ")
		leia(n2)

		escreva("Digite sua terceira nota: ")
		leia(n3)

		mp = (n1 * 2 + n2 * 3 + n3 * 5) / 10

		escreva("Sua média é ", mp)
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 464; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */