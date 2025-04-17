programa
{
	real n1, n2, med, fin, res
	funcao inicio()
	{
		escreva("Digite n1: ")
		leia(n1)
		escreva("Digite n2: ")
		leia(n2)

		med = (n1 + n2) / 2

		se (med < 4){
			
			escreva("REPROVADO POR MÉDIA!!")
			
			}senao se (med >= 7){
				escreva("APROVADO POR MÉDIA!!")
				}senao{
					escreva("Foi para final!\n")
					escreva("Digite sua nota final: ")
					leia(fin)

					res =  (med + fin) /2

					se(res >= 5){
						
						escreva("APROVADO NA FINAL!!")
						
						}senao{
							escreva("DEU RUIM!!")
							}
					}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 523; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */