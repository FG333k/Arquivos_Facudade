programa
{
	real sal, temp,reaj
	caracter sx
	funcao inicio()
	{
		escreva("Qial o seu salario?: ")
		leia(sal)
		escreva("Aquanto tempo trabalha na empresa?( ano(s) ): ")
		leia(temp)
		escreva("Qial o seu sexo?(f-feminino, m-masculino): ")
		leia(sx)

		escolha (sx){
			
			caso 'f':

				se (temp < 15){

					reaj = (sal + ((15.0 / 100.0) * sal))
					escreva("O seu salário foi reajustado para ", reaj)
					
					}senao se(temp > 20){
		
						reaj = (sal + ((23.0 / 100.0) * sal))
						escreva("O seu salário foi reajustado para ", reaj)
						
						}senao{
		
							reaj = (sal + ((12.0 / 100.0) * sal))
							escreva("O seu salário foi reajustado para ", reaj)
							
							}
				pare

			caso 'm':

				se (temp < 20){

					reaj = (sal + ((3.0 / 100.0) * sal))
					escreva("O seu salário foi reajustado para ", reaj)
					
					}senao se(temp > 30){
		
						reaj = (sal + ((25.0 / 100.0) * sal))
						escreva("O seu salário foi reajustado para ", reaj)
						
						}senao{
		
							reaj = (sal + ((13.0 / 100.0) * sal))
							escreva("O seu salário foi reajustado para ", reaj)
							
							}
				pare

			caso contrario:
				escreva("Dogite um a opção válida para o sexo [f-feminino,  m-masculino]")
				pare
				
			}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 1245; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */