programa
{
	real alt, pes, imc
	funcao inicio()
	{
		escreva("Qual a sua autura (m)?: ")
		leia(alt)
		escreva("Qual a seu peso?: ")
		leia(pes)

		imc = (pes / (alt * alt))
		
		se(imc < 18.5){

			escreva("ABAIXO DO PESO")
			
			}senao se((imc >= 18.5) e (imc < 25)){

				escreva("PESO IDEAL")
				
				}senao se((imc >= 25) e (imc < 30)){

					escreva("SOBREPESO")
					
					}senao se((imc >= 30) e (imc < 40)){

						escreva("OBESIDADE")
						
						}senao{

							escreva("OBESIDADE MORBDA")
							
							}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 164; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */