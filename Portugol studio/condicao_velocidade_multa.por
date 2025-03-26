programa
{
	real vel, quantmul, multa
	funcao inicio()
	{
		escreva("Qual a vlocidade do carro: ")
		leia(vel)

		se(vel > 80){
			quantmul = vel - 80
			multa = quantmul * 5

			escreva("Você terá que pagar ", multa, " reais de multa")
			
			}senao{
				escreva("Você não foi multado.")
				}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 292; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */