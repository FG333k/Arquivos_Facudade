programa
{
	real sal, anos,reaj
	caracter gen
	funcao inicio()
	{
		escreva("Qual o seu salário?: ")
		leia(sal)
		escreva("Quantos anos trabalha na empresa?: ")
		leia(anos)
		escreva("Qual o seu genero?[ f-feminino | m-masculino ]: ")
		leia(gen)


		escolha(gen){

			caso'f':

				se(anos < 15){

					reaj = (sal + ((5.0 / 100.0)  * sal))
					
					}senao se (anos > 20){

						reaj = (sal + ((23.0 / 100.0)  * sal))
						
						}senao{

							reaj = (sal + ((12.0 / 100.0)  * sal))
							
							}
							
				pare

			caso'm':

				se(anos < 20){

					reaj = (((3.0 / 100.0)  * sal) + sal)
					
					}senao se (anos > 30){

						reaj = (sal + ((25.0 / 100.0)  * sal))
						
						}senao{

							reaj = (((13.0 / 100.0)  * sal) + sal)
							
							}
							
				pare

			caso contrario:
				escreva("OPÇÃO INVALIDA SLECIONE [ f-feminino | m-masculino ]")
			
			}

		escreva("O seu salário foi reajustado para ", reaj, "reais.	")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 514; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */