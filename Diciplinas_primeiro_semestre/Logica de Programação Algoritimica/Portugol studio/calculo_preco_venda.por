programa
{
	real produto, valDesconto, porcentagem, acrecimo
	
	funcao inicio()
	{
		escreva("Valor de compra: ")
		leia(produto)
		escreva("Valor do acrécimo: ")
		leia(acrecimo)

			porcentagem = (acrecimo / 100.0)
			valDesconto = (produto + (produto * porcentagem))

		escreva("O valor do produto com o preço de venda é ", valDesconto)
		
	}
}

/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 244; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */