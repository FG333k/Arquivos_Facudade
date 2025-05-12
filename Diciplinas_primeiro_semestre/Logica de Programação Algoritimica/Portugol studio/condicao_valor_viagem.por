programa
{
	real km, valor
	funcao inicio()
	{
		escreva("Qual distancia pretende percorrer em KM: ")
		leia(km)

		se(km <= 200){

			valor = km * 0.50
			
			escreva("Você irá pagar ", valor, " por esta viagem.")
			
			}senao{

				valor = km * 0.45
				
				escreva("Você irá pagar ", valor, "por esta viagem.")
				}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 63; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */