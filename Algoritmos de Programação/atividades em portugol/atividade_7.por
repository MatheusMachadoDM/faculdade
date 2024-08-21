programa
{
	/*7. Escreva um algoritmo que calcule e mostre o consumo médio e a autonomia que um veículo ainda
	teria antes de um abastecimento de combustível. Considere que o veículo sempre seja abastecido até
	encher o tanque e que são fornecidas apenas a capacidade do tanque, a quantidade de litros
	e a quilometragem percorrida desde o último abastecimento.*/

	real consumoM, auto, capacidadeTanque, litrosAbastecidos, kmPercorrido
	
	funcao inicio()
	{
		escreva("Quantos litros cabem no seu tanque? ")
		leia(capacidadeTanque)
		
		escreva("Quantos litros você abasteceu? ")
		leia(litrosAbastecidos)
		
		escreva("Quantos quilometros você percorreu até decidir abastecer? ")
		leia(kmPercorrido)
		
		consumoM = kmPercorrido / litrosAbastecidos
		
		auto = (capacidadeTanque - litrosAbastecidos) * consumoM
		
		escreva("Seu consumo médio é de ", consumoM, " km por litro e sua autonomia antes de abastecer seria de mais ", auto, "km")

	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 934; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */