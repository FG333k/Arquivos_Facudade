programa
{
	real valor, res
	caracter sexo
	funcao inicio()
	{
		faca{
		escreva("\nDigite um valor: ")
		leia(valor)
		escreva("Digite um sexo: ")
		leia(sexo)
		limpa()
		}enquanto(sexo != 'm' e sexo != 'f')

		escolha (sexo){

			caso 'm':
				res = valor - (valor * 10.0/100.0)
				escreva(res)
				pare

			caso 'f':
				res = valor - (valor * 20.0/100.0)
				escreva(res)
				pare
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 396; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */