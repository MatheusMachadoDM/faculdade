programa
{
	/*11. Escreva um algoritmo que leia o número de votos brancos, o número de votos nulos e o número de
	votos válidos em um município. Em seguida, calcule e escreva o percentual de votos brancos, nulos e
	válidos em relação ao total de eleitores do município.*/
	

	real vNulo, vBranco, vValido, vTotal, vNuloPorcent, vBrancoPorcent, vValidoPorcent
	
	funcao inicio()
	{
		escreva("Qual foi a quantidade de votos nulos? ")
		leia(vNulo)
		
		escreva("Qual foi a quantidade de votos em branco? ")
		leia(vBranco)
		
		escreva("Qual foi a quantidade de votos válidos? ")
		leia(vValido)
		
		vTotal = vNulo + vBranco + vValido
		vNuloPorcent = vNulo / vTotal * 100
		vBrancoPorcent = vBranco / vTotal * 100
		vValidoPorcent = vValido / vTotal * 100
		
		escreva("A quantidade total de foi de ", vTotal," votos, sendo ", vNuloPorcent,"% nulos, ", vBrancoPorcent,"% brancos e ", vValidoPorcent, "% válidos.")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 919; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */