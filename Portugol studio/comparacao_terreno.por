programa
{
	real c, l, m2
	funcao inicio()
	{
		escreva("Digite o comprimento do terreno (m): ")
		leia(c)
		escreva("Digite a largura do terreno (m): ")
		leia(l)

		m2 = c * l

		se (m2 < 100){
			escreva("TRRENO POPULAR")
			}senao se(m2 > 500){
				escreva("TERRENO VIP")
				}senao{
					escreva("TERRENO MASTER")
					}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 183; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */