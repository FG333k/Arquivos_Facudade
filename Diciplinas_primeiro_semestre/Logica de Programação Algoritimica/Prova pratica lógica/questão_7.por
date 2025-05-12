programa
{
	real horaAt, pont, dinheiro
	funcao inicio()
	{
		escreva("Quantas horas de atividade fisica você teve esse mês?: ")
		leia(horaAt)

		se (horaAt <= 10){
			
			pont = (2 * horaAt)
			
			}senao se(horaAt > 20){

				pont = (20 * horaAt)
				
				}senao{
					 
					pont = (5 * horaAt)
					
					}
			
		dinheiro = (pont * 0.05)
		escreva("Você obteve ", dinheiro, " reais.")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 304; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */