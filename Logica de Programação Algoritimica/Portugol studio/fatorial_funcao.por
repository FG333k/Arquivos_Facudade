programa
{
	
	funcao inicio()
	{
		inteiro n1, fat
		escreva("Digite um numero: ")
		leia(n1)
		fat = fatorial(n1)
		escreva(fat)
	}

	funcao inteiro fatorial(inteiro num){
			inteiro cont, fat=1

			para(cont=num;cont>=1;cont--){
					fat *= cont
				
				}
			retorne fat
		
		}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 119; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */