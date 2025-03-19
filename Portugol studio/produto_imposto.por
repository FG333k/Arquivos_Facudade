programa
{
	real vFab, imp, tax, acreImp, acreTax, vTot
	funcao inicio()
	{
		escreva("Valor de fábrica: ")
		leia(vFab)

			imp = (15.0 / 100.0)
			tax = (30 / 100.0)
			acreImp = (imp * vFab)
			acreTax = (tax * vFab)
			vTot = (vFab + acreImp + acreTax)

		escreva("O valor final de venda do produto é ", vTot)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 173; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */