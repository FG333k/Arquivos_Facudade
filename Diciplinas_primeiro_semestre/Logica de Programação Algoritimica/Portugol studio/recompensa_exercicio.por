programa
{
	real h, pm, din
	funcao inicio()
	{
		escreva("Qantas horas se exercitou por mês?: ")
		leia(h)

		se (h <= 10){

			pm = (h * 2)
			
			}senao se (h > 20){
				
				pm = (h * 5)
				
				}senao{
					
					pm = (h * 10)
					
					}

		din = (pm * 0.05)
		escreva("parabens com seus ", pm, " pontos \n", "você conseguiu uma quantia de ", din, " reais!!")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 30; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */