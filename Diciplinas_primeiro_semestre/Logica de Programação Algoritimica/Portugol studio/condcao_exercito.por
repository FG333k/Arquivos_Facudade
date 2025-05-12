programa
{
	inteiro idade, falta, an
	funcao inicio()
	{
		escreva("Digite seu ano de nascimento: ")
		leia(an)

		idade = (2025 - an)

		se (idade >= 18){
			falta = idade - 18
			escreva("BORA CAPINAR!! VOÇÊ ja tem ", idade, "Já se passaram ", falta)
			}senao{
				falta = 18 - idade
				escreva("Ainda não precisa capinar mato!Ainda falta ", falta)
				}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 216; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */