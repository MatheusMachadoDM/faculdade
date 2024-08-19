programa
{
	/*16. Escreva um algoritmo que solicite do usuário o valor de um saque em caixa eletrônico, sendo que
	estarão disponíveis cédulas de 5, 10, 20, 50 e 100. O algoritmo deve apresentar a menor quantidade de
	cédulas possível de acordo com o saque. Exemplos:
	
	400,00: 4 cédulas de 100, 0 cédulas de 50, 0 cédulas de 20, 0 cédulas de 10 e 0 cédulas de 5.
	350,00: 3 cédulas de 100, 1 cédulas de 50, 0 cédulas de 20, 0 cédulas de 10 e 0 cédulas de 5.
	385,00: 3 cédulas de 100, 1 cédula de 50, 1 cédula de 20, 1 cédula de 10 e 1 cédula de 5.*/
	
	inteiro valor, restante, nota100, nota50, nota20, nota10, nota5
	
	funcao inicio()
	{
		escreva("Qual o valor do saque que você deseja realizar? ")
		leia(valor)
		
		nota100 = (valor - valor % 100) / 100
		restante = valor % 100
		
		nota50 = (restante - restante % 50) / 50
		restante = restante % 50
		
		nota20 = (restante - restante % 20) / 20
		restante = restante % 20
	
		nota10 = (restante - restante % 10) / 10
		restante = restante % 10
	
		nota5 = (restante - restante % 5) / 5
		restante = restante % 5
		
		escreva("Sacando esse valor, você receberá ", nota100, " notas de cem, ", nota50, " notas de cinquenta, ", nota20, " notas de vinte, ", nota10, " notas de dez e ", nota5, " notas de cinco.")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 1250; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */