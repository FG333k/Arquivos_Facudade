programa
{
	real produto, valDesconto, porcentagem, percentual
	
	funcao inicio()
	{
		escreva("Valor do profuto: ")
		leia(produto)
		escreva("Qul a porcentagem ")
		leia(percentual)

			porcentagem = (percentual / 100.0)
			valDesconto = (produto - (produto * porcentagem))

		escreva("O valor do produto com o desconto de",percentual, "/100 é igual a ", valDesconto)
		
	}
}

/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 336; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */