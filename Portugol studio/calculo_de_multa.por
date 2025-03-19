programa
{
	real fat, dAtr, multa, adicional, vTot
	funcao inicio()
	{
		escreva("Valor da fatura: ")
		leia(fat)
		escreva("Quantidae de dias em atraso: ")
		leia(dAtr)

			multa = (fat * (2 / 100.0))
			adicional = (fat * (dAtr *(0.5 / 100.0)))
			vTot =(fat + multa + adicional)

		escreva("O valor final da fatura com os acrescimos foi de ", vTot)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 356; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */