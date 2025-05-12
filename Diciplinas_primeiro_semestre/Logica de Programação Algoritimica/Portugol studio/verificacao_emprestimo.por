programa
{
	real casa, sal, ano, prest
	funcao inicio()
	{
		escreva("Qaula o valor da casa?: ")
		leia(casa)
		escreva("Qaula o seu salario?: ")
		leia(sal)
		escreva("Em quantos anos vai pagar?: ")
		leia(ano)

		prest = (casa / (ano * 12))

		se (prest > (sal * (30.0 / 100))){

			escreva("EMPRESTIMO NEGADO!! (A parcela mensal exede 30% do seu salário)")
			
			}senao{

				escreva("EMPRESTIMO APROVADO!!")
				
				}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 429; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */