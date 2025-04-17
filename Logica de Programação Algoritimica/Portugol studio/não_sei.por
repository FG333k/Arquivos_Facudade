programa
{
	
	inteiro in, fi, cont, acumulador = 0
	funcao inicio()
	{
		escreva("Digite um numero: ")
		leia(in)
		escreva("Digite o numero final: ")
		leia(fi)
		
		para(cont=in;cont<=fi;cont++){
			
			se (cont%2 == 0){

				acumulador =+ cont
			}
		
		}

		escreva(acumulador, " ")
	}
	

}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 0; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */