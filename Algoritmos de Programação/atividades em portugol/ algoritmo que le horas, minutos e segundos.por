programa
{
//2. Escreva um algoritmo que leia horas, minutos e segundos do teclado e apresente o tempo total em segundos.
	inteiro horas, minutos, segundos, resultado
	
	funcao inicio()
	{
		escreva("Olá este é um algoritimo que ira ler uma quantidade de horas, minutos e segundos e te apresentar o tempo total em segundos, para começar, por favor digite uma quantidade de horas: ")
		leia(horas)

		escreva("Digite uma quantidade de minutos: ")
		leia(minutos)

		escreva("Digite uma quantidade de segundos: ")
		leia(segundos)

		resultado = horas * 3600 + minutos * 60 + segundos

		escreva("O total de segundos é: ", resultado)
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 639; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */