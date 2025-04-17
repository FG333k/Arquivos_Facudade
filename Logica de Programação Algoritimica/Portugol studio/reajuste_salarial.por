programa
{
	real sal, temp, reaj
	cadeia nome
	funcao inicio()
	{
		escreva("Qual o seu nome?: ")
		leia(nome)
		escreva("Qial o seu salario?: ")
		leia(sal)
		escreva("Aquanto tempo trabalha na empresa?( ano(s) ): ")
		leia(temp)

		se (temp <= 3){

			reaj = (sal + ((3.0 / 100.0) * sal))
			escreva("O seu salário foi reajustado para ", reaj)
			
			}senao se(temp > 10){

				reaj = (sal + ((20.0 / 100.0) * sal))
				escreva("O seu salário foi reajustado para ", reaj)
				
				}senao{

					reaj = (sal + ((12.5 / 100.0) * sal))
					escreva("O seu salário foi reajustado para ", reaj)
					
					}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 255; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */