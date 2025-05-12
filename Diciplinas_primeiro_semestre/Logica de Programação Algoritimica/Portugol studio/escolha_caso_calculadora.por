programa
{
	
real n1, n2, res
	caracter oper
	funcao inicio()
	{
		escreva("Digite n1: ")
		leia(n1)
		escreva("Digite n2: ")
		leia(n2)

		escreva("\n============================")
		escreva("\n|   SELECIONE A OPERAÇÃO   |")
		escreva("\n|   + soma                 |")
		escreva("\n|   - subitração           |")
		escreva("\n|   * mutiplicaçã          |")
		escreva("\n|   / divisão              |")
		escreva("\n============================\n")

		leia(oper)

		escolha(oper){
			
			caso '+':
			res = n1 + n2
			escreva(n1, " + ", n2, " = ", res)
			pare


			caso '-':
			res = n1 - n2
			escreva(n1, " - ", n2, " = ", res)
			pare


			caso '*':
			res = n1 * n2
			escreva(n1, " * ", n2, " = ", res)
			pare


			caso '/':
			res = n1 / n2
			escreva(n1, " / ", n2, " = ", res)
			pare


			caso contrario: 
			escreva("Digite alguma operação válida")
			}
	}
}

/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 445; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */