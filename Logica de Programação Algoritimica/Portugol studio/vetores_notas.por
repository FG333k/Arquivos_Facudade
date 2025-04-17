programa
{
	inclua biblioteca Util --> util
	funcao inicio()
	{
		inteiro notas[3] // indice : 0, 1

		// Preenchendo o vetor  |
		//                     \/

		para (inteiro i = 0; i < 3; i++){
			
			//leia(notas[i])
			notas[i] = util.sorteia(1, 10) // Numeoros aleatorios de 1 a 10
			
			}

		// Exibino o vetor      |
		//                     \/

		escreva("Vetor: [ ")
		para (inteiro i = 0; i < 3; i++){

			escreva(notas[i], " ")
			
			}
		escreva("]\n")

		// Acessando posição especifica |
		//                             \/

		escreva("Segunda nota: ", notas[1], "\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 226; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */